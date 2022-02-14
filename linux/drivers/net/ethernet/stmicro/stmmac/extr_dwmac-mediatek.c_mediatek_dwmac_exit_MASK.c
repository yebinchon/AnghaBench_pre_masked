
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct mediatek_dwmac_variant {int num_clks; } ;
struct mediatek_dwmac_plat_data {int clks; struct mediatek_dwmac_variant* variant; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct platform_device *VAR_0, void *VAR_1)
{
 struct mediatek_dwmac_plat_data *VAR_2 = VAR_1;
 const struct mediatek_dwmac_variant *VAR_3 = VAR_2->variant;

 FUNC_0(VAR_3->num_clks, VAR_2->clks);

 FUNC_2(&VAR_0->dev);
 FUNC_1(&VAR_0->dev);
}
