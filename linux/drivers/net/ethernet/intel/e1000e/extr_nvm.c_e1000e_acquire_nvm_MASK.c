
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
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;

s32 FUNC_4(struct e1000_hw *VAR_5)
{
 u32 VAR_6 = FUNC_1(VAR_4);
 s32 VAR_7 = VAR_3;

 FUNC_2(VAR_4, VAR_6 | VAR_1);
 VAR_6 = FUNC_1(VAR_4);

 while (VAR_7) {
  if (VAR_6 & VAR_0)
   break;
  FUNC_3(5);
  VAR_6 = FUNC_1(VAR_4);
  VAR_7--;
 }

 if (!VAR_7) {
  VAR_6 &= ~VAR_1;
  FUNC_2(VAR_4, VAR_6);
  FUNC_0("Could not acquire NVM grant\n");
  return -VAR_2;
 }

 return 0;
}
