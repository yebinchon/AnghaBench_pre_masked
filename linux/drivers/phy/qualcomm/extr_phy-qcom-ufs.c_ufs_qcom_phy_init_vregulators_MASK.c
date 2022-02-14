
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_qcom_phy {int vddp_ref_clk; int dev; int vdda_phy; int vdda_pll; } ;


 int FUNC_0 (int ,int *,char*) ;

int FUNC_1(struct ufs_qcom_phy *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0->dev, &VAR_0->vdda_pll,
  "vdda-pll");
 if (VAR_1)
  goto out;

 VAR_1 = FUNC_0(VAR_0->dev, &VAR_0->vdda_phy,
  "vdda-phy");

 if (VAR_1)
  goto out;

 VAR_1 = FUNC_0(VAR_0->dev, &VAR_0->vddp_ref_clk,
         "vddp-ref-clk");

out:
 return VAR_1;
}
