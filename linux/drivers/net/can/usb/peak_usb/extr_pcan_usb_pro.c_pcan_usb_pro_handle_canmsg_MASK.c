
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skb_shared_hwtstamps {int hwtstamp; } ;
struct sk_buff {int dummy; } ;
struct peak_usb_device {struct net_device* netdev; } ;
struct pcan_usb_pro_rxmsg {int len; int flags; int ts32; int data; int id; } ;
struct pcan_usb_pro_interface {int time_ref; struct peak_usb_device** dev; } ;
struct TYPE_2__ {int rx_bytes; int rx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
struct can_frame {int can_dlc; int data; int can_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sk_buff* FUNC_0 (struct net_device*,struct can_frame**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *,int ,int *) ;
 struct skb_shared_hwtstamps* FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct pcan_usb_pro_interface *VAR_5,
          struct pcan_usb_pro_rxmsg *VAR_6)
{
 const unsigned int VAR_7 = (VAR_6->len >> 4) & 0x0f;
 struct peak_usb_device *VAR_8 = VAR_5->dev[VAR_7];
 struct net_device *VAR_9 = VAR_8->netdev;
 struct can_frame *VAR_10;
 struct sk_buff *VAR_11;
 struct skb_shared_hwtstamps *VAR_12;

 VAR_11 = FUNC_0(VAR_9, &VAR_10);
 if (!VAR_11)
  return -VAR_2;

 VAR_10->can_id = FUNC_1(VAR_6->id);
 VAR_10->can_dlc = VAR_6->len & 0x0f;

 if (VAR_6->flags & VAR_3)
  VAR_10->can_id |= VAR_0;

 if (VAR_6->flags & VAR_4)
  VAR_10->can_id |= VAR_1;
 else
  FUNC_2(VAR_10->data, VAR_6->data, VAR_10->can_dlc);

 VAR_12 = FUNC_5(VAR_11);
 FUNC_4(&VAR_5->time_ref, FUNC_1(VAR_6->ts32),
        &VAR_12->hwtstamp);

 VAR_9->stats.rx_packets++;
 VAR_9->stats.rx_bytes += VAR_10->can_dlc;
 FUNC_3(VAR_11);

 return 0;
}
