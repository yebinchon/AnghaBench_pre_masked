
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ifla_vf_info {int dummy; } ;
struct efx_nic {TYPE_1__* type; } ;
struct TYPE_2__ {int (* sriov_get_vf_config ) (struct efx_nic*,int,struct ifla_vf_info*) ;} ;


 int VAR_0 ;
 struct efx_nic* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct efx_nic*,int,struct ifla_vf_info*) ;

int FUNC_2(struct net_device *VAR_1, int VAR_2,
       struct ifla_vf_info *VAR_3)
{
 struct efx_nic *VAR_4 = FUNC_0(VAR_1);

 if (VAR_4->type->sriov_get_vf_config)
  return VAR_4->type->sriov_get_vf_config(VAR_4, VAR_2, VAR_3);
 else
  return -VAR_0;
}
