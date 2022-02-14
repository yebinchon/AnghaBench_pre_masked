
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct mediatek_dwmac_variant {int (* dwmac_set_phy_interface ) (struct mediatek_dwmac_plat_data*) ;int (* dwmac_set_delay ) (struct mediatek_dwmac_plat_data*) ;int num_clks; int dma_bit_mask; } ;
struct mediatek_dwmac_plat_data {int dev; int clks; struct mediatek_dwmac_variant* variant; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct mediatek_dwmac_plat_data*) ;
 int FUNC_7 (struct mediatek_dwmac_plat_data*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0, void *VAR_1)
{
 struct mediatek_dwmac_plat_data *VAR_2 = VAR_1;
 const struct mediatek_dwmac_variant *VAR_3 = VAR_2->variant;
 int VAR_4;

 VAR_4 = FUNC_3(VAR_2->dev, FUNC_0(VAR_3->dma_bit_mask));
 if (VAR_4) {
  FUNC_2(VAR_2->dev, "No suitable DMA available, err = %d\n", VAR_4);
  return VAR_4;
 }

 VAR_4 = VAR_3->dwmac_set_phy_interface(VAR_2);
 if (VAR_4) {
  FUNC_2(VAR_2->dev, "failed to set phy interface, err = %d\n", VAR_4);
  return VAR_4;
 }

 VAR_4 = VAR_3->dwmac_set_delay(VAR_2);
 if (VAR_4) {
  FUNC_2(VAR_2->dev, "failed to set delay value, err = %d\n", VAR_4);
  return VAR_4;
 }

 VAR_4 = FUNC_1(VAR_3->num_clks, VAR_2->clks);
 if (VAR_4) {
  FUNC_2(VAR_2->dev, "failed to enable clks, err = %d\n", VAR_4);
  return VAR_4;
 }

 FUNC_4(&VAR_0->dev);
 FUNC_5(&VAR_0->dev);

 return 0;
}
