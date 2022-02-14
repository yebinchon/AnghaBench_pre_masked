
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ reg; } ;
struct ufs_qcom_phy {int ufs_reset; TYPE_2__ vdda_phy; int dev; TYPE_2__ vdda_pll; TYPE_2__ vddp_ref_clk; TYPE_1__* phy_spec_ops; } ;
struct phy {int dummy; } ;
struct TYPE_3__ {int (* power_control ) (struct ufs_qcom_phy*,int) ;} ;


 struct ufs_qcom_phy* FUNC_0 (struct phy*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ufs_qcom_phy*,int) ;
 int FUNC_3 (struct ufs_qcom_phy*) ;
 int FUNC_4 (struct ufs_qcom_phy*) ;
 int FUNC_5 (int ,TYPE_2__*) ;

int FUNC_6(struct phy *VAR_0)
{
 struct ufs_qcom_phy *VAR_1 = FUNC_0(VAR_0);

 VAR_1->phy_spec_ops->power_control(VAR_1, 0);

 if (VAR_1->vddp_ref_clk.reg)
  FUNC_5(VAR_1->dev,
       &VAR_1->vddp_ref_clk);
 FUNC_4(VAR_1);
 FUNC_3(VAR_1);

 FUNC_5(VAR_1->dev, &VAR_1->vdda_pll);
 FUNC_5(VAR_1->dev, &VAR_1->vdda_phy);
 FUNC_1(VAR_1->ufs_reset);
 return 0;
}
