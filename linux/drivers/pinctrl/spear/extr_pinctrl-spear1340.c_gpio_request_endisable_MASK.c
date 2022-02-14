
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spear_pmx {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct spear_pmx*,unsigned int) ;
 int FUNC_1 (struct spear_pmx*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct spear_pmx *VAR_2, int VAR_3,
  bool VAR_4)
{
 unsigned int VAR_5, VAR_6, VAR_7;
 unsigned int VAR_8;


 VAR_3++;

 VAR_6 = VAR_3 / 32;
 VAR_7 = VAR_3 % 32;

 if (VAR_6 <= 3)
  VAR_5 = VAR_0 + VAR_6 * sizeof(int *);
 else
  VAR_5 = VAR_1 + (VAR_6 - 4) * sizeof(int *);

 VAR_8 = FUNC_0(VAR_2, VAR_5);
 if (VAR_4)
  VAR_8 &= ~(0x1 << VAR_7);
 else
  VAR_8 |= 0x1 << VAR_7;

 FUNC_1(VAR_2, VAR_8, VAR_5);
}
