
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qede_tx_queue {int sw_tx_cons; int tx_pbl; int index; int ndev_txq_id; } ;
struct qede_dev {int ndev; } ;
struct netdev_queue {int dummy; } ;


 int FUNC_0 (struct qede_dev*,char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct qede_dev*,int ,char*,int ,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 struct netdev_queue* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct netdev_queue*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct qede_dev*,struct qede_tx_queue*,int*) ;

__attribute__((used)) static void FUNC_7(struct qede_dev *VAR_1,
    struct qede_tx_queue *VAR_2)
{
 unsigned int VAR_3 = 0, VAR_4 = 0;
 struct netdev_queue *VAR_5;
 int VAR_6, VAR_7 = 0;

 VAR_5 = FUNC_2(VAR_1->ndev, VAR_2->ndev_txq_id);

 while (FUNC_4(&VAR_2->tx_pbl) !=
        FUNC_5(&VAR_2->tx_pbl)) {
  FUNC_1(VAR_1, VAR_0,
      "Freeing a packet on tx queue[%d]: chain_cons 0x%x, chain_prod 0x%x\n",
      VAR_2->index, FUNC_4(&VAR_2->tx_pbl),
      FUNC_5(&VAR_2->tx_pbl));

  VAR_6 = FUNC_6(VAR_1, VAR_2, &VAR_7);
  if (VAR_6) {
   FUNC_0(VAR_1,
      "Failed to free a packet on tx queue[%d]: chain_cons 0x%x, chain_prod 0x%x\n",
      VAR_2->index,
      FUNC_4(&VAR_2->tx_pbl),
      FUNC_5(&VAR_2->tx_pbl));
   break;
  }

  VAR_4 += VAR_7;
  VAR_3++;
  VAR_2->sw_tx_cons++;
 }

 FUNC_3(VAR_5, VAR_3, VAR_4);
}
