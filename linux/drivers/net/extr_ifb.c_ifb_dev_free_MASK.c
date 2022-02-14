
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int num_tx_queues; } ;
struct ifb_q_private {int tq; int rq; int ifb_tasklet; } ;
struct ifb_dev_private {struct ifb_q_private* tx_private; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ifb_q_private*) ;
 struct ifb_dev_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 struct ifb_dev_private *VAR_1 = FUNC_2(VAR_0);
 struct ifb_q_private *VAR_2 = VAR_1->tx_private;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->num_tx_queues; VAR_3++,VAR_2++) {
  FUNC_3(&VAR_2->ifb_tasklet);
  FUNC_0(&VAR_2->rq);
  FUNC_0(&VAR_2->tq);
 }
 FUNC_1(VAR_1->tx_private);
}
