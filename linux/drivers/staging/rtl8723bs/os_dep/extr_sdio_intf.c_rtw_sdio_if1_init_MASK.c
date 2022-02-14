
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sdio_device_id {int dummy; } ;
struct sdio_data {TYPE_1__* func; } ;
struct net_device {int dummy; } ;
struct dvobj_priv {struct adapter* padapters; struct adapter* if1; struct sdio_data intf_data; } ;
struct TYPE_4__ {int mac_addr; } ;
struct adapter {int bDriverStopped; int rtw_wdev; scalar_t__ HalData; int hw_init_completed; int bup; int bSurpriseRemoved; TYPE_2__ eeprompriv; int * intf_free_irq; int * intf_alloc_irq; int * intf_deinit; int * intf_init; int * intf_stop; int * intf_start; scalar_t__ iface_id; struct dvobj_priv* dvobj; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (char*,int,int ,int ,int ) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (struct net_device*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct dvobj_priv*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct adapter*) ;
 int FUNC_8 (struct adapter*) ;
 int FUNC_9 (struct adapter*) ;
 int FUNC_10 (struct adapter*) ;
 int FUNC_11 (struct adapter*) ;
 int FUNC_12 (struct adapter*,int ) ;
 struct net_device* FUNC_13 (struct adapter*) ;
 int FUNC_14 (int *,int ) ;
 struct adapter* FUNC_15 (struct net_device*) ;
 int FUNC_16 (struct adapter*) ;
 int FUNC_17 (struct adapter*,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_20 (int *) ;
 struct adapter* FUNC_21 (int) ;

__attribute__((used)) static struct adapter *FUNC_22(struct dvobj_priv *VAR_11, const struct sdio_device_id *VAR_12)
{
 int VAR_13 = VAR_0;
 struct net_device *VAR_14;
 struct adapter *VAR_15 = ((void*)0);
 struct sdio_data *VAR_16 = &VAR_11->intf_data;

 VAR_15 = FUNC_21(sizeof(*VAR_15));
 if (VAR_15 == ((void*)0)) {
  goto exit;
 }

 VAR_15->dvobj = VAR_11;
 VAR_11->if1 = VAR_15;

 VAR_15->bDriverStopped =1;

 VAR_11->padapters = VAR_15;
 VAR_15->iface_id = 0;


 VAR_14 = FUNC_13(VAR_15);
 if (!VAR_14)
  goto free_adapter;

 FUNC_2(VAR_14, FUNC_3(VAR_11));

 VAR_15 = FUNC_15(VAR_14);

 FUNC_17(VAR_15, FUNC_3(VAR_11));




 FUNC_16(VAR_15);



 VAR_15->intf_start = &VAR_4;
 VAR_15->intf_stop = &VAR_5;

 VAR_15->intf_init = &VAR_9;
 VAR_15->intf_deinit = &VAR_7;
 VAR_15->intf_alloc_irq = &VAR_6;
 VAR_15->intf_free_irq = &VAR_8;

 if (FUNC_12(VAR_15, VAR_10) == VAR_0) {
  FUNC_1(VAR_3, VAR_2,
   ("rtw_drv_init: Can't init io_priv\n"));
  goto free_hal_data;
 }

 FUNC_10(VAR_15);

 FUNC_7(VAR_15);

 FUNC_4((void *) VAR_15);


 FUNC_9(VAR_15);


 if (FUNC_11(VAR_15) == VAR_0) {
  FUNC_1(VAR_3, VAR_2,
    ("rtw_drv_init: Initialize driver software resource Failed!\n"));
  goto free_hal_data;
 }



 FUNC_14(&VAR_16->func->dev, VAR_15->eeprompriv.mac_addr);

 FUNC_8(VAR_15);

 FUNC_0("bDriverStopped:%d, bSurpriseRemoved:%d, bup:%d, hw_init_completed:%d\n"
  , VAR_15->bDriverStopped
  , VAR_15->bSurpriseRemoved
  , VAR_15->bup
  , VAR_15->hw_init_completed
 );

 VAR_13 = VAR_1;

free_hal_data:
 if (VAR_13 != VAR_1 && VAR_15->HalData)
  FUNC_5(VAR_15->HalData);

 if (VAR_13 != VAR_1) {
  FUNC_19(VAR_15->rtw_wdev);
  FUNC_18(VAR_15->rtw_wdev);
 }

free_adapter:
 if (VAR_13 != VAR_1) {
  if (VAR_14)
   FUNC_6(VAR_14);
  else
   FUNC_20((u8 *)VAR_15);
  VAR_15 = ((void*)0);
 }
exit:
 return VAR_15;
}
