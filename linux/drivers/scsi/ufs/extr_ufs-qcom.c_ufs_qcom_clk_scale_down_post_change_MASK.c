
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_qcom_host {int dummy; } ;
struct ufs_hba {int dummy; } ;


 int FUNC_0 (struct ufs_qcom_host*) ;
 int FUNC_1 (struct ufs_hba*,int) ;
 struct ufs_qcom_host* FUNC_2 (struct ufs_hba*) ;

__attribute__((used)) static int FUNC_3(struct ufs_hba *VAR_0)
{
 struct ufs_qcom_host *VAR_1 = FUNC_2(VAR_0);

 if (!FUNC_0(VAR_1))
  return 0;


 return FUNC_1(VAR_0, 75);
}
