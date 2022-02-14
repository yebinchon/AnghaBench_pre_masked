
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct net_device_stats {int tx_dropped; } ;
struct net_device {int dummy; } ;
struct mcba_usb_msg_can {int dlc; int data; scalar_t__ eid; scalar_t__ sid; int cmd_id; } ;
struct mcba_usb_msg {int dummy; } ;
struct mcba_usb_ctx {int ndx; } ;
struct mcba_priv {TYPE_1__* netdev; } ;
struct can_frame {int can_id; int data; int can_dlc; } ;
typedef int netdev_tx_t ;
struct TYPE_3__ {struct net_device_stats stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct net_device*,struct sk_buff*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct sk_buff*,TYPE_1__*,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct mcba_usb_ctx*) ;
 struct mcba_usb_ctx* FUNC_5 (struct mcba_priv*,struct can_frame*) ;
 int FUNC_6 (struct mcba_priv*,struct mcba_usb_msg*,struct mcba_usb_ctx*) ;
 int FUNC_7 (int ,int ,int ) ;
 struct mcba_priv* FUNC_8 (struct net_device*) ;
 int FUNC_9 (int,scalar_t__*) ;

__attribute__((used)) static netdev_tx_t FUNC_10(struct sk_buff *VAR_8,
           struct net_device *VAR_9)
{
 struct mcba_priv *VAR_10 = FUNC_8(VAR_9);
 struct can_frame *VAR_11 = (struct can_frame *)VAR_8->data;
 struct mcba_usb_ctx *VAR_12 = ((void*)0);
 struct net_device_stats *VAR_13 = &VAR_10->netdev->stats;
 u16 VAR_14;
 int VAR_15;
 struct mcba_usb_msg_can VAR_16 = {
  .cmd_id = VAR_3
 };

 if (FUNC_0(VAR_9, VAR_8))
  return VAR_7;

 VAR_12 = FUNC_5(VAR_10, VAR_11);
 if (!VAR_12)
  return VAR_6;

 FUNC_2(VAR_8, VAR_10->netdev, VAR_12->ndx);

 if (VAR_11->can_id & VAR_0) {



  VAR_14 = VAR_5;

  VAR_14 |= (VAR_11->can_id & 0x1ffc0000) >> 13;

  VAR_14 |= (VAR_11->can_id & 0x30000) >> 16;
  FUNC_9(VAR_14, &VAR_16.sid);


  FUNC_9(VAR_11->can_id & 0xffff, &VAR_16.eid);
 } else {



  FUNC_9((VAR_11->can_id & VAR_2) << 5,
       &VAR_16.sid);
  VAR_16.eid = 0;
 }

 VAR_16.dlc = VAR_11->can_dlc;

 FUNC_7(VAR_16.data, VAR_11->data, VAR_16.dlc);

 if (VAR_11->can_id & VAR_1)
  VAR_16.dlc |= VAR_4;

 VAR_15 = FUNC_6(VAR_10, (struct mcba_usb_msg *)&VAR_16, VAR_12);
 if (VAR_15)
  goto xmit_failed;

 return VAR_7;

xmit_failed:
 FUNC_1(VAR_10->netdev, VAR_12->ndx);
 FUNC_4(VAR_12);
 FUNC_3(VAR_8);
 VAR_13->tx_dropped++;

 return VAR_7;
}
