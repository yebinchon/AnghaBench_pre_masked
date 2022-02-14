
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct veth_rq {int rx_notify_masked; int xdp_ring; int xdp_napi; } ;
struct veth_priv {struct veth_rq* rq; } ;
struct net_device {int real_num_rx_queues; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct veth_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 () ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_1)
{
 struct veth_priv *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->real_num_rx_queues; VAR_3++) {
  struct veth_rq *VAR_4 = &VAR_2->rq[VAR_3];

  FUNC_0(&VAR_4->xdp_napi);
  FUNC_1(&VAR_4->xdp_napi);
 }
 FUNC_5();

 for (VAR_3 = 0; VAR_3 < VAR_1->real_num_rx_queues; VAR_3++) {
  struct veth_rq *VAR_5 = &VAR_2->rq[VAR_3];

  FUNC_3(&VAR_5->xdp_napi);
  VAR_5->rx_notify_masked = 0;
  FUNC_4(&VAR_5->xdp_ring, VAR_0);
 }
}
