
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_resources {int dummy; } ;
struct platform_device {int dev; } ;
struct plat_stmmacenet_data {void* stmmac_clk; void* pclk; } ;


 void* FUNC_0 (void*) ;
 void* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int *,char*,...) ;
 void* FUNC_7 (int *,char*) ;

__attribute__((used)) static void *FUNC_8(struct platform_device *VAR_0,
      struct plat_stmmacenet_data *VAR_1,
      struct stmmac_resources *VAR_2)
{
 int VAR_3;

 VAR_1->stmmac_clk = FUNC_7(&VAR_0->dev, "apb_pclk");
 if (FUNC_2(VAR_1->stmmac_clk)) {
  FUNC_6(&VAR_0->dev, "apb_pclk clock not found.\n");
  return FUNC_0(VAR_1->stmmac_clk);
 }

 VAR_3 = FUNC_5(VAR_1->stmmac_clk);
 if (VAR_3 < 0) {
  FUNC_6(&VAR_0->dev, "failed to enable apb_pclk clock: %d\n",
   VAR_3);
  return FUNC_1(VAR_3);
 }

 VAR_1->pclk = FUNC_7(&VAR_0->dev, "phy_ref_clk");
 if (FUNC_2(VAR_1->pclk)) {
  FUNC_6(&VAR_0->dev, "phy_ref_clk clock not found.\n");
  VAR_3 = FUNC_3(VAR_1->pclk);
  goto disable;
 }

 VAR_3 = FUNC_5(VAR_1->pclk);
 if (VAR_3 < 0) {
  FUNC_6(&VAR_0->dev, "failed to enable phy_ref clock: %d\n",
   VAR_3);
  goto disable;
 }

 return ((void*)0);

disable:
 FUNC_4(VAR_1->stmmac_clk);
 return FUNC_1(VAR_3);
}
