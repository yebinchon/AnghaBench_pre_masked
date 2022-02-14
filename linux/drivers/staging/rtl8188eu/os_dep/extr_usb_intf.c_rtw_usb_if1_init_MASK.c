
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_interface {int needs_remote_wakeup; int dev; } ;
struct usb_device_id {int dummy; } ;
struct net_device {int dev_addr; } ;
struct hal_data_8188e {int dummy; } ;
struct dvobj_priv {TYPE_2__* pusbdev; struct adapter* if1; } ;
struct TYPE_8__ {int mac_addr; } ;
struct TYPE_7__ {int ifname; scalar_t__ monitor_enable; } ;
struct TYPE_5__ {scalar_t__ bSupportRemoteWakeup; } ;
struct adapter {int bDriverStopped; int HalData; int hw_init_completed; int bup; int bSurpriseRemoved; TYPE_4__ eeprompriv; TYPE_3__ registrypriv; TYPE_1__ pwrctrlpriv; struct net_device* pmondev; int hw_init_mutex; struct dvobj_priv* dvobj; } ;
struct TYPE_6__ {int do_remote_wakeup; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (struct net_device*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct dvobj_priv*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct net_device*,char*) ;
 int FUNC_11 (char*,...) ;
 scalar_t__ FUNC_12 (struct net_device*) ;
 struct net_device* FUNC_13 () ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct adapter*) ;
 int FUNC_16 (struct adapter*) ;
 int FUNC_17 (struct adapter*) ;
 int FUNC_18 (struct adapter*) ;
 struct net_device* FUNC_19 (struct adapter*) ;
 int FUNC_20 (struct net_device*,int ) ;
 int FUNC_21 (int ) ;
 struct adapter* FUNC_22 (struct net_device*) ;
 scalar_t__ FUNC_23 (struct usb_interface*) ;
 int FUNC_24 (struct adapter*) ;
 struct adapter* FUNC_25 (int) ;

__attribute__((used)) static struct adapter *FUNC_26(struct dvobj_priv *VAR_6,
 struct usb_interface *VAR_7, const struct usb_device_id *VAR_8)
{
 struct adapter *VAR_9 = ((void*)0);
 struct net_device *VAR_10 = ((void*)0);
 struct net_device *VAR_11;
 int VAR_12 = VAR_2;

 VAR_9 = FUNC_25(sizeof(*VAR_9));
 if (!VAR_9)
  goto exit;
 VAR_9->dvobj = VAR_6;
 VAR_6->if1 = VAR_9;

 VAR_9->bDriverStopped = 1;
 FUNC_9(&VAR_9->hw_init_mutex);

 VAR_10 = FUNC_19(VAR_9);
 if (!VAR_10)
  goto free_adapter;
 FUNC_2(VAR_10, FUNC_5(VAR_6));
 VAR_9 = FUNC_22(VAR_10);

 if (VAR_9->registrypriv.monitor_enable) {
  VAR_11 = FUNC_13();
  if (!VAR_11)
   FUNC_10(VAR_10, "Failed to initialize monitor interface");
  VAR_9->pmondev = VAR_11;
 }

 VAR_9->HalData = FUNC_7(sizeof(struct hal_data_8188e), VAR_1);
 if (!VAR_9->HalData) {
  FUNC_0("Failed to allocate memory for HAL data\n");
  goto free_adapter;
 }


 FUNC_17(VAR_9);


 FUNC_15(VAR_9);


 FUNC_16(VAR_9);


 if (FUNC_18(VAR_9) == VAR_2) {
  FUNC_1(VAR_5, VAR_4,
    ("Initialize driver software resource Failed!\n"));
  goto free_hal_data;
 }
 if (FUNC_23(VAR_7) < 0)
  FUNC_11("can't get autopm:\n");


 FUNC_20(VAR_10, VAR_9->registrypriv.ifname);
 FUNC_21(VAR_9->eeprompriv.mac_addr);
 FUNC_8(VAR_10->dev_addr, VAR_9->eeprompriv.mac_addr, VAR_0);
 FUNC_11("MAC Address from pnetdev->dev_addr =  %pM\n",
  VAR_10->dev_addr);


 if (FUNC_12(VAR_10) != 0) {
  FUNC_1(VAR_5, VAR_4, ("register_netdev() failed\n"));
  goto free_hal_data;
 }

 FUNC_11("bDriverStopped:%d, bSurpriseRemoved:%d, bup:%d, hw_init_completed:%d\n"
  , VAR_9->bDriverStopped
  , VAR_9->bSurpriseRemoved
  , VAR_9->bup
  , VAR_9->hw_init_completed
 );

 VAR_12 = VAR_3;

free_hal_data:
 if (VAR_12 != VAR_3)
  FUNC_6(VAR_9->HalData);
free_adapter:
 if (VAR_12 != VAR_3) {
  if (VAR_10)
   FUNC_14(VAR_10);
  else
   FUNC_24(VAR_9);
  VAR_9 = ((void*)0);
 }
exit:
 return VAR_9;
}
