
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct veth_rq {int xdp_ring; int xdp_napi; } ;
struct veth_priv {struct veth_rq* rq; } ;
struct net_device {int real_num_rx_queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct veth_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int *,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_5)
{
 struct veth_priv *VAR_6 = FUNC_1(VAR_5);
 int VAR_7, VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_5->real_num_rx_queues; VAR_8++) {
  struct veth_rq *VAR_9 = &VAR_6->rq[VAR_8];

  VAR_7 = FUNC_4(&VAR_9->xdp_ring, VAR_2, VAR_0);
  if (VAR_7)
   goto err_xdp_ring;
 }

 for (VAR_8 = 0; VAR_8 < VAR_5->real_num_rx_queues; VAR_8++) {
  struct veth_rq *VAR_10 = &VAR_6->rq[VAR_8];

  FUNC_2(VAR_5, &VAR_10->xdp_napi, VAR_3, VAR_1);
  FUNC_0(&VAR_10->xdp_napi);
 }

 return 0;
err_xdp_ring:
 for (VAR_8--; VAR_8 >= 0; VAR_8--)
  FUNC_3(&VAR_6->rq[VAR_8].xdp_ring, VAR_4);

 return VAR_7;
}
