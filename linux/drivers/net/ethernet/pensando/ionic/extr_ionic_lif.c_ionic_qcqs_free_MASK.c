
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ionic_lif {unsigned int nxqs; TYPE_2__* txqcqs; TYPE_2__* rxqcqs; int * adminqcq; int * notifyqcq; TYPE_1__* ionic; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct TYPE_4__* stats; } ;
struct TYPE_3__ {struct device* dev; } ;


 int FUNC_0 (struct device*,TYPE_2__*) ;
 int FUNC_1 (struct ionic_lif*,int *) ;

__attribute__((used)) static void FUNC_2(struct ionic_lif *VAR_0)
{
 struct device *VAR_1 = VAR_0->ionic->dev;
 unsigned int VAR_2;

 if (VAR_0->notifyqcq) {
  FUNC_1(VAR_0, VAR_0->notifyqcq);
  VAR_0->notifyqcq = ((void*)0);
 }

 if (VAR_0->adminqcq) {
  FUNC_1(VAR_0, VAR_0->adminqcq);
  VAR_0->adminqcq = ((void*)0);
 }

 for (VAR_2 = 0; VAR_2 < VAR_0->nxqs; VAR_2++)
  if (VAR_0->rxqcqs[VAR_2].stats)
   FUNC_0(VAR_1, VAR_0->rxqcqs[VAR_2].stats);

 FUNC_0(VAR_1, VAR_0->rxqcqs);
 VAR_0->rxqcqs = ((void*)0);

 for (VAR_2 = 0; VAR_2 < VAR_0->nxqs; VAR_2++)
  if (VAR_0->txqcqs[VAR_2].stats)
   FUNC_0(VAR_1, VAR_0->txqcqs[VAR_2].stats);

 FUNC_0(VAR_1, VAR_0->txqcqs);
 VAR_0->txqcqs = ((void*)0);
}
