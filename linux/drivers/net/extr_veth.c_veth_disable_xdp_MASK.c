
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mem; } ;
struct veth_rq {TYPE_1__ xdp_rxq; int xdp_mem; int xdp_prog; } ;
struct veth_priv {struct veth_rq* rq; } ;
struct net_device {int real_num_rx_queues; } ;


 struct veth_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 struct veth_priv *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->real_num_rx_queues; VAR_2++)
  FUNC_1(VAR_1->rq[VAR_2].xdp_prog, ((void*)0));
 FUNC_2(VAR_0);
 for (VAR_2 = 0; VAR_2 < VAR_0->real_num_rx_queues; VAR_2++) {
  struct veth_rq *VAR_3 = &VAR_1->rq[VAR_2];

  VAR_3->xdp_rxq.mem = VAR_3->xdp_mem;
  FUNC_3(&VAR_3->xdp_rxq);
 }
}
