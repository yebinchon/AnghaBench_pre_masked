
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct ixgbevf_ring {struct bpf_prog* xdp_prog; } ;
struct ixgbevf_adapter {int num_rx_queues; struct bpf_prog* xdp_prog; struct ixgbevf_ring** rx_ring; } ;
struct bpf_prog {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bpf_prog*) ;
 int FUNC_1 (struct ixgbevf_adapter*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct ixgbevf_adapter*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct ixgbevf_ring*) ;
 struct ixgbevf_adapter* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 struct bpf_prog* FUNC_8 (struct bpf_prog**,struct bpf_prog*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_4, struct bpf_prog *VAR_5)
{
 int VAR_6, VAR_7 = VAR_4->mtu + VAR_2 + VAR_1 + VAR_3;
 struct ixgbevf_adapter *VAR_8 = FUNC_6(VAR_4);
 struct bpf_prog *VAR_9;


 for (VAR_6 = 0; VAR_6 < VAR_8->num_rx_queues; VAR_6++) {
  struct ixgbevf_ring *VAR_10 = VAR_8->rx_ring[VAR_6];

  if (VAR_7 > FUNC_5(VAR_10))
   return -VAR_0;
 }

 VAR_9 = FUNC_8(&VAR_8->xdp_prog, VAR_5);


 if (!!VAR_5 != !!VAR_9) {




  if (FUNC_7(VAR_4))
   FUNC_2(VAR_4);

  FUNC_1(VAR_8);
  FUNC_3(VAR_8);

  if (FUNC_7(VAR_4))
   FUNC_4(VAR_4);
 } else {
  for (VAR_6 = 0; VAR_6 < VAR_8->num_rx_queues; VAR_6++)
   FUNC_8(&VAR_8->rx_ring[VAR_6]->xdp_prog, VAR_8->xdp_prog);
 }

 if (VAR_9)
  FUNC_0(VAR_9);

 return 0;
}
