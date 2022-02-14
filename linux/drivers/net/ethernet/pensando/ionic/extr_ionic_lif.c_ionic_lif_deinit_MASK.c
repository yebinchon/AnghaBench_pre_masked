
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ionic_lif {TYPE_1__* adminqcq; TYPE_1__* notifyqcq; int state; } ;
struct TYPE_2__ {int napi; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ionic_lif*,TYPE_1__*) ;
 int FUNC_2 (struct ionic_lif*) ;
 int FUNC_3 (struct ionic_lif*) ;
 int FUNC_4 (struct ionic_lif*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct ionic_lif *VAR_1)
{
 if (!FUNC_6(VAR_0, VAR_1->state))
  return;

 FUNC_0(VAR_0, VAR_1->state);

 FUNC_4(VAR_1);
 FUNC_3(VAR_1);

 FUNC_5(&VAR_1->adminqcq->napi);
 FUNC_1(VAR_1, VAR_1->notifyqcq);
 FUNC_1(VAR_1, VAR_1->adminqcq);

 FUNC_2(VAR_1);
}
