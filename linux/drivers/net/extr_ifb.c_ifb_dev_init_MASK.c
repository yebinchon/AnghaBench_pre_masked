
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int num_tx_queues; } ;
struct ifb_q_private {int txqnum; int ifb_tasklet; int tsync; int rsync; int tq; int rq; struct net_device* dev; } ;
struct ifb_dev_private {struct ifb_q_private* tx_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 struct ifb_q_private* FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct net_device*,int) ;
 struct ifb_dev_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,unsigned long) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_3)
{
 struct ifb_dev_private *VAR_4 = FUNC_3(VAR_3);
 struct ifb_q_private *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_3->num_tx_queues, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;
 VAR_4->tx_private = VAR_5;
 for (VAR_6 = 0; VAR_6 < VAR_3->num_tx_queues; VAR_6++,VAR_5++) {
  VAR_5->txqnum = VAR_6;
  VAR_5->dev = VAR_3;
  FUNC_0(&VAR_5->rq);
  FUNC_0(&VAR_5->tq);
  FUNC_6(&VAR_5->rsync);
  FUNC_6(&VAR_5->tsync);
  FUNC_5(&VAR_5->ifb_tasklet, VAR_2,
        (unsigned long)VAR_5);
  FUNC_4(FUNC_2(VAR_3, VAR_6));
 }
 return 0;
}
