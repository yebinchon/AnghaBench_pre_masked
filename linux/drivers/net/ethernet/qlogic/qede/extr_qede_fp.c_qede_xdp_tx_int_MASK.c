
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_6__ {TYPE_2__* xdp; } ;
struct qede_tx_queue {scalar_t__ sw_tx_cons; int num_tx_buffers; int xmit_pkts; TYPE_3__ sw_tx_ring; int tx_pbl; int * hw_cons_ptr; } ;
struct qede_dev {TYPE_1__* pdev; } ;
struct TYPE_5__ {int page; int mapping; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct qede_dev *VAR_2, struct qede_tx_queue *VAR_3)
{
 u16 VAR_4, VAR_5;

 VAR_4 = FUNC_3(*VAR_3->hw_cons_ptr);
 FUNC_1();

 while (VAR_4 != FUNC_5(&VAR_3->tx_pbl)) {
  FUNC_4(&VAR_3->tx_pbl);
  VAR_5 = VAR_3->sw_tx_cons;

  FUNC_2(&VAR_2->pdev->dev,
          VAR_3->sw_tx_ring.xdp[VAR_5].mapping,
          VAR_1, VAR_0);
  FUNC_0(VAR_3->sw_tx_ring.xdp[VAR_5].page);

  VAR_3->sw_tx_cons = (VAR_3->sw_tx_cons + 1) % VAR_3->num_tx_buffers;
  VAR_3->xmit_pkts++;
 }
}
