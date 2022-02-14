
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tx_ring {struct tcb* send_head; } ;
struct tcb {scalar_t__ count; int index; } ;
struct net_device {int dummy; } ;
struct et131x_adapter {int flags; TYPE_3__* netdev; TYPE_1__* pdev; int tcb_send_qlock; struct tx_ring tx_ring; } ;
struct TYPE_5__ {int tx_errors; } ;
struct TYPE_6__ {TYPE_2__ stats; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 struct et131x_adapter* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_4)
{
 struct et131x_adapter *VAR_5 = FUNC_4(VAR_4);
 struct tx_ring *VAR_6 = &VAR_5->tx_ring;
 struct tcb *VAR_7;
 unsigned long VAR_8;


 if (!(VAR_5->flags & VAR_1))
  return;




 if (VAR_5->flags & VAR_2)
  return;


 if (VAR_5->flags & VAR_0) {
  FUNC_0(&VAR_5->pdev->dev, "hardware error - reset\n");
  return;
 }


 FUNC_5(&VAR_5->tcb_send_qlock, VAR_8);
 VAR_7 = VAR_6->send_head;
 FUNC_6(&VAR_5->tcb_send_qlock, VAR_8);

 if (VAR_7) {
  VAR_7->count++;

  if (VAR_7->count > VAR_3) {
   FUNC_1(&VAR_5->pdev->dev,
     "Send stuck - reset. tcb->WrIndex %x\n",
     VAR_7->index);

   VAR_5->netdev->stats.tx_errors++;


   FUNC_2(VAR_4);
   FUNC_3(VAR_4);
  }
 }
}
