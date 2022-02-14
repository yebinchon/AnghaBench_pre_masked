
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct usb_interface {int needs_remote_wakeup; TYPE_2__* cur_altsetting; int dev; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dev; } ;
struct net_device {scalar_t__ mtu; scalar_t__ hard_header_len; int phydev; int max_mtu; int * ethtool_ops; int watchdog_timeo; int * netdev_ops; } ;
struct TYPE_5__ {int access_lock; } ;
struct lan78xx_net {int delta; scalar_t__ hard_mtu; int urb_intr; int pipe_out; struct usb_device* udev; void* maxpacket; int pipe_intr; TYPE_4__* ep_intr; int pipe_in; TYPE_4__* ep_blkout; TYPE_4__* ep_blkin; TYPE_1__ stats; int stat_monitor; int deferred; int wq; int bh; int phy_mutex; int txq_pend; int rxq_pause; int done; int txq; int rxq; int msg_enable; struct net_device* net; struct usb_interface* intf; } ;
struct TYPE_7__ {int bEndpointAddress; unsigned int bInterval; } ;
struct TYPE_8__ {TYPE_3__ desc; } ;
struct TYPE_6__ {TYPE_4__* endpoint; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct net_device*,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 struct net_device* FUNC_2 (int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;
 struct usb_device* FUNC_7 (struct usb_interface*) ;
 int VAR_11 ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (unsigned int,int ) ;
 int VAR_12 ;
 int FUNC_10 (struct lan78xx_net*,struct usb_interface*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_11 (struct lan78xx_net*) ;
 int VAR_16 ;
 int FUNC_12 (struct lan78xx_net*,struct usb_interface*) ;
 int VAR_17 ;
 int FUNC_13 (int *) ;
 struct lan78xx_net* FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct lan78xx_net*,int ,struct net_device*,char*) ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int *,int ) ;
 int VAR_18 ;
 int FUNC_19 (struct net_device*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,int ,unsigned long) ;
 int FUNC_22 (int *,int ,int ) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (int ,struct usb_device*,int ,int *,unsigned int,int ,struct lan78xx_net*,unsigned int) ;
 int FUNC_25 (int ) ;
 struct usb_device* FUNC_26 (struct usb_device*) ;
 void* FUNC_27 (struct usb_device*,int ,int) ;
 int FUNC_28 (struct usb_device*) ;
 int FUNC_29 (struct usb_device*,int ) ;
 int FUNC_30 (struct usb_device*,int) ;
 int FUNC_31 (struct usb_interface*,struct lan78xx_net*) ;
 int FUNC_32 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_33(struct usb_interface *VAR_19,
    const struct usb_device_id *VAR_20)
{
 struct lan78xx_net *VAR_21;
 struct net_device *VAR_22;
 struct usb_device *VAR_23;
 int VAR_24;
 unsigned VAR_25;
 unsigned VAR_26;
 u8 *VAR_27 = ((void*)0);

 VAR_23 = FUNC_7(VAR_19);
 VAR_23 = FUNC_26(VAR_23);

 VAR_22 = FUNC_2(sizeof(struct lan78xx_net));
 if (!VAR_22) {
  FUNC_3(&VAR_19->dev, "Error: OOM\n");
  VAR_24 = -VAR_3;
  goto out1;
 }


 FUNC_1(VAR_22, &VAR_19->dev);

 VAR_21 = FUNC_14(VAR_22);
 VAR_21->udev = VAR_23;
 VAR_21->intf = VAR_19;
 VAR_21->net = VAR_22;
 VAR_21->msg_enable = FUNC_16(VAR_17, VAR_6
     | VAR_8 | VAR_7);

 FUNC_20(&VAR_21->rxq);
 FUNC_20(&VAR_21->txq);
 FUNC_20(&VAR_21->done);
 FUNC_20(&VAR_21->rxq_pause);
 FUNC_20(&VAR_21->txq_pend);
 FUNC_13(&VAR_21->phy_mutex);

 FUNC_21(&VAR_21->bh, VAR_12, (unsigned long)VAR_21);
 FUNC_0(&VAR_21->wq, VAR_13);
 FUNC_6(&VAR_21->deferred);

 VAR_22->netdev_ops = &VAR_15;
 VAR_22->watchdog_timeo = VAR_9;
 VAR_22->ethtool_ops = &VAR_14;

 VAR_21->delta = 1;
 FUNC_22(&VAR_21->stat_monitor, VAR_16, 0);

 FUNC_13(&VAR_21->stats.access_lock);

 VAR_24 = FUNC_10(VAR_21, VAR_19);
 if (VAR_24 < 0)
  goto out2;

 if (VAR_22->mtu > (VAR_21->hard_mtu - VAR_22->hard_header_len))
  VAR_22->mtu = VAR_21->hard_mtu - VAR_22->hard_header_len;


 VAR_22->max_mtu = VAR_5;

 VAR_21->ep_blkin = (VAR_19->cur_altsetting)->endpoint + 0;
 VAR_21->ep_blkout = (VAR_19->cur_altsetting)->endpoint + 1;
 VAR_21->ep_intr = (VAR_19->cur_altsetting)->endpoint + 2;

 VAR_21->pipe_in = FUNC_29(VAR_23, VAR_0);
 VAR_21->pipe_out = FUNC_32(VAR_23, VAR_1);

 VAR_21->pipe_intr = FUNC_30(VAR_21->udev,
     VAR_21->ep_intr->desc.bEndpointAddress &
     VAR_10);
 VAR_26 = VAR_21->ep_intr->desc.bInterval;

 VAR_25 = FUNC_27(VAR_21->udev, VAR_21->pipe_intr, 0);
 VAR_27 = FUNC_9(VAR_25, VAR_4);
 if (VAR_27) {
  VAR_21->urb_intr = FUNC_23(0, VAR_4);
  if (!VAR_21->urb_intr) {
   VAR_24 = -VAR_3;
   FUNC_8(VAR_27);
   goto out3;
  } else {
   FUNC_24(VAR_21->urb_intr, VAR_21->udev,
      VAR_21->pipe_intr, VAR_27, VAR_25,
      VAR_11, VAR_21, VAR_26);
  }
 }

 VAR_21->maxpacket = FUNC_27(VAR_21->udev, VAR_21->pipe_out, 1);


 VAR_19->needs_remote_wakeup = 1;

 VAR_24 = FUNC_11(VAR_21);
 if (VAR_24 < 0)
  goto out4;

 VAR_24 = FUNC_19(VAR_22);
 if (VAR_24 != 0) {
  FUNC_15(VAR_21, VAR_18, VAR_22, "couldn't register the device\n");
  goto out5;
 }

 FUNC_31(VAR_19, VAR_21);

 VAR_24 = FUNC_4(&VAR_23->dev, 1);




 FUNC_18(&VAR_23->dev,
      VAR_2);

 return 0;

out5:
 FUNC_17(VAR_22->phydev);
out4:
 FUNC_25(VAR_21->urb_intr);
out3:
 FUNC_12(VAR_21, VAR_19);
out2:
 FUNC_5(VAR_22);
out1:
 FUNC_28(VAR_23);

 return VAR_24;
}
