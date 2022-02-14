
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int dummy; } ;
struct net_device_stats {int rx_bytes; int rx_packets; } ;
struct mcba_usb_msg_can {int dlc; int data; int eid; int sid; } ;
struct mcba_priv {TYPE_1__* netdev; } ;
struct can_frame {int can_id; scalar_t__ can_dlc; int data; } ;
struct TYPE_3__ {struct net_device_stats stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sk_buff* FUNC_0 (TYPE_1__*,struct can_frame**) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_6(struct mcba_priv *VAR_6,
     struct mcba_usb_msg_can *VAR_7)
{
 struct can_frame *VAR_8;
 struct sk_buff *VAR_9;
 struct net_device_stats *VAR_10 = &VAR_6->netdev->stats;
 u16 VAR_11;

 VAR_9 = FUNC_0(VAR_6->netdev, &VAR_8);
 if (!VAR_9)
  return;

 VAR_11 = FUNC_3(&VAR_7->sid);

 if (VAR_11 & VAR_5) {



  VAR_8->can_id = VAR_0;


  VAR_8->can_id |= (VAR_11 & 0xffe0) << 13;

  VAR_8->can_id |= (VAR_11 & 3) << 16;

  VAR_8->can_id |= FUNC_3(&VAR_7->eid);
 } else {



  VAR_8->can_id = (VAR_11 & 0xffe0) >> 5;
 }

 if (VAR_7->dlc & VAR_4)
  VAR_8->can_id |= VAR_2;

 VAR_8->can_dlc = FUNC_2(VAR_7->dlc & VAR_3);

 FUNC_4(VAR_8->data, VAR_7->data, VAR_8->can_dlc);

 VAR_10->rx_packets++;
 VAR_10->rx_bytes += VAR_8->can_dlc;

 FUNC_1(VAR_6->netdev, VAR_1);
 FUNC_5(VAR_9);
}
