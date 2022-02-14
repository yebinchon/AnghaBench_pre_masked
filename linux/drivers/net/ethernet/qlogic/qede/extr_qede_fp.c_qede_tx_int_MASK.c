
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct qede_tx_queue {int sw_tx_cons; int num_tx_buffers; int tx_pbl; int xmit_pkts; int * hw_cons_ptr; int ndev_txq_id; } ;
struct qede_dev {scalar_t__ state; int ndev; } ;
struct netdev_queue {int dummy; } ;


 int FUNC_0 (struct qede_dev*,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct qede_dev*,int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct netdev_queue*,int ) ;
 int FUNC_3 (struct netdev_queue*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 struct netdev_queue* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct netdev_queue*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_8 (struct netdev_queue*) ;
 int FUNC_9 (struct netdev_queue*) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (struct qede_dev*,struct qede_tx_queue*,int*) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 (scalar_t__) ;

__attribute__((used)) static int FUNC_16(struct qede_dev *VAR_3, struct qede_tx_queue *VAR_4)
{
 unsigned int VAR_5 = 0, VAR_6 = 0;
 struct netdev_queue *VAR_7;
 u16 VAR_8;
 int VAR_9;

 VAR_7 = FUNC_6(VAR_3->ndev, VAR_4->ndev_txq_id);

 VAR_8 = FUNC_5(*VAR_4->hw_cons_ptr);
 FUNC_4();

 while (VAR_8 != FUNC_10(&VAR_4->tx_pbl)) {
  int VAR_10 = 0;

  VAR_9 = FUNC_12(VAR_3, VAR_4, &VAR_10);
  if (VAR_9) {
   FUNC_0(VAR_3, "hw_bd_cons = %d, chain_cons=%d\n",
      VAR_8,
      FUNC_10(&VAR_4->tx_pbl));
   break;
  }

  VAR_6 += VAR_10;
  VAR_5++;
  VAR_4->sw_tx_cons = (VAR_4->sw_tx_cons + 1) % VAR_4->num_tx_buffers;
  VAR_4->xmit_pkts++;
 }

 FUNC_7(VAR_7, VAR_5, VAR_6);
 FUNC_13();

 if (FUNC_15(FUNC_8(VAR_7))) {
  FUNC_2(VAR_7, FUNC_14());

  if ((FUNC_8(VAR_7)) &&
      (VAR_3->state == VAR_2) &&
      (FUNC_11(&VAR_4->tx_pbl)
        >= (VAR_0 + 1))) {
   FUNC_9(VAR_7);
   FUNC_1(VAR_3, VAR_1,
       "Wake queue was called\n");
  }

  FUNC_3(VAR_7);
 }

 return 0;
}
