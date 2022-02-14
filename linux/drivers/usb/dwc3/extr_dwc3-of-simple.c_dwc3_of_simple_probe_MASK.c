
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct dwc3_of_simple {int need_reset; int pulse_resets; int num_clocks; int resets; int clks; struct device* dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct device*,int *) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (struct device*,char*,int) ;
 struct dwc3_of_simple* FUNC_7 (struct device*,int,int ) ;
 scalar_t__ FUNC_8 (struct device_node*,char*) ;
 int FUNC_9 (struct device_node*,int *,int *,struct device*) ;
 int FUNC_10 (struct device_node*,int,int,int) ;
 int FUNC_11 (struct platform_device*,struct dwc3_of_simple*) ;
 int FUNC_12 (struct device*) ;
 int FUNC_13 (struct device*) ;
 int FUNC_14 (struct device*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_2)
{
 struct dwc3_of_simple *VAR_3;
 struct device *VAR_4 = &VAR_2->dev;
 struct device_node *VAR_5 = VAR_4->of_node;

 int VAR_6;
 bool VAR_7 = 0;

 VAR_3 = FUNC_7(VAR_4, sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 FUNC_11(VAR_2, VAR_3);
 VAR_3->dev = VAR_4;





 if (FUNC_8(VAR_5, "rockchip,rk3399-dwc3"))
  VAR_3->need_reset = 1;

 if (FUNC_8(VAR_5, "amlogic,meson-axg-dwc3") ||
     FUNC_8(VAR_5, "amlogic,meson-gxl-dwc3")) {
  VAR_7 = 1;
  VAR_3->pulse_resets = 1;
 }

 VAR_3->resets = FUNC_10(VAR_5, VAR_7, 1,
          1);
 if (FUNC_0(VAR_3->resets)) {
  VAR_6 = FUNC_1(VAR_3->resets);
  FUNC_6(VAR_4, "failed to get device resets, err=%d\n", VAR_6);
  return VAR_6;
 }

 if (VAR_3->pulse_resets) {
  VAR_6 = FUNC_18(VAR_3->resets);
  if (VAR_6)
   goto err_resetc_put;
 } else {
  VAR_6 = FUNC_16(VAR_3->resets);
  if (VAR_6)
   goto err_resetc_put;
 }

 VAR_6 = FUNC_3(VAR_3->dev, &VAR_3->clks);
 if (VAR_6 < 0)
  goto err_resetc_assert;

 VAR_3->num_clocks = VAR_6;
 VAR_6 = FUNC_4(VAR_3->num_clocks, VAR_3->clks);
 if (VAR_6)
  goto err_resetc_assert;

 VAR_6 = FUNC_9(VAR_5, ((void*)0), ((void*)0), VAR_4);
 if (VAR_6)
  goto err_clk_put;

 FUNC_14(VAR_4);
 FUNC_12(VAR_4);
 FUNC_13(VAR_4);

 return 0;

err_clk_put:
 FUNC_2(VAR_3->num_clocks, VAR_3->clks);
 FUNC_5(VAR_3->num_clocks, VAR_3->clks);

err_resetc_assert:
 if (!VAR_3->pulse_resets)
  FUNC_15(VAR_3->resets);

err_resetc_put:
 FUNC_17(VAR_3->resets);
 return VAR_6;
}
