
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mem; } ;
struct veth_rq {TYPE_1__ xdp_rxq; int xdp_prog; int xdp_mem; } ;
struct veth_priv {struct veth_rq* rq; int _xdp_prog; } ;
struct net_device {int real_num_rx_queues; } ;


 int VAR_0 ;
 struct veth_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,struct net_device*,int) ;
 int FUNC_5 (TYPE_1__*,int ,int *) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_1)
{
 struct veth_priv *VAR_2 = FUNC_0(VAR_1);
 int VAR_3, VAR_4;

 if (!FUNC_3(&VAR_2->rq[0].xdp_rxq)) {
  for (VAR_4 = 0; VAR_4 < VAR_1->real_num_rx_queues; VAR_4++) {
   struct veth_rq *VAR_5 = &VAR_2->rq[VAR_4];

   VAR_3 = FUNC_4(&VAR_5->xdp_rxq, VAR_1, VAR_4);
   if (VAR_3 < 0)
    goto err_rxq_reg;

   VAR_3 = FUNC_5(&VAR_5->xdp_rxq,
        VAR_0,
        ((void*)0));
   if (VAR_3 < 0)
    goto err_reg_mem;


   VAR_5->xdp_mem = VAR_5->xdp_rxq.mem;
  }

  VAR_3 = FUNC_2(VAR_1);
  if (VAR_3)
   goto err_rxq_reg;
 }

 for (VAR_4 = 0; VAR_4 < VAR_1->real_num_rx_queues; VAR_4++)
  FUNC_1(VAR_2->rq[VAR_4].xdp_prog, VAR_2->_xdp_prog);

 return 0;
err_reg_mem:
 FUNC_6(&VAR_2->rq[VAR_4].xdp_rxq);
err_rxq_reg:
 for (VAR_4--; VAR_4 >= 0; VAR_4--)
  FUNC_6(&VAR_2->rq[VAR_4].xdp_rxq);

 return VAR_3;
}
