
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct igc_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;

s32 FUNC_3(struct igc_hw *VAR_4)
{
 s32 VAR_5 = 0;
 s32 VAR_6 = 0;

 while (VAR_6 < VAR_0) {
  if (FUNC_1(VAR_1) & VAR_2)
   break;
  FUNC_2(1000, 2000);
  VAR_6++;
 }

 if (VAR_6 == VAR_0) {
  FUNC_0("Auto read by HW from NVM has not completed.\n");
  VAR_5 = -VAR_3;
  goto out;
 }

out:
 return VAR_5;
}
