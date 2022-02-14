
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
typedef int s32 ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct super_block*,scalar_t__,scalar_t__) ;

void FUNC_2(struct super_block *VAR_0, u32 VAR_1, s32 VAR_2)
{
 if (VAR_2 == 0)
  return;

 while (VAR_2 > 1) {
  if (FUNC_1(VAR_0, VAR_1, VAR_1 + 1) < 0)
   break;
  VAR_1++;
  VAR_2--;
 }
 FUNC_1(VAR_0, VAR_1, FUNC_0(~0));
}
