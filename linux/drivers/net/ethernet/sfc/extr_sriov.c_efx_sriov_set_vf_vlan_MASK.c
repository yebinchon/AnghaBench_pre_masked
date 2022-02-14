
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct efx_nic {TYPE_1__* type; } ;
typedef scalar_t__ __be16 ;
struct TYPE_2__ {int (* sriov_set_vf_vlan ) (struct efx_nic*,int,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 struct efx_nic* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct efx_nic*,int,int,int) ;

int FUNC_3(struct net_device *VAR_7, int VAR_8, u16 VAR_9,
     u8 VAR_10, __be16 VAR_11)
{
 struct efx_nic *VAR_12 = FUNC_1(VAR_7);

 if (VAR_12->type->sriov_set_vf_vlan) {
  if ((VAR_9 & ~VAR_6) ||
      (VAR_10 & ~(VAR_4 >> VAR_5)))
   return -VAR_0;

  if (VAR_11 != FUNC_0(VAR_3))
   return -VAR_2;

  return VAR_12->type->sriov_set_vf_vlan(VAR_12, VAR_8, VAR_9, VAR_10);
 } else {
  return -VAR_1;
 }
}
