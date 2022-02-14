
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct dsi_data {scalar_t__ scp_clk_refcount; int vdds_dsi_enabled; int * vdds_dsi_reg; int pll; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 struct dsi_data* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct platform_device* FUNC_7 (struct device*) ;

__attribute__((used)) static void FUNC_8(struct device *VAR_0, struct device *VAR_1, void *VAR_2)
{
 struct platform_device *VAR_3 = FUNC_7(VAR_0);
 struct dsi_data *VAR_4 = FUNC_1(VAR_3);

 FUNC_4(&VAR_3->dev);

 FUNC_0(VAR_4->scp_clk_refcount > 0);

 FUNC_3(&VAR_4->pll);

 FUNC_2(VAR_3);

 FUNC_5(&VAR_3->dev);

 if (VAR_4->vdds_dsi_reg != ((void*)0) && VAR_4->vdds_dsi_enabled) {
  FUNC_6(VAR_4->vdds_dsi_reg);
  VAR_4->vdds_dsi_enabled = 0;
 }
}
