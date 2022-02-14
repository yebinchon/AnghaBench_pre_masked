
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ionic_lif {int nxqs; TYPE_2__* txqcqs; TYPE_1__* rxqcqs; } ;
struct TYPE_7__ {int q; } ;
struct TYPE_6__ {TYPE_3__* qcq; } ;
struct TYPE_5__ {TYPE_3__* qcq; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct ionic_lif *VAR_0)
{
 int VAR_1, VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->nxqs; VAR_1++) {
  VAR_2 = FUNC_1(VAR_0->txqcqs[VAR_1].qcq);
  if (VAR_2)
   goto err_out;

  FUNC_2(&VAR_0->rxqcqs[VAR_1].qcq->q);
  VAR_2 = FUNC_1(VAR_0->rxqcqs[VAR_1].qcq);
  if (VAR_2) {
   FUNC_0(VAR_0->txqcqs[VAR_1].qcq);
   goto err_out;
  }
 }

 return 0;

err_out:
 while (VAR_1--) {
  FUNC_0(VAR_0->rxqcqs[VAR_1].qcq);
  FUNC_0(VAR_0->txqcqs[VAR_1].qcq);
 }

 return VAR_2;
}
