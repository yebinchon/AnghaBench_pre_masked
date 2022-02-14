
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int filter_sem; scalar_t__ filter_state; struct efx_ef10_nic_data* nic_data; } ;
struct efx_ef10_vlan {int list; int vid; } ;
struct efx_ef10_nic_data {int vlan_lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct efx_nic*,int ) ;
 int FUNC_3 (struct efx_ef10_vlan*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct efx_nic *VAR_0,
           struct efx_ef10_vlan *VAR_1)
{
 struct efx_ef10_nic_data *VAR_2 = VAR_0->nic_data;

 FUNC_0(!FUNC_5(&VAR_2->vlan_lock));

 if (VAR_0->filter_state) {
  FUNC_1(&VAR_0->filter_sem);
  FUNC_2(VAR_0, VAR_1->vid);
  FUNC_6(&VAR_0->filter_sem);
 }

 FUNC_4(&VAR_1->list);
 FUNC_3(VAR_1);
}
