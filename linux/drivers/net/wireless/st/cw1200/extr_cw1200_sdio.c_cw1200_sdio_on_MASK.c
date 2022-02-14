
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cw1200_platform_data_sdio {scalar_t__ reset; scalar_t__ powerup; scalar_t__ (* clk_ctrl ) (struct cw1200_platform_data_sdio const*,int) ;scalar_t__ (* power_ctrl ) (struct cw1200_platform_data_sdio const*,int) ;} ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,char*) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (struct cw1200_platform_data_sdio const*,int) ;
 scalar_t__ FUNC_6 (struct cw1200_platform_data_sdio const*,int) ;

__attribute__((used)) static int FUNC_7(const struct cw1200_platform_data_sdio *VAR_0)
{

 if (VAR_0->reset) {
  FUNC_1(VAR_0->reset, "cw1200_wlan_reset");
  FUNC_0(VAR_0->reset, 0);
 }
 if (VAR_0->powerup) {
  FUNC_1(VAR_0->powerup, "cw1200_wlan_powerup");
  FUNC_0(VAR_0->powerup, 0);
 }
 if (VAR_0->reset || VAR_0->powerup)
  FUNC_3(10);


 if (VAR_0->power_ctrl) {
  if (VAR_0->power_ctrl(VAR_0, 1)) {
   FUNC_4("power_ctrl() failed!\n");
   return -1;
  }
 }


 if (VAR_0->clk_ctrl) {
  if (VAR_0->clk_ctrl(VAR_0, 1)) {
   FUNC_4("clk_ctrl() failed!\n");
   return -1;
  }
  FUNC_3(10);
 }


 if (VAR_0->powerup) {
  FUNC_2(VAR_0->powerup, 1);
  FUNC_3(250);
 }

 if (VAR_0->reset) {
  FUNC_2(VAR_0->reset, 1);
  FUNC_3(50);
 }
 return 0;
}
