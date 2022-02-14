
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virtnet_rq_stats {int dummy; } ;
struct virtnet_info {unsigned int hdr_len; int vdev; scalar_t__ big_packets; scalar_t__ mergeable_rx_bufs; struct net_device* dev; } ;
struct TYPE_4__ {int flags; int gso_size; int gso_type; } ;
struct virtio_net_hdr_mrg_rxbuf {TYPE_2__ hdr; } ;
struct sk_buff {int pkt_type; int len; int protocol; int ip_summed; } ;
struct receive_queue {int napi; int vq; } ;
struct TYPE_3__ {int rx_frame_errors; int rx_length_errors; } ;
struct net_device {TYPE_1__ stats; int name; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 int FUNC_2 (struct receive_queue*,void*) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 int FUNC_4 (char*,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ,unsigned int,...) ;
 int FUNC_7 (int ) ;
 struct sk_buff* FUNC_8 (struct net_device*,struct virtnet_info*,struct receive_queue*,void*,unsigned int,struct virtnet_rq_stats*) ;
 struct sk_buff* FUNC_9 (struct net_device*,struct virtnet_info*,struct receive_queue*,void*,void**,unsigned int,unsigned int*,struct virtnet_rq_stats*) ;
 struct sk_buff* FUNC_10 (struct net_device*,struct virtnet_info*,struct receive_queue*,void*,void**,unsigned int,unsigned int*,struct virtnet_rq_stats*) ;
 int FUNC_11 (struct sk_buff*,int ) ;
 struct virtio_net_hdr_mrg_rxbuf* FUNC_12 (struct sk_buff*) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (void*) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (struct sk_buff*,TYPE_2__*,int ) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static void FUNC_18(struct virtnet_info *VAR_3, struct receive_queue *VAR_4,
   void *VAR_5, unsigned int VAR_6, void **VAR_7,
   unsigned int *VAR_8,
   struct virtnet_rq_stats *VAR_9)
{
 struct net_device *VAR_10 = VAR_3->dev;
 struct sk_buff *VAR_11;
 struct virtio_net_hdr_mrg_rxbuf *VAR_12;

 if (FUNC_13(VAR_6 < VAR_3->hdr_len + VAR_1)) {
  FUNC_6("%s: short packet %i\n", VAR_10->name, VAR_6);
  VAR_10->stats.rx_length_errors++;
  if (VAR_3->mergeable_rx_bufs) {
   FUNC_7(FUNC_14(VAR_5));
  } else if (VAR_3->big_packets) {
   FUNC_2(VAR_4, VAR_5);
  } else {
   FUNC_7(FUNC_14(VAR_5));
  }
  return;
 }

 if (VAR_3->mergeable_rx_bufs)
  VAR_11 = FUNC_9(VAR_10, VAR_3, VAR_4, VAR_5, VAR_7, VAR_6, VAR_8,
     VAR_9);
 else if (VAR_3->big_packets)
  VAR_11 = FUNC_8(VAR_10, VAR_3, VAR_4, VAR_5, VAR_6, VAR_9);
 else
  VAR_11 = FUNC_10(VAR_10, VAR_3, VAR_4, VAR_5, VAR_7, VAR_6, VAR_8, VAR_9);

 if (FUNC_13(!VAR_11))
  return;

 VAR_12 = FUNC_12(VAR_11);

 if (VAR_12->hdr.flags & VAR_2)
  VAR_11->ip_summed = VAR_0;

 if (FUNC_16(VAR_11, &VAR_12->hdr,
      FUNC_15(VAR_3->vdev))) {
  FUNC_4("%s: bad gso: type: %u, size: %u\n",
         VAR_10->name, VAR_12->hdr.gso_type,
         VAR_12->hdr.gso_size);
  goto frame_err;
 }

 FUNC_11(VAR_11, FUNC_17(VAR_4->vq));
 VAR_11->protocol = FUNC_1(VAR_11, VAR_10);
 FUNC_6("Receiving skb proto 0x%04x len %i type %i\n",
   FUNC_5(VAR_11->protocol), VAR_11->len, VAR_11->pkt_type);

 FUNC_3(&VAR_4->napi, VAR_11);
 return;

frame_err:
 VAR_10->stats.rx_frame_errors++;
 FUNC_0(VAR_11);
}
