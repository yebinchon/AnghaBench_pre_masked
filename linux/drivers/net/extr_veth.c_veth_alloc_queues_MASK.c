
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct veth_priv {TYPE_2__* rq; } ;
struct net_device {int num_rx_queues; } ;
struct TYPE_3__ {int syncp; } ;
struct TYPE_4__ {TYPE_1__ stats; struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int,int,int ) ;
 struct veth_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2)
{
 struct veth_priv *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 VAR_3->rq = FUNC_0(VAR_2->num_rx_queues, sizeof(*VAR_3->rq), VAR_1);
 if (!VAR_3->rq)
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_2->num_rx_queues; VAR_4++) {
  VAR_3->rq[VAR_4].dev = VAR_2;
  FUNC_2(&VAR_3->rq[VAR_4].stats.syncp);
 }

 return 0;
}
