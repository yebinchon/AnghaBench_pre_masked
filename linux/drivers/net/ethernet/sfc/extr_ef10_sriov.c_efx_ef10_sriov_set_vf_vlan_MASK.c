
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct efx_nic {int vf_count; int net_dev; struct efx_ef10_nic_data* nic_data; } ;
struct efx_ef10_nic_data {struct ef10_vf* vf; } ;
struct ef10_vf {scalar_t__ vlan; int vport_assigned; TYPE_2__* efx; scalar_t__ vport_id; int mac; } ;
struct TYPE_10__ {int mac_lock; int filter_sem; int net_dev; TYPE_1__* type; } ;
struct TYPE_9__ {int (* filter_table_probe ) (TYPE_2__*) ;int (* filter_table_remove ) (TYPE_2__*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int VAR_6 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct efx_nic*,scalar_t__,int) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (struct efx_nic*,scalar_t__,int ) ;
 int FUNC_7 (struct efx_nic*,int ,int ,scalar_t__,scalar_t__*) ;
 int FUNC_8 (struct efx_nic*,scalar_t__,int ) ;
 int FUNC_9 (struct efx_nic*,scalar_t__) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_2__*,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct efx_nic*,int ,int ,char*) ;
 int FUNC_18 (struct efx_nic*,int ,int ,char*,...) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (TYPE_2__*) ;
 int FUNC_21 (int *) ;

int FUNC_22(struct efx_nic *VAR_7, int VAR_8, u16 VAR_9,
          u8 VAR_10)
{
 struct efx_ef10_nic_data *VAR_11 = VAR_7->nic_data;
 struct ef10_vf *VAR_12;
 u16 VAR_13;
 int VAR_14 = 0, VAR_15 = 0;

 if (VAR_8 >= VAR_7->vf_count)
  return -VAR_1;
 if (VAR_10 != 0)
  return -VAR_1;

 VAR_12 = VAR_11->vf + VAR_8;

 VAR_13 = (VAR_9 == 0) ? VAR_0 : VAR_9;
 if (VAR_13 == VAR_12->vlan)
  return 0;

 if (VAR_12->efx) {
  FUNC_2(VAR_12->efx);
  FUNC_11(VAR_12->efx->net_dev);

  FUNC_15(&VAR_12->efx->mac_lock);
  FUNC_0(&VAR_12->efx->filter_sem);
  VAR_12->efx->type->filter_table_remove(VAR_12->efx);

  VAR_14 = FUNC_5(VAR_12->efx, VAR_2);
  if (VAR_14)
   goto restore_filters;
 }

 if (VAR_12->vport_assigned) {
  VAR_14 = FUNC_3(VAR_7, VAR_3, VAR_8);
  if (VAR_14) {
   FUNC_18(VAR_7, VAR_6, VAR_7->net_dev,
       "Failed to change vlan on VF %d.\n", VAR_8);
   FUNC_18(VAR_7, VAR_6, VAR_7->net_dev,
       "This is likely because the VF is bound to a driver in a VM.\n");
   FUNC_18(VAR_7, VAR_6, VAR_7->net_dev,
       "Please unload the driver in the VM.\n");
   goto restore_vadaptor;
  }
  VAR_12->vport_assigned = 0;
 }

 if (!FUNC_14(VAR_12->mac)) {
  VAR_14 = FUNC_8(VAR_7, VAR_12->vport_id, VAR_12->mac);
  if (VAR_14)
   goto restore_evb_port;
 }

 if (VAR_12->vport_id) {
  VAR_14 = FUNC_9(VAR_7, VAR_12->vport_id);
  if (VAR_14)
   goto restore_mac;
  VAR_12->vport_id = 0;
 }


 VAR_12->vlan = VAR_13;


 VAR_14 = FUNC_7(VAR_7, VAR_2,
      VAR_4,
      VAR_12->vlan, &VAR_12->vport_id);
 if (VAR_14)
  goto reset_nic_up_write;

restore_mac:
 if (!FUNC_14(VAR_12->mac)) {
  VAR_15 = FUNC_6(VAR_7, VAR_12->vport_id, VAR_12->mac);
  if (VAR_15) {
   FUNC_13(VAR_12->mac);
   goto reset_nic_up_write;
  }
 }

restore_evb_port:
 VAR_15 = FUNC_3(VAR_7, VAR_12->vport_id, VAR_8);
 if (VAR_15)
  goto reset_nic_up_write;
 else
  VAR_12->vport_assigned = 1;

restore_vadaptor:
 if (VAR_12->efx) {
  VAR_15 = FUNC_4(VAR_12->efx, VAR_2);
  if (VAR_15)
   goto reset_nic_up_write;
 }

restore_filters:
 if (VAR_12->efx) {
  VAR_15 = VAR_12->efx->type->filter_table_probe(VAR_12->efx);
  if (VAR_15)
   goto reset_nic_up_write;

  FUNC_21(&VAR_12->efx->filter_sem);
  FUNC_16(&VAR_12->efx->mac_lock);

  VAR_15 = FUNC_10(VAR_12->efx->net_dev);
  if (VAR_15)
   goto reset_nic;

  FUNC_1(VAR_12->efx);
 }
 return VAR_14;

reset_nic_up_write:
 if (VAR_12->efx) {
  FUNC_21(&VAR_12->efx->filter_sem);
  FUNC_16(&VAR_12->efx->mac_lock);
 }
reset_nic:
 if (VAR_12->efx) {
  FUNC_17(VAR_7, VAR_6, VAR_7->net_dev,
     "Failed to restore VF - scheduling reset.\n");
  FUNC_12(VAR_12->efx, VAR_5);
 } else {
  FUNC_17(VAR_7, VAR_6, VAR_7->net_dev,
     "Failed to restore the VF and cannot reset the VF "
     "- VF is not functional.\n");
  FUNC_17(VAR_7, VAR_6, VAR_7->net_dev,
     "Please reload the driver attached to the VF.\n");
 }

 return VAR_14 ? VAR_14 : VAR_15;
}
