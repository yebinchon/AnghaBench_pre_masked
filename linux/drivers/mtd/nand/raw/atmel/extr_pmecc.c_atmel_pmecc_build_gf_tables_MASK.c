
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_pmecc_gf_tables {unsigned int* alpha_to; unsigned int* index_of; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static int FUNC_2(int VAR_1, unsigned int VAR_2,
           struct atmel_pmecc_gf_tables *VAR_3)
{
 unsigned int VAR_4, VAR_5 = 1;
 const unsigned int VAR_6 = FUNC_0(FUNC_1(VAR_2));
 unsigned int VAR_7 = FUNC_0(VAR_1) - 1;


 if (VAR_6 != (1u << VAR_1))
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_7; VAR_4++) {
  VAR_3->alpha_to[VAR_4] = VAR_5;
  VAR_3->index_of[VAR_5] = VAR_4;
  if (VAR_4 && (VAR_5 == 1))

   return -VAR_0;
  VAR_5 <<= 1;
  if (VAR_5 & VAR_6)
   VAR_5 ^= VAR_2;
 }
 VAR_3->alpha_to[VAR_7] = 1;
 VAR_3->index_of[0] = 0;

 return 0;
}
