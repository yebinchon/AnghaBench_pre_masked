
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_tegra {int pad_control_available; int * pinctrl_state_1v8; int * pinctrl_sdmmc; int * pinctrl_state_3v3; int * pinctrl_state_3v3_drv; int * pinctrl_state_1v8_drv; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,char*,int ) ;
 int FUNC_3 (struct device*,char*,int ) ;
 int * FUNC_4 (struct device*) ;
 void* FUNC_5 (int *,char*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_1,
      struct sdhci_tegra *VAR_2)
{
 VAR_2->pinctrl_sdmmc = FUNC_4(VAR_1);
 if (FUNC_0(VAR_2->pinctrl_sdmmc)) {
  FUNC_2(VAR_1, "No pinctrl info, err: %ld\n",
   FUNC_1(VAR_2->pinctrl_sdmmc));
  return -1;
 }

 VAR_2->pinctrl_state_1v8_drv = FUNC_5(
    VAR_2->pinctrl_sdmmc, "sdmmc-1v8-drv");
 if (FUNC_0(VAR_2->pinctrl_state_1v8_drv)) {
  if (FUNC_1(VAR_2->pinctrl_state_1v8_drv) == -VAR_0)
   VAR_2->pinctrl_state_1v8_drv = ((void*)0);
 }

 VAR_2->pinctrl_state_3v3_drv = FUNC_5(
    VAR_2->pinctrl_sdmmc, "sdmmc-3v3-drv");
 if (FUNC_0(VAR_2->pinctrl_state_3v3_drv)) {
  if (FUNC_1(VAR_2->pinctrl_state_3v3_drv) == -VAR_0)
   VAR_2->pinctrl_state_3v3_drv = ((void*)0);
 }

 VAR_2->pinctrl_state_3v3 =
  FUNC_5(VAR_2->pinctrl_sdmmc, "sdmmc-3v3");
 if (FUNC_0(VAR_2->pinctrl_state_3v3)) {
  FUNC_3(VAR_1, "Missing 3.3V pad state, err: %ld\n",
    FUNC_1(VAR_2->pinctrl_state_3v3));
  return -1;
 }

 VAR_2->pinctrl_state_1v8 =
  FUNC_5(VAR_2->pinctrl_sdmmc, "sdmmc-1v8");
 if (FUNC_0(VAR_2->pinctrl_state_1v8)) {
  FUNC_3(VAR_1, "Missing 1.8V pad state, err: %ld\n",
    FUNC_1(VAR_2->pinctrl_state_1v8));
  return -1;
 }

 VAR_2->pad_control_available = 1;

 return 0;
}
