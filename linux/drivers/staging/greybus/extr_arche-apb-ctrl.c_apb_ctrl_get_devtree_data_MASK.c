
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct arche_apb_ctrl_drvdata {int spi_en_polarity_high; void* pin_default; void* pinctrl; void* vio; void* vcore; void* pwrdn; void* clk_en; void* pwroff; void* boot_ret; void* resetn; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*,...) ;
 void* FUNC_4 (struct device*,char*,int ) ;
 void* FUNC_5 (struct device*,char*,int ) ;
 void* FUNC_6 (struct device*) ;
 void* FUNC_7 (struct device*,char*) ;
 scalar_t__ FUNC_8 (int ,char*) ;
 void* FUNC_9 (void*,char*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_2,
         struct arche_apb_ctrl_drvdata *VAR_3)
{
 struct device *VAR_4 = &VAR_2->dev;
 int VAR_5;

 VAR_3->resetn = FUNC_4(VAR_4, "reset", VAR_1);
 if (FUNC_0(VAR_3->resetn)) {
  VAR_5 = FUNC_1(VAR_3->resetn);
  FUNC_2(VAR_4, "Failed requesting reset GPIO: %d\n", VAR_5);
  return VAR_5;
 }

 VAR_3->boot_ret = FUNC_4(VAR_4, "boot-ret", VAR_1);
 if (FUNC_0(VAR_3->boot_ret)) {
  VAR_5 = FUNC_1(VAR_3->boot_ret);
  FUNC_2(VAR_4, "Failed requesting bootret GPIO: %d\n", VAR_5);
  return VAR_5;
 }


 VAR_3->pwroff = FUNC_5(VAR_4, "pwr-off", VAR_0);
 if (FUNC_0(VAR_3->pwroff)) {
  VAR_5 = FUNC_1(VAR_3->pwroff);
  FUNC_2(VAR_4, "Failed requesting pwroff_n GPIO: %d\n", VAR_5);
  return VAR_5;
 }


 VAR_3->clk_en = FUNC_5(VAR_4, "clock-en", VAR_1);
 if (FUNC_0(VAR_3->clk_en)) {
  VAR_5 = FUNC_1(VAR_3->clk_en);
  FUNC_2(VAR_4, "Failed requesting APB clock en GPIO: %d\n", VAR_5);
  return VAR_5;
 }

 VAR_3->pwrdn = FUNC_4(VAR_4, "pwr-down", VAR_1);
 if (FUNC_0(VAR_3->pwrdn)) {
  VAR_5 = FUNC_1(VAR_3->pwrdn);
  FUNC_3(VAR_4, "Failed requesting power down GPIO: %d\n", VAR_5);
  return VAR_5;
 }


 VAR_3->vcore = FUNC_7(VAR_4, "vcore");
 if (FUNC_0(VAR_3->vcore))
  FUNC_3(VAR_4, "no core regulator found\n");

 VAR_3->vio = FUNC_7(VAR_4, "vio");
 if (FUNC_0(VAR_3->vio))
  FUNC_3(VAR_4, "no IO regulator found\n");

 VAR_3->pinctrl = FUNC_6(&VAR_2->dev);
 if (FUNC_0(VAR_3->pinctrl)) {
  FUNC_2(&VAR_2->dev, "could not get pinctrl handle\n");
  return FUNC_1(VAR_3->pinctrl);
 }
 VAR_3->pin_default = FUNC_9(VAR_3->pinctrl, "default");
 if (FUNC_0(VAR_3->pin_default)) {
  FUNC_2(&VAR_2->dev, "could not get default pin state\n");
  return FUNC_1(VAR_3->pin_default);
 }


 if (FUNC_8(VAR_2->dev.of_node, "gb,spi-en-active-high"))
  VAR_3->spi_en_polarity_high = 1;

 return 0;
}
