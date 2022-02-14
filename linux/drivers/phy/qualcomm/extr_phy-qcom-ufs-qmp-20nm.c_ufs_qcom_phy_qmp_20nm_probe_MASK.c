
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_qcom_phy {int name; } ;
struct ufs_qcom_phy_qmp_20nm {struct ufs_qcom_phy common_cfg; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct phy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ufs_qcom_phy_qmp_20nm* FUNC_0 (struct device*,int,int ) ;
 int VAR_4 ;
 int FUNC_1 (struct phy*,struct ufs_qcom_phy_qmp_20nm*) ;
 int FUNC_2 (int ,int ,int) ;
 struct phy* FUNC_3 (struct platform_device*,struct ufs_qcom_phy*,int *,int *) ;
 int FUNC_4 (struct ufs_qcom_phy*) ;
 int FUNC_5 (struct ufs_qcom_phy*) ;
 int FUNC_6 (struct ufs_qcom_phy*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct phy *VAR_8;
 struct ufs_qcom_phy_qmp_20nm *VAR_9;
 struct ufs_qcom_phy *VAR_10;
 int VAR_11 = 0;

 VAR_9 = FUNC_0(VAR_7, sizeof(*VAR_9), VAR_2);
 if (!VAR_9) {
  VAR_11 = -VAR_1;
  goto out;
 }
 VAR_10 = &VAR_9->common_cfg;

 VAR_8 = FUNC_3(VAR_6, VAR_10,
    &VAR_5, &VAR_4);

 if (!VAR_8) {
  VAR_11 = -VAR_0;
  goto out;
 }

 VAR_11 = FUNC_4(VAR_10);
 if (VAR_11)
  goto out;

 VAR_11 = FUNC_5(VAR_10);
 if (VAR_11)
  goto out;

 FUNC_6(VAR_10);

 FUNC_1(VAR_8, VAR_9);

 FUNC_2(VAR_10->name, VAR_3, sizeof(VAR_10->name));

out:
 return VAR_11;
}
