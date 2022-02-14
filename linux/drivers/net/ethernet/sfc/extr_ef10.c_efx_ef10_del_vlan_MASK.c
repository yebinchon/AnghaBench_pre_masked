
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct efx_nic {int net_dev; struct efx_ef10_nic_data* nic_data; } ;
struct efx_ef10_vlan {int dummy; } ;
struct efx_ef10_nic_data {int vlan_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct efx_nic*,struct efx_ef10_vlan*) ;
 struct efx_ef10_vlan* FUNC_1 (struct efx_nic*,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct efx_nic*,int ,int ,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct efx_nic *VAR_2, u16 VAR_3)
{
 struct efx_ef10_nic_data *VAR_4 = VAR_2->nic_data;
 struct efx_ef10_vlan *VAR_5;
 int VAR_6 = 0;





 if (VAR_3 == 0)
  return 0;

 FUNC_2(&VAR_4->vlan_lock);

 VAR_5 = FUNC_1(VAR_2, VAR_3);
 if (!VAR_5) {
  FUNC_4(VAR_2, VAR_1, VAR_2->net_dev,
     "VLAN %u to be deleted not found\n", VAR_3);
  VAR_6 = -VAR_0;
 } else {
  FUNC_0(VAR_2, VAR_5);
 }

 FUNC_3(&VAR_4->vlan_lock);

 return VAR_6;
}
