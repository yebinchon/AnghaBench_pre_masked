
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
struct efx_nic {int vf_count; struct efx_ef10_nic_data* nic_data; } ;
struct efx_ef10_nic_data {struct ef10_vf* vf; } ;
struct ef10_vf {int * mac; TYPE_2__* efx; int vport_id; } ;
struct TYPE_12__ {int * dev_addr; } ;
struct TYPE_11__ {TYPE_4__* net_dev; int filter_sem; TYPE_1__* type; } ;
struct TYPE_10__ {int (* filter_table_probe ) (TYPE_2__*) ;int (* filter_table_remove ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct efx_nic*,int ,int) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (struct efx_nic*,int ,int *) ;
 int FUNC_7 (struct efx_nic*,int ,int *) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (int *) ;

int FUNC_16(struct efx_nic *VAR_4, int VAR_5, u8 *VAR_6)
{
 struct efx_ef10_nic_data *VAR_7 = VAR_4->nic_data;
 struct ef10_vf *VAR_8;
 int VAR_9;

 if (!VAR_7->vf)
  return -VAR_1;

 if (VAR_5 >= VAR_4->vf_count)
  return -VAR_0;
 VAR_8 = VAR_7->vf + VAR_5;

 if (VAR_8->efx) {
  FUNC_2(VAR_8->efx);
  FUNC_9(VAR_8->efx->net_dev);

  FUNC_0(&VAR_8->efx->filter_sem);
  VAR_8->efx->type->filter_table_remove(VAR_8->efx);

  VAR_9 = FUNC_5(VAR_8->efx, VAR_2);
  if (VAR_9) {
   FUNC_15(&VAR_8->efx->filter_sem);
   return VAR_9;
  }
 }

 VAR_9 = FUNC_3(VAR_4, VAR_3, VAR_5);
 if (VAR_9)
  return VAR_9;

 if (!FUNC_12(VAR_8->mac)) {
  VAR_9 = FUNC_7(VAR_4, VAR_8->vport_id, VAR_8->mac);
  if (VAR_9)
   return VAR_9;
 }

 if (!FUNC_12(VAR_6)) {
  VAR_9 = FUNC_6(VAR_4, VAR_8->vport_id, VAR_6);
  if (VAR_9) {
   FUNC_10(VAR_8->mac);
   goto fail;
  }
  if (VAR_8->efx)
   FUNC_11(VAR_8->efx->net_dev->dev_addr, VAR_6);
 }

 FUNC_11(VAR_8->mac, VAR_6);

 VAR_9 = FUNC_3(VAR_4, VAR_8->vport_id, VAR_5);
 if (VAR_9)
  goto fail;

 if (VAR_8->efx) {

  VAR_9 = FUNC_4(VAR_8->efx, VAR_2);
  if (VAR_9) {
   FUNC_15(&VAR_8->efx->filter_sem);
   return VAR_9;
  }
  VAR_8->efx->type->filter_table_probe(VAR_8->efx);
  FUNC_15(&VAR_8->efx->filter_sem);
  FUNC_8(VAR_8->efx->net_dev);
  FUNC_1(VAR_8->efx);
 }

 return 0;

fail:
 FUNC_10(VAR_8->mac);
 return VAR_9;
}
