
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_qcom_host {int generic_phy; } ;
struct ufs_hba {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ufs_qcom_host*) ;
 struct ufs_qcom_host* FUNC_3 (struct ufs_hba*) ;

__attribute__((used)) static void FUNC_4(struct ufs_hba *VAR_0)
{
 struct ufs_qcom_host *VAR_1 = FUNC_3(VAR_0);

 FUNC_2(VAR_1);
 FUNC_1(VAR_1->generic_phy);
 FUNC_0(VAR_1->generic_phy);
}
