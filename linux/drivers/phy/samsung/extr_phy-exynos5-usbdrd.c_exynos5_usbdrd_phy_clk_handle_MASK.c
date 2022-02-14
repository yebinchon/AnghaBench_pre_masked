
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct exynos5_usbdrd_phy {int * itpclk; int dev; int * utmiclk; int * pipeclk; TYPE_1__* drv_data; int extrefclk; int * ref_clk; int * clk; } ;
struct TYPE_2__ {int has_common_clk_gate; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned long FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,char*) ;
 void* FUNC_5 (int ,char*) ;
 int FUNC_6 (unsigned long,int *) ;

__attribute__((used)) static int FUNC_7(struct exynos5_usbdrd_phy *VAR_0)
{
 unsigned long VAR_1;
 int VAR_2;

 VAR_0->clk = FUNC_5(VAR_0->dev, "phy");
 if (FUNC_0(VAR_0->clk)) {
  FUNC_3(VAR_0->dev, "Failed to get phy clock\n");
  return FUNC_1(VAR_0->clk);
 }

 VAR_0->ref_clk = FUNC_5(VAR_0->dev, "ref");
 if (FUNC_0(VAR_0->ref_clk)) {
  FUNC_3(VAR_0->dev, "Failed to get phy reference clock\n");
  return FUNC_1(VAR_0->ref_clk);
 }
 VAR_1 = FUNC_2(VAR_0->ref_clk);

 VAR_2 = FUNC_6(VAR_1, &VAR_0->extrefclk);
 if (VAR_2) {
  FUNC_3(VAR_0->dev, "Clock rate (%ld) not supported\n",
   VAR_1);
  return VAR_2;
 }

 if (!VAR_0->drv_data->has_common_clk_gate) {
  VAR_0->pipeclk = FUNC_5(VAR_0->dev, "phy_pipe");
  if (FUNC_0(VAR_0->pipeclk)) {
   FUNC_4(VAR_0->dev,
     "PIPE3 phy operational clock not specified\n");
   VAR_0->pipeclk = ((void*)0);
  }

  VAR_0->utmiclk = FUNC_5(VAR_0->dev, "phy_utmi");
  if (FUNC_0(VAR_0->utmiclk)) {
   FUNC_4(VAR_0->dev,
     "UTMI phy operational clock not specified\n");
   VAR_0->utmiclk = ((void*)0);
  }

  VAR_0->itpclk = FUNC_5(VAR_0->dev, "itp");
  if (FUNC_0(VAR_0->itpclk)) {
   FUNC_4(VAR_0->dev,
     "ITP clock from main OSC not specified\n");
   VAR_0->itpclk = ((void*)0);
  }
 }

 return 0;
}
