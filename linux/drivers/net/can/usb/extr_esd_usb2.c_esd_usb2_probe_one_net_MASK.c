
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct net_device {int dev_id; int name; int * netdev_ops; int flags; } ;
struct TYPE_9__ {int freq; } ;
struct TYPE_10__ {int do_get_berr_counter; int do_set_mode; int do_set_bittiming; int * bittiming_const; int ctrlmode_supported; TYPE_4__ clock; int state; } ;
struct esd_usb2_net_priv {int index; TYPE_5__ can; struct net_device* netdev; struct esd_usb2* usb2; TYPE_1__* tx_contexts; int active_tx_jobs; int tx_submitted; } ;
struct esd_usb2 {struct esd_usb2_net_priv** nets; TYPE_3__* udev; } ;
struct TYPE_7__ {int idProduct; } ;
struct TYPE_8__ {TYPE_2__ descriptor; } ;
struct TYPE_6__ {int echo_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct net_device*,int *) ;
 scalar_t__ VAR_8 ;
 struct net_device* FUNC_1 (int,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*,...) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct net_device*,char*,int ) ;
 struct esd_usb2_net_priv* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 struct esd_usb2* FUNC_10 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_11(struct usb_interface *VAR_14, int VAR_15)
{
 struct esd_usb2 *VAR_16 = FUNC_10(VAR_14);
 struct net_device *VAR_17;
 struct esd_usb2_net_priv *VAR_18;
 int VAR_19 = 0;
 int VAR_20;

 VAR_17 = FUNC_1(sizeof(*VAR_18), VAR_7);
 if (!VAR_17) {
  FUNC_3(&VAR_14->dev, "couldn't alloc candev\n");
  VAR_19 = -VAR_3;
  goto done;
 }

 VAR_18 = FUNC_8(VAR_17);

 FUNC_5(&VAR_18->tx_submitted);
 FUNC_2(&VAR_18->active_tx_jobs, 0);

 for (VAR_20 = 0; VAR_20 < VAR_7; VAR_20++)
  VAR_18->tx_contexts[VAR_20].echo_index = VAR_7;

 VAR_18->usb2 = VAR_16;
 VAR_18->netdev = VAR_17;
 VAR_18->index = VAR_15;

 VAR_18->can.state = VAR_2;
 VAR_18->can.ctrlmode_supported = VAR_1;

 if (FUNC_6(VAR_16->udev->descriptor.idProduct) ==
     VAR_8)
  VAR_18->can.clock.freq = VAR_5;
 else {
  VAR_18->can.clock.freq = VAR_4;
  VAR_18->can.ctrlmode_supported |= VAR_0;
 }

 VAR_18->can.bittiming_const = &VAR_9;
 VAR_18->can.do_set_bittiming = VAR_12;
 VAR_18->can.do_set_mode = VAR_13;
 VAR_18->can.do_get_berr_counter = VAR_10;

 VAR_17->flags |= VAR_6;

 VAR_17->netdev_ops = &VAR_11;

 FUNC_0(VAR_17, &VAR_14->dev);
 VAR_17->dev_id = VAR_15;

 VAR_19 = FUNC_9(VAR_17);
 if (VAR_19) {
  FUNC_3(&VAR_14->dev, "couldn't register CAN device: %d\n", VAR_19);
  FUNC_4(VAR_17);
  VAR_19 = -VAR_3;
  goto done;
 }

 VAR_16->nets[VAR_15] = VAR_18;
 FUNC_7(VAR_17, "device %s registered\n", VAR_17->name);

done:
 return VAR_19;
}
