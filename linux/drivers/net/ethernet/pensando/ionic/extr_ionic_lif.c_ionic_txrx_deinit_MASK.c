
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ionic_lif {unsigned int nxqs; TYPE_2__* rxqcqs; TYPE_1__* txqcqs; } ;
struct TYPE_6__ {int q; int cq; } ;
struct TYPE_5__ {TYPE_3__* qcq; } ;
struct TYPE_4__ {TYPE_3__* qcq; } ;


 int FUNC_0 (struct ionic_lif*,TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ionic_lif *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nxqs; VAR_1++) {
  FUNC_0(VAR_0, VAR_0->txqcqs[VAR_1].qcq);
  FUNC_3(&VAR_0->txqcqs[VAR_1].qcq->cq);

  FUNC_0(VAR_0, VAR_0->rxqcqs[VAR_1].qcq);
  FUNC_2(&VAR_0->rxqcqs[VAR_1].qcq->cq);
  FUNC_1(&VAR_0->rxqcqs[VAR_1].qcq->q);
 }
}
