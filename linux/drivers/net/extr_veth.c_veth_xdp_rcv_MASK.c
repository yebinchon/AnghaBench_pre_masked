
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdp_frame {scalar_t__ len; } ;
struct veth_xdp_tx_bq {int dummy; } ;
struct TYPE_2__ {int xdp_packets; int xdp_bytes; int xdp_drops; int syncp; } ;
struct veth_rq {TYPE_1__ stats; int xdp_napi; int xdp_ring; } ;
struct sk_buff {scalar_t__ len; } ;


 void* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct sk_buff*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (void*) ;
 struct xdp_frame* FUNC_5 (void*) ;
 struct sk_buff* FUNC_6 (struct veth_rq*,struct xdp_frame*,unsigned int*,struct veth_xdp_tx_bq*) ;
 struct sk_buff* FUNC_7 (struct veth_rq*,struct sk_buff*,unsigned int*,struct veth_xdp_tx_bq*) ;

__attribute__((used)) static int FUNC_8(struct veth_rq *VAR_0, int VAR_1, unsigned int *VAR_2,
   struct veth_xdp_tx_bq *VAR_3)
{
 int VAR_4, VAR_5 = 0, VAR_6 = 0, VAR_7 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  void *VAR_8 = FUNC_0(&VAR_0->xdp_ring);
  unsigned int VAR_9 = 0;
  struct sk_buff *VAR_10;

  if (!VAR_8)
   break;

  if (FUNC_4(VAR_8)) {
   struct xdp_frame *VAR_11 = FUNC_5(VAR_8);

   VAR_7 += VAR_11->len;
   VAR_10 = FUNC_6(VAR_0, VAR_11, &VAR_9, VAR_3);
  } else {
   VAR_10 = VAR_8;
   VAR_7 += VAR_10->len;
   VAR_10 = FUNC_7(VAR_0, VAR_10, &VAR_9, VAR_3);
  }
  *VAR_2 |= VAR_9;

  if (VAR_10)
   FUNC_1(&VAR_0->xdp_napi, VAR_10);
  else if (!VAR_9)
   VAR_6++;

  VAR_5++;
 }

 FUNC_2(&VAR_0->stats.syncp);
 VAR_0->stats.xdp_packets += VAR_5;
 VAR_0->stats.xdp_bytes += VAR_7;
 VAR_0->stats.xdp_drops += VAR_6;
 FUNC_3(&VAR_0->stats.syncp);

 return VAR_5;
}
