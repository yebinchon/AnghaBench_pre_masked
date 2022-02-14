
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
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int,int) ;

s32 FUNC_4(struct e1000_hw *VAR_6)
{
 u32 VAR_7;
 s32 VAR_8 = VAR_4;

 VAR_7 = FUNC_1(VAR_0);
 VAR_7 |= VAR_1;
 FUNC_2(VAR_0, VAR_7);

 while (VAR_8) {
  if (!(FUNC_1(VAR_5) & VAR_3))
   break;
  FUNC_3(100, 200);
  VAR_8--;
 }

 if (!VAR_8) {
  FUNC_0("Master requests are pending.\n");
  return -VAR_2;
 }

 return 0;
}
