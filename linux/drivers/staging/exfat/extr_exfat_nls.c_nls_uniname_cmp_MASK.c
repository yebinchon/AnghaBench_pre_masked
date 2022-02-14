
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct super_block {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct super_block*,int) ;

int FUNC_1(struct super_block *VAR_1, u16 *VAR_2, u16 *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++, VAR_2++, VAR_3++) {
  if (FUNC_0(VAR_1, *VAR_2) != FUNC_0(VAR_1, *VAR_3))
   return 1;
  if (*VAR_2 == 0x0)
   return 0;
 }
 return 0;
}
