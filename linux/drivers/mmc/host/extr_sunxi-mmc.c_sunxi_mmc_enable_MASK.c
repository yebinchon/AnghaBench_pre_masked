
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunxi_mmc_host {int reset; int clk_ahb; int clk_mmc; int clk_output; int clk_sample; int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sunxi_mmc_host*) ;

__attribute__((used)) static int FUNC_7(struct sunxi_mmc_host *VAR_0)
{
 int VAR_1;

 if (!FUNC_0(VAR_0->reset)) {
  VAR_1 = FUNC_5(VAR_0->reset);
  if (VAR_1) {
   FUNC_3(VAR_0->dev, "Couldn't reset the MMC controller (%d)\n",
    VAR_1);
   return VAR_1;
  }
 }

 VAR_1 = FUNC_2(VAR_0->clk_ahb);
 if (VAR_1) {
  FUNC_3(VAR_0->dev, "Couldn't enable the bus clocks (%d)\n", VAR_1);
  goto error_assert_reset;
 }

 VAR_1 = FUNC_2(VAR_0->clk_mmc);
 if (VAR_1) {
  FUNC_3(VAR_0->dev, "Enable mmc clk err %d\n", VAR_1);
  goto error_disable_clk_ahb;
 }

 VAR_1 = FUNC_2(VAR_0->clk_output);
 if (VAR_1) {
  FUNC_3(VAR_0->dev, "Enable output clk err %d\n", VAR_1);
  goto error_disable_clk_mmc;
 }

 VAR_1 = FUNC_2(VAR_0->clk_sample);
 if (VAR_1) {
  FUNC_3(VAR_0->dev, "Enable sample clk err %d\n", VAR_1);
  goto error_disable_clk_output;
 }





 VAR_1 = FUNC_6(VAR_0);
 if (VAR_1)
  goto error_disable_clk_sample;

 return 0;

error_disable_clk_sample:
 FUNC_1(VAR_0->clk_sample);
error_disable_clk_output:
 FUNC_1(VAR_0->clk_output);
error_disable_clk_mmc:
 FUNC_1(VAR_0->clk_mmc);
error_disable_clk_ahb:
 FUNC_1(VAR_0->clk_ahb);
error_assert_reset:
 if (!FUNC_0(VAR_0->reset))
  FUNC_4(VAR_0->reset);
 return VAR_1;
}
