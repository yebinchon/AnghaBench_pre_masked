
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qede_tx_queue {scalar_t__ sw_tx_cons; scalar_t__ sw_tx_prod; int index; } ;
struct qede_dev {int cdev; TYPE_2__* ops; } ;
struct TYPE_4__ {TYPE_1__* common; } ;
struct TYPE_3__ {int (* drain ) (int ) ;} ;


 int FUNC_0 (struct qede_dev*,char*,int ,...) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct qede_dev *VAR_1,
     struct qede_tx_queue *VAR_2, bool VAR_3)
{
 int VAR_4, VAR_5 = 1000;

 while (VAR_2->sw_tx_cons != VAR_2->sw_tx_prod) {
  if (!VAR_5) {
   if (VAR_3) {
    FUNC_0(VAR_1,
       "Tx queue[%d] is stuck, requesting MCP to drain\n",
       VAR_2->index);
    VAR_4 = VAR_1->ops->common->drain(VAR_1->cdev);
    if (VAR_4)
     return VAR_4;
    return FUNC_4(VAR_1, VAR_2, 0);
   }
   FUNC_0(VAR_1,
      "Timeout waiting for tx queue[%d]: PROD=%d, CONS=%d\n",
      VAR_2->index, VAR_2->sw_tx_prod,
      VAR_2->sw_tx_cons);
   return -VAR_0;
  }
  VAR_5--;
  FUNC_3(1000, 2000);
  FUNC_1();
 }


 FUNC_3(1000, 2000);

 return 0;
}
