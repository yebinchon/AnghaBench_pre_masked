
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct efx_nic {TYPE_1__* net_dev; int filter_sem; struct efx_ef10_nic_data* nic_data; } ;
struct efx_ef10_nic_data {int vport_id; int * vport_mac; } ;
struct TYPE_4__ {int * dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (struct efx_nic*) ;
 int FUNC_3 (struct efx_nic*) ;
 int FUNC_4 (struct efx_nic*) ;
 int FUNC_5 (struct efx_nic*,int ) ;
 int FUNC_6 (struct efx_nic*,int ) ;
 int FUNC_7 (struct efx_nic*,int ,int *) ;
 int FUNC_8 (struct efx_nic*,int ,int *) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (struct efx_nic*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *) ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 (struct efx_nic*,int ,TYPE_1__*,char*) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct efx_nic *VAR_3)
{
 struct efx_ef10_nic_data *VAR_4 = VAR_3->nic_data;
 u8 VAR_5[VAR_0];
 int VAR_6, VAR_7;


 if (FUNC_14(VAR_4->vport_mac))
  return 0;

 FUNC_2(VAR_3);
 FUNC_10(VAR_3->net_dev);
 FUNC_0(&VAR_3->filter_sem);
 FUNC_4(VAR_3);
 FUNC_16(&VAR_3->filter_sem);

 VAR_6 = FUNC_6(VAR_3, VAR_4->vport_id);
 if (VAR_6)
  goto restore_filters;

 FUNC_13(VAR_5, VAR_4->vport_mac);
 VAR_6 = FUNC_8(VAR_3, VAR_4->vport_id,
        VAR_4->vport_mac);
 if (VAR_6)
  goto restore_vadaptor;

 VAR_6 = FUNC_7(VAR_3, VAR_4->vport_id,
        VAR_3->net_dev->dev_addr);
 if (!VAR_6) {
  FUNC_13(VAR_4->vport_mac, VAR_3->net_dev->dev_addr);
 } else {
  VAR_7 = FUNC_7(VAR_3, VAR_4->vport_id, VAR_5);
  if (VAR_7) {

   FUNC_12(VAR_4->vport_mac);
   goto reset_nic;
  }
 }

restore_vadaptor:
 VAR_7 = FUNC_5(VAR_3, VAR_4->vport_id);
 if (VAR_7)
  goto reset_nic;
restore_filters:
 FUNC_0(&VAR_3->filter_sem);
 VAR_7 = FUNC_3(VAR_3);
 FUNC_16(&VAR_3->filter_sem);
 if (VAR_7)
  goto reset_nic;

 VAR_7 = FUNC_9(VAR_3->net_dev);
 if (VAR_7)
  goto reset_nic;

 FUNC_1(VAR_3);

 return VAR_6;

reset_nic:
 FUNC_15(VAR_3, VAR_2, VAR_3->net_dev,
    "Failed to restore when changing MAC address - scheduling reset\n");
 FUNC_11(VAR_3, VAR_1);

 return VAR_6 ? VAR_6 : VAR_7;
}
