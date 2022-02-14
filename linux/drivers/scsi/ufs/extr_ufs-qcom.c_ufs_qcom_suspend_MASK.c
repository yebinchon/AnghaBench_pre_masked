
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_qcom_host {struct phy* generic_phy; } ;
struct ufs_hba {int dummy; } ;
struct phy {int dummy; } ;
typedef enum ufs_pm_op { ____Placeholder_ufs_pm_op } ufs_pm_op ;


 int FUNC_0 (struct phy*) ;
 int FUNC_1 (struct ufs_qcom_host*) ;
 int FUNC_2 (struct ufs_hba*) ;
 scalar_t__ FUNC_3 (struct ufs_hba*) ;
 struct ufs_qcom_host* FUNC_4 (struct ufs_hba*) ;

__attribute__((used)) static int FUNC_5(struct ufs_hba *VAR_0, enum ufs_pm_op VAR_1)
{
 struct ufs_qcom_host *VAR_2 = FUNC_4(VAR_0);
 struct phy *VAR_3 = VAR_2->generic_phy;
 int VAR_4 = 0;

 if (FUNC_3(VAR_0)) {





  FUNC_1(VAR_2);
  FUNC_0(VAR_3);

 } else if (!FUNC_2(VAR_0)) {
  FUNC_1(VAR_2);
 }

 return VAR_4;
}
