
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct igc_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;

s32 FUNC_4(struct igc_hw *VAR_5)
{
 s32 VAR_6 = VAR_4;
 u32 VAR_7 = FUNC_1(VAR_0);
 s32 VAR_8 = 0;

 FUNC_3(VAR_0, VAR_7 | VAR_2);
 VAR_7 = FUNC_1(VAR_0);

 while (VAR_6) {
  if (VAR_7 & VAR_1)
   break;
  FUNC_2(5);
  VAR_7 = FUNC_1(VAR_0);
  VAR_6--;
 }

 if (!VAR_6) {
  VAR_7 &= ~VAR_2;
  FUNC_3(VAR_0, VAR_7);
  FUNC_0("Could not acquire NVM grant\n");
  VAR_8 = -VAR_3;
 }

 return VAR_8;
}
