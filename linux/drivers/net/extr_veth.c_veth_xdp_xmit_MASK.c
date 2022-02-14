
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xdp_frame {unsigned int len; } ;
struct TYPE_2__ {int producer_lock; } ;
struct veth_rq {TYPE_1__ xdp_ring; int xdp_prog; } ;
struct veth_priv {int dropped; struct veth_rq* rq; int peer; } ;
struct net_device {unsigned int mtu; unsigned int hard_header_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*,void*) ;
 int FUNC_1 (struct veth_rq*) ;
 int FUNC_2 (int,int *) ;
 scalar_t__ FUNC_3 (int) ;
 struct veth_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ) ;
 struct net_device* FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;
 size_t FUNC_10 (struct net_device*) ;
 void* FUNC_11 (struct xdp_frame*) ;
 int FUNC_12 (struct xdp_frame*) ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_5, int VAR_6,
    struct xdp_frame **VAR_7, u32 VAR_8)
{
 struct veth_priv *VAR_9, *VAR_10 = FUNC_4(VAR_5);
 struct net_device *VAR_11;
 int VAR_12, VAR_13, VAR_14 = VAR_6;
 unsigned int VAR_15;
 struct veth_rq *VAR_16;

 if (FUNC_9(VAR_8 & ~VAR_3)) {
  VAR_13 = -VAR_0;
  goto drop;
 }

 VAR_11 = FUNC_6(VAR_10->peer);
 if (FUNC_9(!VAR_11)) {
  VAR_13 = -VAR_1;
  goto drop;
 }

 VAR_9 = FUNC_4(VAR_11);
 VAR_16 = &VAR_9->rq[FUNC_10(VAR_11)];




 if (!FUNC_5(VAR_16->xdp_prog)) {
  VAR_13 = -VAR_1;
  goto drop;
 }

 VAR_14 = 0;
 VAR_15 = VAR_11->mtu + VAR_11->hard_header_len + VAR_2;

 FUNC_7(&VAR_16->xdp_ring.producer_lock);
 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  struct xdp_frame *VAR_17 = VAR_7[VAR_12];
  void *VAR_18 = FUNC_11(VAR_17);

  if (FUNC_9(VAR_17->len > VAR_15 ||
        FUNC_0(&VAR_16->xdp_ring, VAR_18))) {
   FUNC_12(VAR_17);
   VAR_14++;
  }
 }
 FUNC_8(&VAR_16->xdp_ring.producer_lock);

 if (VAR_8 & VAR_4)
  FUNC_1(VAR_16);

 if (FUNC_3(!VAR_14))
  return VAR_6;

 VAR_13 = VAR_6 - VAR_14;
drop:
 FUNC_2(VAR_14, &VAR_10->dropped);

 return VAR_13;
}
