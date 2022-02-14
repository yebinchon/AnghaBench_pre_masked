
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct vmpacket_descriptor {scalar_t__ trans_id; } ;
struct vmbus_channel {int outbound; } ;
struct sk_buff {scalar_t__ cb; } ;
struct netvsc_stats {int syncp; int bytes; int packets; } ;
struct netvsc_device {int tx_disable; int wait_drain; int destroy; TYPE_1__* chan_table; } ;
struct netdev_queue {int dummy; } ;
struct TYPE_4__ {int wake_queue; } ;
struct net_device_context {TYPE_2__ eth_stats; } ;
struct net_device {int dummy; } ;
struct hv_netvsc_packet {scalar_t__ send_buf_index; size_t q_idx; scalar_t__ total_bytes; scalar_t__ total_packets; } ;
struct TYPE_3__ {int queue_sends; struct netvsc_stats tx_stats; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int) ;
 struct netdev_queue* FUNC_4 (struct net_device*,size_t) ;
 struct net_device_context* FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct netdev_queue*) ;
 int FUNC_7 (struct netdev_queue*) ;
 int FUNC_8 (struct netvsc_device*,scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(struct net_device *VAR_2,
        struct netvsc_device *VAR_3,
        struct vmbus_channel *VAR_4,
        const struct vmpacket_descriptor *VAR_5,
        int VAR_6)
{
 struct sk_buff *VAR_7 = (struct sk_buff *)(unsigned long)VAR_5->trans_id;
 struct net_device_context *VAR_8 = FUNC_5(VAR_2);
 u16 VAR_9 = 0;
 int VAR_10;


 if (FUNC_2(VAR_7)) {
  const struct hv_netvsc_packet *VAR_11
   = (struct hv_netvsc_packet *)VAR_7->cb;
  u32 VAR_12 = VAR_11->send_buf_index;
  struct netvsc_stats *VAR_13;

  if (VAR_12 != VAR_0)
   FUNC_8(VAR_3, VAR_12);
  VAR_9 = VAR_11->q_idx;

  VAR_13 = &VAR_3->chan_table[VAR_9].tx_stats;

  FUNC_9(&VAR_13->syncp);
  VAR_13->packets += VAR_11->total_packets;
  VAR_13->bytes += VAR_11->total_bytes;
  FUNC_10(&VAR_13->syncp);

  FUNC_3(VAR_7, VAR_6);
 }

 VAR_10 =
  FUNC_0(&VAR_3->chan_table[VAR_9].queue_sends);

 if (FUNC_11(VAR_3->destroy)) {
  if (VAR_10 == 0)
   FUNC_12(&VAR_3->wait_drain);
 } else {
  struct netdev_queue *VAR_14 = FUNC_4(VAR_2, VAR_9);

  if (FUNC_6(VAR_14) && !VAR_3->tx_disable &&
      (FUNC_1(&VAR_4->outbound) >
       VAR_1 || VAR_10 < 1)) {
   FUNC_7(VAR_14);
   VAR_8->eth_stats.wake_queue++;
  }
 }
}
