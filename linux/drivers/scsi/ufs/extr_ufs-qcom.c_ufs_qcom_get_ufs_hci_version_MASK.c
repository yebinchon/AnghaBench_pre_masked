
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int major; } ;
struct ufs_qcom_host {TYPE_1__ hw_ver; } ;
struct ufs_hba {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ufs_qcom_host* FUNC_0 (struct ufs_hba*) ;

__attribute__((used)) static u32 FUNC_1(struct ufs_hba *VAR_2)
{
 struct ufs_qcom_host *VAR_3 = FUNC_0(VAR_2);

 if (VAR_3->hw_ver.major == 0x1)
  return VAR_0;
 else
  return VAR_1;
}
