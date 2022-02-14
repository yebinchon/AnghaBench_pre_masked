
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct bnad_tx_info {TYPE_3__** tcb; } ;
struct bnad {TYPE_2__* msix_table; TYPE_1__* netdev; } ;
typedef int irq_handler_t ;
struct TYPE_6__ {int intr_vector; int id; int name; } ;
struct TYPE_5__ {int vector; } ;
struct TYPE_4__ {char* name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bnad*,struct bnad_tx_info*,int) ;
 int FUNC_1 (int ,int ,int ,int ,TYPE_3__*) ;
 int FUNC_2 (int ,char*,char*,int) ;

__attribute__((used)) static int
FUNC_3(struct bnad *VAR_1, struct bnad_tx_info *VAR_2,
   u32 VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6;
 int VAR_7;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_7 = VAR_2->tcb[VAR_5]->intr_vector;
  FUNC_2(VAR_2->tcb[VAR_5]->name, "%s TXQ %d", VAR_1->netdev->name,
    VAR_3 + VAR_2->tcb[VAR_5]->id);
  VAR_6 = FUNC_1(VAR_1->msix_table[VAR_7].vector,
      (irq_handler_t)VAR_0, 0,
      VAR_2->tcb[VAR_5]->name,
      VAR_2->tcb[VAR_5]);
  if (VAR_6)
   goto err_return;
 }

 return 0;

err_return:
 if (VAR_5 > 0)
  FUNC_0(VAR_1, VAR_2, (VAR_5 - 1));
 return -1;
}
