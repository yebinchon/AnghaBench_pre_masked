
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nicvf {scalar_t__ rx_queues; scalar_t__ tx_queues; scalar_t__ max_queues; struct net_device* netdev; int * xdp_prog; } ;
struct net_device {scalar_t__ mtu; } ;
struct bpf_prog {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (struct bpf_prog*) ;
 int FUNC_4 (struct net_device*,char*,scalar_t__) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct nicvf*,int) ;
 int FUNC_9 (struct net_device*) ;
 struct bpf_prog* FUNC_10 (int **,struct bpf_prog*) ;

__attribute__((used)) static int FUNC_11(struct nicvf *VAR_3, struct bpf_prog *VAR_4)
{
 struct net_device *VAR_5 = VAR_3->netdev;
 bool VAR_6 = FUNC_5(VAR_3->netdev);
 struct bpf_prog *VAR_7;
 bool VAR_8 = 0;
 int VAR_9 = 0;




 if (VAR_4 && VAR_5->mtu > VAR_2) {
  FUNC_4(VAR_5, "Jumbo frames not yet supported with XDP, current MTU %d.\n",
       VAR_5->mtu);
  return -VAR_1;
 }
 if ((VAR_3->rx_queues + VAR_3->tx_queues) > VAR_3->max_queues) {
  FUNC_4(VAR_5,
       "Failed to attach BPF prog, RXQs + TXQs > Max %d\n",
       VAR_3->max_queues);
  return -VAR_0;
 }

 if (VAR_6)
  FUNC_9(VAR_3->netdev);

 VAR_7 = FUNC_10(&VAR_3->xdp_prog, VAR_4);

 if (VAR_7)
  FUNC_3(VAR_7);

 if (VAR_3->xdp_prog) {

  VAR_3->xdp_prog = FUNC_2(VAR_3->xdp_prog, VAR_3->rx_queues - 1);
  if (!FUNC_0(VAR_3->xdp_prog)) {
   VAR_8 = 1;
  } else {
   VAR_9 = FUNC_1(VAR_3->xdp_prog);
   VAR_3->xdp_prog = ((void*)0);
  }
 }


 FUNC_8(VAR_3, VAR_8);

 if (VAR_6) {

  FUNC_7(VAR_3->netdev);
  FUNC_6(VAR_3->netdev);
 }

 return VAR_9;
}
