
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ulong ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct vmbus_channel {scalar_t__ rescind; int outbound; } ;
struct sk_buff {int dummy; } ;
struct TYPE_7__ {int msg_type; } ;
struct nvsp_1_message_send_rndis_packet {int channel_type; scalar_t__ send_buf_section_index; scalar_t__ send_buf_section_size; } ;
struct TYPE_5__ {struct nvsp_1_message_send_rndis_packet send_rndis_pkt; } ;
struct TYPE_6__ {TYPE_1__ v1_msg; } ;
struct nvsp_message {TYPE_3__ hdr; TYPE_2__ msg; } ;
struct netvsc_device {int tx_disable; struct netvsc_channel* chan_table; } ;
struct netvsc_channel {int queue_sends; struct vmbus_channel* channel; } ;
struct netdev_queue {int dummy; } ;
struct TYPE_8__ {int wake_queue; int stop_queue; } ;
struct net_device_context {TYPE_4__ eth_stats; } ;
struct net_device {int dummy; } ;
struct hv_page_buffer {int dummy; } ;
struct hv_netvsc_packet {size_t q_idx; scalar_t__ send_buf_index; scalar_t__ total_data_buflen; int page_buf_cnt; int rmsg_pgcnt; scalar_t__ cp_partial; } ;
struct hv_device {int dummy; } ;
typedef int nvmsg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 struct net_device* FUNC_3 (struct hv_device*) ;
 int FUNC_4 (struct net_device*,char*,int ,scalar_t__,int) ;
 struct netdev_queue* FUNC_5 (struct net_device*,size_t) ;
 struct net_device_context* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct netdev_queue*) ;
 int FUNC_8 (struct netdev_queue*) ;
 int FUNC_9 (struct netdev_queue*) ;
 int FUNC_10 (struct net_device*,struct vmbus_channel*,struct nvsp_1_message_send_rndis_packet*) ;
 int FUNC_11 (struct vmbus_channel*,struct nvsp_message*,int,scalar_t__,int ,int ) ;
 int FUNC_12 (struct vmbus_channel*,struct hv_page_buffer*,int ,struct nvsp_message*,int,scalar_t__) ;

__attribute__((used)) static inline int FUNC_13(
 struct hv_device *VAR_8,
 struct hv_netvsc_packet *VAR_9,
 struct netvsc_device *VAR_10,
 struct hv_page_buffer *VAR_11,
 struct sk_buff *VAR_12)
{
 struct nvsp_message VAR_13;
 struct nvsp_1_message_send_rndis_packet *VAR_14 =
  &VAR_13.msg.v1_msg.send_rndis_pkt;
 struct netvsc_channel * const VAR_15 =
  &VAR_10->chan_table[VAR_9->q_idx];
 struct vmbus_channel *VAR_16 = VAR_15->channel;
 struct net_device *VAR_17 = FUNC_3(VAR_8);
 struct net_device_context *VAR_18 = FUNC_6(VAR_17);
 struct netdev_queue *VAR_19 = FUNC_5(VAR_17, VAR_9->q_idx);
 u64 VAR_20;
 int VAR_21;
 u32 VAR_22 = FUNC_2(&VAR_16->outbound);

 VAR_13.hdr.msg_type = VAR_4;
 if (VAR_12)
  VAR_14->channel_type = 0;
 else
  VAR_14->channel_type = 1;

 VAR_14->send_buf_section_index = VAR_9->send_buf_index;
 if (VAR_9->send_buf_index == VAR_3)
  VAR_14->send_buf_section_size = 0;
 else
  VAR_14->send_buf_section_size = VAR_9->total_data_buflen;

 VAR_20 = (ulong)VAR_12;

 if (VAR_16->rescind)
  return -VAR_1;

 FUNC_10(VAR_17, VAR_16, VAR_14);

 if (VAR_9->page_buf_cnt) {
  if (VAR_9->cp_partial)
   VAR_11 += VAR_9->rmsg_pgcnt;

  VAR_21 = FUNC_12(VAR_16,
        VAR_11, VAR_9->page_buf_cnt,
        &VAR_13, sizeof(VAR_13),
        VAR_20);
 } else {
  VAR_21 = FUNC_11(VAR_16,
           &VAR_13, sizeof(VAR_13),
           VAR_20, VAR_7,
           VAR_6);
 }

 if (VAR_21 == 0) {
  FUNC_0(&VAR_15->queue_sends);

  if (VAR_22 < VAR_5) {
   FUNC_8(VAR_19);
   VAR_18->eth_stats.stop_queue++;
  }
 } else if (VAR_21 == -VAR_0) {
  FUNC_8(VAR_19);
  VAR_18->eth_stats.stop_queue++;
 } else {
  FUNC_4(VAR_17,
      "Unable to send packet pages %u len %u, ret %d\n",
      VAR_9->page_buf_cnt, VAR_9->total_data_buflen,
      VAR_21);
 }

 if (FUNC_7(VAR_19) &&
     FUNC_1(&VAR_15->queue_sends) < 1 &&
     !VAR_10->tx_disable) {
  FUNC_9(VAR_19);
  VAR_18->eth_stats.wake_queue++;
  if (VAR_21 == -VAR_0)
   VAR_21 = -VAR_2;
 }

 return VAR_21;
}
