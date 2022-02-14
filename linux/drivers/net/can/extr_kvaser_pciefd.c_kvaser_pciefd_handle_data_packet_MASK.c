
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct sk_buff {int dummy; } ;
struct net_device_stats {int rx_packets; int rx_bytes; int rx_dropped; } ;
struct kvaser_pciefd_rx_packet {int* header; int timestamp; } ;
struct kvaser_pciefd {size_t nr_channels; int freq_to_ticks_div; TYPE_1__** can; } ;
struct canfd_frame {int can_id; scalar_t__ len; int data; int flags; } ;
struct can_priv {TYPE_2__* dev; } ;
struct can_frame {int dummy; } ;
typedef int __le32 ;
struct TYPE_5__ {struct net_device_stats stats; } ;
struct TYPE_4__ {struct can_priv can; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct sk_buff* FUNC_0 (TYPE_2__*,struct can_frame**) ;
 struct sk_buff* FUNC_1 (TYPE_2__*,struct canfd_frame**) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int *,scalar_t__) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ) ;
 struct skb_shared_hwtstamps* FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_8(struct kvaser_pciefd *VAR_14,
         struct kvaser_pciefd_rx_packet *VAR_15,
         __le32 *VAR_16)
{
 struct sk_buff *VAR_17;
 struct canfd_frame *VAR_18;
 struct can_priv *VAR_19;
 struct net_device_stats *VAR_20;
 struct skb_shared_hwtstamps *VAR_21;
 u8 VAR_22 = (VAR_15->header[1] >> VAR_7) & 0x7;

 if (VAR_22 >= VAR_14->nr_channels)
  return -VAR_5;

 VAR_19 = &VAR_14->can[VAR_22]->can;
 VAR_20 = &VAR_19->dev->stats;

 if (VAR_15->header[1] & VAR_11) {
  VAR_17 = FUNC_1(VAR_19->dev, &VAR_18);
  if (!VAR_17) {
   VAR_20->rx_dropped++;
   return -VAR_6;
  }

  if (VAR_15->header[1] & VAR_8)
   VAR_18->flags |= VAR_0;

  if (VAR_15->header[1] & VAR_10)
   VAR_18->flags |= VAR_1;
 } else {
  VAR_17 = FUNC_0(VAR_19->dev, (struct can_frame **)&VAR_18);
  if (!VAR_17) {
   VAR_20->rx_dropped++;
   return -VAR_6;
  }
 }

 VAR_18->can_id = VAR_15->header[0] & VAR_3;
 if (VAR_15->header[0] & VAR_12)
  VAR_18->can_id |= VAR_2;

 VAR_18->len = FUNC_2(VAR_15->header[1] >> VAR_9);

 if (VAR_15->header[0] & VAR_13)
  VAR_18->can_id |= VAR_4;
 else
  FUNC_4(VAR_18->data, VAR_16, VAR_18->len);

 VAR_21 = FUNC_7(VAR_17);

 VAR_21->hwtstamp =
  FUNC_6(FUNC_3(VAR_15->timestamp * 1000,
        VAR_14->freq_to_ticks_div));

 VAR_20->rx_bytes += VAR_18->len;
 VAR_20->rx_packets++;

 return FUNC_5(VAR_17);
}
