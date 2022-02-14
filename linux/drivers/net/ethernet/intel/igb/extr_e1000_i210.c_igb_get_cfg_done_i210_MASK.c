
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;

s32 FUNC_3(struct e1000_hw *VAR_3)
{
 s32 VAR_4 = VAR_2;
 u32 VAR_5 = VAR_1;

 while (VAR_4) {
  if (FUNC_1(VAR_0) & VAR_5)
   break;
  FUNC_2(1000, 2000);
  VAR_4--;
 }
 if (!VAR_4)
  FUNC_0("MNG configuration cycle has not completed.\n");

 return 0;
}
