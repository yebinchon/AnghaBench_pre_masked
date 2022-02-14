
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ionic_lif {unsigned int nxqs; TYPE_2__* rxqcqs; TYPE_1__* txqcqs; } ;
struct TYPE_4__ {int qcq; } ;
struct TYPE_3__ {int qcq; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ionic_lif *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nxqs; VAR_1++) {
  FUNC_0(VAR_0->txqcqs[VAR_1].qcq);
  FUNC_0(VAR_0->rxqcqs[VAR_1].qcq);
 }
}
