
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qede_ptp {int lock; TYPE_1__* ops; int * tx_skb; int work; int * clock; } ;
struct qede_dev {struct qede_ptp* ptp; int cdev; } ;
struct TYPE_2__ {int (* disable ) (int ) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct qede_ptp*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

void FUNC_7(struct qede_dev *VAR_0)
{
 struct qede_ptp *VAR_1;

 VAR_1 = VAR_0->ptp;
 if (!VAR_1)
  return;

 if (VAR_1->clock) {
  FUNC_3(VAR_1->clock);
  VAR_1->clock = ((void*)0);
 }




 FUNC_0(&VAR_1->work);
 if (VAR_1->tx_skb) {
  FUNC_1(VAR_1->tx_skb);
  VAR_1->tx_skb = ((void*)0);
 }


 FUNC_4(&VAR_1->lock);
 VAR_1->ops->disable(VAR_0->cdev);
 FUNC_5(&VAR_1->lock);

 FUNC_2(VAR_1);
 VAR_0->ptp = ((void*)0);
}
