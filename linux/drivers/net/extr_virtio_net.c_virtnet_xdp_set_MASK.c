
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct virtnet_info {int curr_queue_pairs; int xdp_queue_pairs; int max_queue_pairs; TYPE_2__* sq; TYPE_1__* rq; int any_header_sg; scalar_t__ mergeable_rx_bufs; int vdev; } ;
struct padded_vnet_hdr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {unsigned long mtu; } ;
struct bpf_prog {int dummy; } ;
struct TYPE_4__ {int napi; int vq; } ;
struct TYPE_3__ {int napi; int vq; int xdp_prog; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct bpf_prog*) ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 int VAR_3 ;
 int FUNC_2 (struct bpf_prog*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct virtnet_info*,int) ;
 struct bpf_prog* FUNC_4 (struct bpf_prog*,int) ;
 int FUNC_5 (struct bpf_prog*) ;
 int FUNC_6 (struct bpf_prog*,int) ;
 int FUNC_7 (int *) ;
 struct virtnet_info* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*,char*,int,...) ;
 scalar_t__ FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*,int) ;
 int VAR_10 ;
 int FUNC_12 (int ,struct bpf_prog*) ;
 struct bpf_prog* FUNC_13 (int ) ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 (int ,int ) ;
 int FUNC_16 (struct virtnet_info*) ;
 int FUNC_17 (int ,int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct virtnet_info*,int ,int *) ;
 int FUNC_20 (struct virtnet_info*) ;

__attribute__((used)) static int FUNC_21(struct net_device *VAR_11, struct bpf_prog *VAR_12,
      struct netlink_ext_ack *VAR_13)
{
 unsigned long int VAR_14 = VAR_3 - sizeof(struct padded_vnet_hdr);
 struct virtnet_info *VAR_15 = FUNC_8(VAR_11);
 struct bpf_prog *VAR_16;
 u16 VAR_17 = 0, VAR_18;
 int VAR_19, VAR_20;

 if (!FUNC_15(VAR_15->vdev, VAR_4)
     && (FUNC_15(VAR_15->vdev, VAR_7) ||
         FUNC_15(VAR_15->vdev, VAR_8) ||
         FUNC_15(VAR_15->vdev, VAR_6) ||
  FUNC_15(VAR_15->vdev, VAR_9) ||
  FUNC_15(VAR_15->vdev, VAR_5))) {
  FUNC_1(VAR_13, "Can't set XDP while host is implementing LRO/CSUM, disable LRO/CSUM first");
  return -VAR_2;
 }

 if (VAR_15->mergeable_rx_bufs && !VAR_15->any_header_sg) {
  FUNC_1(VAR_13, "XDP expects header/data in single page, any_header_sg required");
  return -VAR_0;
 }

 if (VAR_11->mtu > VAR_14) {
  FUNC_1(VAR_13, "MTU too large to enable XDP");
  FUNC_9(VAR_11, "XDP requires MTU less than %lu\n", VAR_14);
  return -VAR_0;
 }

 VAR_18 = VAR_15->curr_queue_pairs - VAR_15->xdp_queue_pairs;
 if (VAR_12)
  VAR_17 = VAR_10;


 if (VAR_18 + VAR_17 > VAR_15->max_queue_pairs) {
  FUNC_1(VAR_13, "Too few free TX rings available");
  FUNC_9(VAR_11, "request %i queues but max is %i\n",
       VAR_18 + VAR_17, VAR_15->max_queue_pairs);
  return -VAR_1;
 }

 VAR_16 = FUNC_13(VAR_15->rq[0].xdp_prog);
 if (!VAR_12 && !VAR_16)
  return 0;

 if (VAR_12) {
  VAR_12 = FUNC_4(VAR_12, VAR_15->max_queue_pairs - 1);
  if (FUNC_0(VAR_12))
   return FUNC_2(VAR_12);
 }


 if (FUNC_10(VAR_11)) {
  for (VAR_19 = 0; VAR_19 < VAR_15->max_queue_pairs; VAR_19++) {
   FUNC_7(&VAR_15->rq[VAR_19].napi);
   FUNC_18(&VAR_15->sq[VAR_19].napi);
  }
 }

 if (!VAR_12) {
  for (VAR_19 = 0; VAR_19 < VAR_15->max_queue_pairs; VAR_19++) {
   FUNC_12(VAR_15->rq[VAR_19].xdp_prog, VAR_12);
   if (VAR_19 == 0)
    FUNC_20(VAR_15);
  }
  FUNC_14();
 }

 VAR_20 = FUNC_3(VAR_15, VAR_18 + VAR_17);
 if (VAR_20)
  goto err;
 FUNC_11(VAR_11, VAR_18 + VAR_17);
 VAR_15->xdp_queue_pairs = VAR_17;

 if (VAR_12) {
  for (VAR_19 = 0; VAR_19 < VAR_15->max_queue_pairs; VAR_19++) {
   FUNC_12(VAR_15->rq[VAR_19].xdp_prog, VAR_12);
   if (VAR_19 == 0 && !VAR_16)
    FUNC_16(VAR_15);
  }
 }

 for (VAR_19 = 0; VAR_19 < VAR_15->max_queue_pairs; VAR_19++) {
  if (VAR_16)
   FUNC_5(VAR_16);
  if (FUNC_10(VAR_11)) {
   FUNC_17(VAR_15->rq[VAR_19].vq, &VAR_15->rq[VAR_19].napi);
   FUNC_19(VAR_15, VAR_15->sq[VAR_19].vq,
            &VAR_15->sq[VAR_19].napi);
  }
 }

 return 0;

err:
 if (!VAR_12) {
  FUNC_16(VAR_15);
  for (VAR_19 = 0; VAR_19 < VAR_15->max_queue_pairs; VAR_19++)
   FUNC_12(VAR_15->rq[VAR_19].xdp_prog, VAR_16);
 }

 if (FUNC_10(VAR_11)) {
  for (VAR_19 = 0; VAR_19 < VAR_15->max_queue_pairs; VAR_19++) {
   FUNC_17(VAR_15->rq[VAR_19].vq, &VAR_15->rq[VAR_19].napi);
   FUNC_19(VAR_15, VAR_15->sq[VAR_19].vq,
            &VAR_15->sq[VAR_19].napi);
  }
 }
 if (VAR_12)
  FUNC_6(VAR_12, VAR_15->max_queue_pairs - 1);
 return VAR_20;
}
