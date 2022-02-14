
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rubin_state {unsigned long p; unsigned long q; int bit_number; unsigned long rec_q; int pp; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct rubin_state *VAR_2, unsigned long VAR_3,
   unsigned long VAR_4)
{
 register unsigned long VAR_5 = VAR_0;
 unsigned long VAR_6;
 int VAR_7, VAR_8 = 0;






 do {
  VAR_8++;
  VAR_4 &= VAR_5;
  VAR_4 <<= 1;
  VAR_3 <<= 1;
 } while ((VAR_4 >= VAR_1) || ((VAR_3 + VAR_4) <= VAR_1));

 VAR_2->p = VAR_3;
 VAR_2->q = VAR_4;

 VAR_2->bit_number += VAR_8;




 VAR_6 = VAR_2->rec_q;
 do {
  VAR_7 = FUNC_0(&VAR_2->pp);
  VAR_6 &= VAR_5;
  VAR_6 <<= 1;
  VAR_6 += VAR_7;
 } while (--VAR_8);
 VAR_2->rec_q = VAR_6;
}
