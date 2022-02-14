
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_qcom_host {int device_reset; } ;
struct ufs_hba {int dummy; } ;


 int FUNC_0 (int ,int) ;
 struct ufs_qcom_host* FUNC_1 (struct ufs_hba*) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct ufs_hba *VAR_0)
{
 struct ufs_qcom_host *VAR_1 = FUNC_1(VAR_0);


 if (!VAR_1->device_reset)
  return;





 FUNC_0(VAR_1->device_reset, 1);
 FUNC_2(10, 15);

 FUNC_0(VAR_1->device_reset, 0);
 FUNC_2(10, 15);
}
