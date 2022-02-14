
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int dummy; } ;
struct pucan_rx_msg {int ts_low; int d; int can_id; int flags; } ;
struct pucan_msg {int dummy; } ;
struct peak_usb_device {struct net_device* netdev; } ;
struct pcan_usb_fd_if {int time_ref; struct peak_usb_device** dev; } ;
struct TYPE_2__ {int rx_bytes; int rx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
struct canfd_frame {scalar_t__ len; int data; int can_id; int flags; } ;
struct can_frame {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;
 int const VAR_8 ;
 int const VAR_9 ;
 struct sk_buff* FUNC_0 (struct net_device*,struct can_frame**) ;
 struct sk_buff* FUNC_1 (struct net_device*,struct canfd_frame**) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,scalar_t__) ;
 int FUNC_8 (struct sk_buff*,int *,int ) ;
 size_t FUNC_9 (struct pucan_rx_msg*) ;
 int FUNC_10 (struct pucan_rx_msg*) ;

__attribute__((used)) static int FUNC_11(struct pcan_usb_fd_if *VAR_10,
         struct pucan_msg *VAR_11)
{
 struct pucan_rx_msg *VAR_12 = (struct pucan_rx_msg *)VAR_11;
 struct peak_usb_device *VAR_13 = VAR_10->dev[FUNC_9(VAR_12)];
 struct net_device *VAR_14 = VAR_13->netdev;
 struct canfd_frame *VAR_15;
 struct sk_buff *VAR_16;
 const u16 VAR_17 = FUNC_5(VAR_12->flags);

 if (VAR_17 & VAR_7) {

  VAR_16 = FUNC_1(VAR_14, &VAR_15);
  if (!VAR_16)
   return -VAR_4;

  if (VAR_17 & VAR_5)
   VAR_15->flags |= VAR_0;

  if (VAR_17 & VAR_6)
   VAR_15->flags |= VAR_1;

  VAR_15->len = FUNC_2(FUNC_4(FUNC_10(VAR_12)));
 } else {

  VAR_16 = FUNC_0(VAR_14, (struct can_frame **)&VAR_15);
  if (!VAR_16)
   return -VAR_4;

  VAR_15->len = FUNC_3(FUNC_10(VAR_12));
 }

 VAR_15->can_id = FUNC_6(VAR_12->can_id);

 if (VAR_17 & VAR_8)
  VAR_15->can_id |= VAR_2;

 if (VAR_17 & VAR_9)
  VAR_15->can_id |= VAR_3;
 else
  FUNC_7(VAR_15->data, VAR_12->d, VAR_15->len);

 FUNC_8(VAR_16, &VAR_10->time_ref, FUNC_6(VAR_12->ts_low));

 VAR_14->stats.rx_packets++;
 VAR_14->stats.rx_bytes += VAR_15->len;

 return 0;
}
