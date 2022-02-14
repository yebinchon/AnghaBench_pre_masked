
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct rndis_message {int dummy; } ;
struct netvsc_device {scalar_t__ max_pkt; scalar_t__ pkt_align; scalar_t__ send_section_size; struct netvsc_channel* chan_table; scalar_t__ destroy; } ;
struct multi_send_data {scalar_t__ count; struct hv_netvsc_packet* pkt; struct sk_buff* skb; } ;
struct netvsc_channel {struct multi_send_data msd; } ;
struct TYPE_2__ {int tx_send_full; } ;
struct net_device_context {TYPE_1__ eth_stats; struct hv_device* device_ctx; int nvdev; } ;
struct net_device {int dummy; } ;
struct hv_page_buffer {int dummy; } ;
struct hv_netvsc_packet {scalar_t__ total_data_buflen; size_t q_idx; unsigned int send_buf_index; int cp_partial; scalar_t__ rmsg_size; scalar_t__ total_bytes; scalar_t__ total_packets; scalar_t__ page_buf_cnt; scalar_t__ rmsg_pgcnt; } ;
struct hv_device {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct hv_netvsc_packet**,struct sk_buff**,struct multi_send_data*) ;
 int FUNC_3 (struct net_device*,size_t) ;
 struct net_device_context* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct netvsc_device*,unsigned int,scalar_t__,struct hv_netvsc_packet*,struct rndis_message*,struct hv_page_buffer*,int) ;
 int FUNC_8 (struct netvsc_device*,unsigned int) ;
 unsigned int FUNC_9 (struct netvsc_device*) ;
 int FUNC_10 (struct hv_device*,struct hv_netvsc_packet*,struct netvsc_device*,struct hv_page_buffer*,struct sk_buff*) ;
 struct netvsc_device* FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int) ;

int FUNC_13(struct net_device *VAR_2,
  struct hv_netvsc_packet *VAR_3,
  struct rndis_message *VAR_4,
  struct hv_page_buffer *VAR_5,
  struct sk_buff *VAR_6)
{
 struct net_device_context *VAR_7 = FUNC_4(VAR_2);
 struct netvsc_device *VAR_8
  = FUNC_11(VAR_7->nvdev);
 struct hv_device *VAR_9 = VAR_7->device_ctx;
 int VAR_10 = 0;
 struct netvsc_channel *VAR_11;
 u32 VAR_12 = VAR_3->total_data_buflen, VAR_13 = 0;
 unsigned int VAR_14 = VAR_1;
 struct multi_send_data *VAR_15;
 struct hv_netvsc_packet *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);
 struct sk_buff *VAR_18 = ((void*)0);
 bool VAR_19, VAR_20;


 if (FUNC_12(!VAR_8 || VAR_8->destroy))
  return -VAR_0;

 VAR_11 = &VAR_8->chan_table[VAR_3->q_idx];
 VAR_3->send_buf_index = VAR_1;
 VAR_3->cp_partial = 0;




 if (!VAR_6)
  return FUNC_10(VAR_9, VAR_3, VAR_8, VAR_5, VAR_6);


 VAR_15 = &VAR_11->msd;
 if (VAR_15->pkt)
  VAR_13 = VAR_15->pkt->total_data_buflen;

 VAR_19 = VAR_13 > 0 && VAR_15->count < VAR_8->max_pkt;
 if (VAR_19 && VAR_13 + VAR_12 + VAR_8->pkt_align <
     VAR_8->send_section_size) {
  VAR_14 = VAR_15->pkt->send_buf_index;

 } else if (VAR_19 && VAR_13 + VAR_3->rmsg_size <
     VAR_8->send_section_size) {
  VAR_14 = VAR_15->pkt->send_buf_index;
  VAR_3->cp_partial = 1;

 } else if (VAR_12 + VAR_8->pkt_align <
     VAR_8->send_section_size) {
  VAR_14 = FUNC_9(VAR_8);
  if (FUNC_12(VAR_14 == VAR_1)) {
   ++VAR_7->eth_stats.tx_send_full;
  } else {
   FUNC_2(&VAR_16, &VAR_18, VAR_15);
   VAR_13 = 0;
  }
 }




 VAR_20 = FUNC_5() &&
  !VAR_3->cp_partial &&
  !FUNC_6(FUNC_3(VAR_2, VAR_3->q_idx));

 if (VAR_14 != VAR_1) {
  FUNC_7(VAR_8,
     VAR_14, VAR_13,
     VAR_3, VAR_4, VAR_5, VAR_20);

  VAR_3->send_buf_index = VAR_14;

  if (VAR_3->cp_partial) {
   VAR_3->page_buf_cnt -= VAR_3->rmsg_pgcnt;
   VAR_3->total_data_buflen = VAR_13 + VAR_3->rmsg_size;
  } else {
   VAR_3->page_buf_cnt = 0;
   VAR_3->total_data_buflen += VAR_13;
  }

  if (VAR_15->pkt) {
   VAR_3->total_packets += VAR_15->pkt->total_packets;
   VAR_3->total_bytes += VAR_15->pkt->total_bytes;
  }

  if (VAR_15->skb)
   FUNC_0(VAR_15->skb);

  if (VAR_20) {
   VAR_15->skb = VAR_6;
   VAR_15->pkt = VAR_3;
   VAR_15->count++;
  } else {
   VAR_17 = VAR_3;
   VAR_15->skb = ((void*)0);
   VAR_15->pkt = ((void*)0);
   VAR_15->count = 0;
  }
 } else {
  FUNC_2(&VAR_16, &VAR_18, VAR_15);
  VAR_17 = VAR_3;
 }

 if (VAR_16) {
  int VAR_21 = FUNC_10(VAR_9, VAR_16, VAR_8,
         ((void*)0), VAR_18);

  if (VAR_21 != 0) {
   FUNC_8(VAR_8,
           VAR_16->send_buf_index);
   FUNC_1(VAR_18);
  }
 }

 if (VAR_17)
  VAR_10 = FUNC_10(VAR_9, VAR_17, VAR_8, VAR_5, VAR_6);

 if (VAR_10 != 0 && VAR_14 != VAR_1)
  FUNC_8(VAR_8, VAR_14);

 return VAR_10;
}
