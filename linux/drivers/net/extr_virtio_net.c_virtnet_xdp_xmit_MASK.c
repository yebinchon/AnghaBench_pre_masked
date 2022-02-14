
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xdp_frame {scalar_t__ len; } ;
struct virtnet_info {struct receive_queue* rq; } ;
struct sk_buff {scalar_t__ len; } ;
struct TYPE_2__ {int bytes; int packets; int xdp_tx; int xdp_tx_drops; int kicks; int syncp; } ;
struct send_queue {TYPE_1__ stats; int vq; } ;
struct receive_queue {int xdp_prog; } ;
struct net_device {int dummy; } ;
struct bpf_prog {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct virtnet_info*,struct send_queue*,struct xdp_frame*) ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,int) ;
 struct virtnet_info* FUNC_4 (struct net_device*) ;
 struct xdp_frame* FUNC_5 (void*) ;
 struct bpf_prog* FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;
 struct send_queue* FUNC_10 (struct virtnet_info*) ;
 void* FUNC_11 (int ,unsigned int*) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (struct xdp_frame*) ;
 int FUNC_15 (struct xdp_frame*) ;

__attribute__((used)) static int FUNC_16(struct net_device *VAR_4,
       int VAR_5, struct xdp_frame **VAR_6, u32 VAR_7)
{
 struct virtnet_info *VAR_8 = FUNC_4(VAR_4);
 struct receive_queue *VAR_9 = VAR_8->rq;
 struct bpf_prog *VAR_10;
 struct send_queue *VAR_11;
 unsigned int VAR_12;
 int VAR_13 = 0;
 int VAR_14 = 0;
 int VAR_15 = 0;
 int VAR_16 = 0;
 int VAR_17, VAR_18;
 void *VAR_19;
 int VAR_20;




 VAR_10 = FUNC_6(VAR_9->xdp_prog);
 if (!VAR_10)
  return -VAR_1;

 VAR_11 = FUNC_10(VAR_8);

 if (FUNC_9(VAR_7 & ~VAR_2)) {
  VAR_17 = -VAR_0;
  VAR_15 = VAR_5;
  goto out;
 }


 while ((VAR_19 = FUNC_11(VAR_11->vq, &VAR_12)) != ((void*)0)) {
  if (FUNC_2(FUNC_1(VAR_19))) {
   struct xdp_frame *VAR_21 = FUNC_5(VAR_19);

   VAR_14 += VAR_21->len;
   FUNC_14(VAR_21);
  } else {
   struct sk_buff *VAR_22 = VAR_19;

   VAR_14 += VAR_22->len;
   FUNC_3(VAR_22, 0);
  }
  VAR_13++;
 }

 for (VAR_20 = 0; VAR_20 < VAR_5; VAR_20++) {
  struct xdp_frame *VAR_23 = VAR_6[VAR_20];

  VAR_18 = FUNC_0(VAR_8, VAR_11, VAR_23);
  if (VAR_18) {
   FUNC_15(VAR_23);
   VAR_15++;
  }
 }
 VAR_17 = VAR_5 - VAR_15;

 if (VAR_7 & VAR_3) {
  if (FUNC_12(VAR_11->vq) && FUNC_13(VAR_11->vq))
   VAR_16 = 1;
 }
out:
 FUNC_7(&VAR_11->stats.syncp);
 VAR_11->stats.bytes += VAR_14;
 VAR_11->stats.packets += VAR_13;
 VAR_11->stats.xdp_tx += VAR_5;
 VAR_11->stats.xdp_tx_drops += VAR_15;
 VAR_11->stats.kicks += VAR_16;
 FUNC_8(&VAR_11->stats.syncp);

 return VAR_17;
}
