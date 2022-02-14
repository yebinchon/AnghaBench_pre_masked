
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct efx_nic {int mac_lock; int filter_sem; scalar_t__ filter_state; int net_dev; struct efx_ef10_nic_data* nic_data; } ;
struct efx_ef10_vlan {int list; scalar_t__ vid; } ;
struct efx_ef10_nic_data {int vlan_lock; int vlan_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (struct efx_nic*,scalar_t__) ;
 struct efx_ef10_vlan* FUNC_2 (struct efx_nic*,scalar_t__) ;
 int FUNC_3 (struct efx_ef10_vlan*) ;
 struct efx_ef10_vlan* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct efx_nic*,int ,int ,char*,scalar_t__) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct efx_nic *VAR_4, u16 VAR_5)
{
 struct efx_ef10_nic_data *VAR_6 = VAR_4->nic_data;
 struct efx_ef10_vlan *VAR_7;
 int VAR_8;

 FUNC_7(&VAR_6->vlan_lock);

 VAR_7 = FUNC_2(VAR_4, VAR_5);
 if (VAR_7) {



  if (VAR_5 == 0)
   goto done_unlock;
  FUNC_9(VAR_4, VAR_3, VAR_4->net_dev,
      "VLAN %u already added\n", VAR_5);
  VAR_8 = -VAR_0;
  goto fail_exist;
 }

 VAR_8 = -VAR_1;
 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  goto fail_alloc;

 VAR_7->vid = VAR_5;

 FUNC_5(&VAR_7->list, &VAR_6->vlan_list);

 if (VAR_4->filter_state) {
  FUNC_7(&VAR_4->mac_lock);
  FUNC_0(&VAR_4->filter_sem);
  VAR_8 = FUNC_1(VAR_4, VAR_7->vid);
  FUNC_10(&VAR_4->filter_sem);
  FUNC_8(&VAR_4->mac_lock);
  if (VAR_8)
   goto fail_filter_add_vlan;
 }

done_unlock:
 FUNC_8(&VAR_6->vlan_lock);
 return 0;

fail_filter_add_vlan:
 FUNC_6(&VAR_7->list);
 FUNC_3(VAR_7);
fail_alloc:
fail_exist:
 FUNC_8(&VAR_6->vlan_lock);
 return VAR_8;
}
