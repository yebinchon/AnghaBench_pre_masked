
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void* u16 ;
struct ufs_qcom_phy {void* host_ctrl_rev_step; void* host_ctrl_rev_minor; int host_ctrl_rev_major; } ;
struct phy {int dummy; } ;


 struct ufs_qcom_phy* FUNC_0 (struct phy*) ;

void FUNC_1(struct phy *VAR_0,
       u8 VAR_1, u16 VAR_2, u16 VAR_3)
{
 struct ufs_qcom_phy *VAR_4 = FUNC_0(VAR_0);

 VAR_4->host_ctrl_rev_major = VAR_1;
 VAR_4->host_ctrl_rev_minor = VAR_2;
 VAR_4->host_ctrl_rev_step = VAR_3;
}
