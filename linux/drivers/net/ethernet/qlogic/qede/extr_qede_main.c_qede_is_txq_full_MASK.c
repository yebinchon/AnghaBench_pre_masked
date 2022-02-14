
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qede_tx_queue {int ndev_txq_id; } ;
struct qede_dev {int ndev; } ;
struct netdev_queue {int dummy; } ;


 struct netdev_queue* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct netdev_queue*) ;

__attribute__((used)) static bool FUNC_2(struct qede_dev *VAR_0, struct qede_tx_queue *VAR_1)
{
 struct netdev_queue *VAR_2;

 VAR_2 = FUNC_0(VAR_0->ndev, VAR_1->ndev_txq_id);
 if (FUNC_1(VAR_2))
  return 1;

 return 0;
}
