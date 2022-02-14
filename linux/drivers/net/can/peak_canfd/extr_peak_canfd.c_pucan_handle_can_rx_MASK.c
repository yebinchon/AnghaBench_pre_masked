
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct pucan_rx_msg {int d; int can_id; int client; int flags; } ;
struct peak_canfd_priv {TYPE_1__* ndev; int echo_lock; } ;
struct net_device_stats {int rx_packets; int rx_bytes; int tx_packets; int tx_bytes; } ;
struct canfd_frame {scalar_t__ len; int data; int can_id; int flags; } ;
struct can_frame {int dummy; } ;
struct TYPE_5__ {struct net_device_stats stats; } ;


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
 int const VAR_10 ;
 int const VAR_11 ;
 struct sk_buff* FUNC_0 (TYPE_1__*,struct can_frame**) ;
 struct sk_buff* FUNC_1 (TYPE_1__*,struct canfd_frame**) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,scalar_t__) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (struct pucan_rx_msg*) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_14(struct peak_canfd_priv *VAR_12,
          struct pucan_rx_msg *VAR_13)
{
 struct net_device_stats *VAR_14 = &VAR_12->ndev->stats;
 struct canfd_frame *VAR_15;
 struct sk_buff *VAR_16;
 const u16 VAR_17 = FUNC_6(VAR_13->flags);
 u8 VAR_18;

 if (VAR_17 & VAR_7)
  VAR_18 = FUNC_2(FUNC_5(FUNC_11(VAR_13)));
 else
  VAR_18 = FUNC_4(FUNC_11(VAR_13));


 if ((VAR_17 & VAR_9) &&
     !(VAR_17 & VAR_11)) {
  unsigned long VAR_19;

  FUNC_12(&VAR_12->echo_lock, VAR_19);
  FUNC_3(VAR_12->ndev, VAR_13->client);


  VAR_14->tx_bytes += VAR_18;
  VAR_14->tx_packets++;


  FUNC_10(VAR_12->ndev);

  FUNC_13(&VAR_12->echo_lock, VAR_19);
  return 0;
 }


 if (VAR_17 & VAR_7) {

  VAR_16 = FUNC_1(VAR_12->ndev, &VAR_15);
  if (!VAR_16)
   return -VAR_4;

  if (VAR_17 & VAR_5)
   VAR_15->flags |= VAR_0;

  if (VAR_17 & VAR_6)
   VAR_15->flags |= VAR_1;
 } else {

  VAR_16 = FUNC_0(VAR_12->ndev, (struct can_frame **)&VAR_15);
  if (!VAR_16)
   return -VAR_4;
 }

 VAR_15->can_id = FUNC_7(VAR_13->can_id);
 VAR_15->len = VAR_18;

 if (VAR_17 & VAR_8)
  VAR_15->can_id |= VAR_2;

 if (VAR_17 & VAR_10)
  VAR_15->can_id |= VAR_3;
 else
  FUNC_8(VAR_15->data, VAR_13->d, VAR_15->len);

 VAR_14->rx_bytes += VAR_15->len;
 VAR_14->rx_packets++;

 FUNC_9(VAR_16);

 return 0;
}
