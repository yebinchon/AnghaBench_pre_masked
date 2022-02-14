
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int mtu; } ;
struct ixgbe_ring {struct bpf_prog* xdp_prog; } ;
struct ixgbe_adapter {int flags; int num_rx_queues; int netdev; TYPE_1__** xdp_ring; struct bpf_prog* xdp_prog; struct ixgbe_ring** rx_ring; int hw_tcs; } ;
struct bpf_prog {int dummy; } ;
struct TYPE_2__ {scalar_t__ xsk_umem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct bpf_prog*) ;
 int FUNC_1 (struct ixgbe_ring*) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (int ,int,int ) ;
 struct ixgbe_adapter* FUNC_4 (struct net_device*) ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (struct bpf_prog*,struct bpf_prog*) ;
 scalar_t__ FUNC_6 (struct ixgbe_ring*) ;
 struct bpf_prog* FUNC_7 (struct bpf_prog**,struct bpf_prog*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_10, struct bpf_prog *VAR_11)
{
 int VAR_12, VAR_13 = VAR_10->mtu + VAR_3 + VAR_2 + VAR_7;
 struct ixgbe_adapter *VAR_14 = FUNC_4(VAR_10);
 struct bpf_prog *VAR_15;
 bool VAR_16;

 if (VAR_14->flags & VAR_5)
  return -VAR_0;

 if (VAR_14->flags & VAR_4)
  return -VAR_0;


 for (VAR_12 = 0; VAR_12 < VAR_14->num_rx_queues; VAR_12++) {
  struct ixgbe_ring *VAR_17 = VAR_14->rx_ring[VAR_12];

  if (FUNC_6(VAR_17))
   return -VAR_0;

  if (VAR_13 > FUNC_1(VAR_17))
   return -VAR_0;
 }

 if (VAR_9 > VAR_6)
  return -VAR_1;

 VAR_15 = FUNC_7(&VAR_14->xdp_prog, VAR_11);
 VAR_16 = (!!VAR_11 != !!VAR_15);


 if (VAR_16) {
  int VAR_18 = FUNC_2(VAR_10, VAR_14->hw_tcs);

  if (VAR_18) {
   FUNC_5(VAR_14->xdp_prog, VAR_15);
   return -VAR_0;
  }
 } else {
  for (VAR_12 = 0; VAR_12 < VAR_14->num_rx_queues; VAR_12++)
   (void)FUNC_7(&VAR_14->rx_ring[VAR_12]->xdp_prog,
       VAR_14->xdp_prog);
 }

 if (VAR_15)
  FUNC_0(VAR_15);




 if (VAR_16 && VAR_11)
  for (VAR_12 = 0; VAR_12 < VAR_14->num_rx_queues; VAR_12++)
   if (VAR_14->xdp_ring[VAR_12]->xsk_umem)
    (void)FUNC_3(VAR_14->netdev, VAR_12,
             VAR_8);

 return 0;
}
