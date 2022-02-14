
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* min_uV; void* max_uV; } ;
struct ufs_qcom_phy {int name; TYPE_1__ vdda_phy; } ;
struct ufs_qcom_phy_qmp_14nm {struct ufs_qcom_phy common_cfg; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct phy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 struct ufs_qcom_phy_qmp_14nm* FUNC_0 (struct device*,int,int ) ;
 int VAR_5 ;
 int FUNC_1 (struct phy*,struct ufs_qcom_phy_qmp_14nm*) ;
 int FUNC_2 (int ,int ,int) ;
 struct phy* FUNC_3 (struct platform_device*,struct ufs_qcom_phy*,int *,int *) ;
 int FUNC_4 (struct ufs_qcom_phy*) ;
 int FUNC_5 (struct ufs_qcom_phy*) ;
 int FUNC_6 (struct ufs_qcom_phy*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct phy *VAR_9;
 struct ufs_qcom_phy_qmp_14nm *VAR_10;
 struct ufs_qcom_phy *VAR_11;
 int VAR_12 = 0;

 VAR_10 = FUNC_0(VAR_8, sizeof(*VAR_10), VAR_2);
 if (!VAR_10) {
  VAR_12 = -VAR_1;
  goto out;
 }
 VAR_11 = &VAR_10->common_cfg;

 VAR_9 = FUNC_3(VAR_7, VAR_11,
    &VAR_6, &VAR_5);

 if (!VAR_9) {
  VAR_12 = -VAR_0;
  goto out;
 }

 VAR_12 = FUNC_4(VAR_11);
 if (VAR_12)
  goto out;

 VAR_12 = FUNC_5(VAR_11);
 if (VAR_12)
  goto out;

 VAR_11->vdda_phy.max_uV = VAR_4;
 VAR_11->vdda_phy.min_uV = VAR_4;

 FUNC_6(VAR_11);

 FUNC_1(VAR_9, VAR_10);

 FUNC_2(VAR_11->name, VAR_3, sizeof(VAR_11->name));

out:
 return VAR_12;
}
