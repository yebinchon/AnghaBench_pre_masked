
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ionic_lif {unsigned int nxqs; TYPE_2__* rxqcqs; TYPE_1__* txqcqs; TYPE_3__* netdev; } ;
struct TYPE_6__ {int features; } ;
struct TYPE_5__ {int qcq; } ;
struct TYPE_4__ {int qcq; } ;


 int VAR_0 ;
 int FUNC_0 (struct ionic_lif*,int ) ;
 int FUNC_1 (struct ionic_lif*) ;
 int FUNC_2 (struct ionic_lif*,int ) ;
 int FUNC_3 (struct ionic_lif*,int ) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_5(struct ionic_lif *VAR_1)
{
 unsigned int VAR_2;
 int VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1->nxqs; VAR_2++) {
  VAR_3 = FUNC_3(VAR_1, VAR_1->txqcqs[VAR_2].qcq);
  if (VAR_3)
   goto err_out;

  VAR_3 = FUNC_2(VAR_1, VAR_1->rxqcqs[VAR_2].qcq);
  if (VAR_3) {
   FUNC_0(VAR_1, VAR_1->txqcqs[VAR_2].qcq);
   goto err_out;
  }
 }

 if (VAR_1->netdev->features & VAR_0)
  FUNC_1(VAR_1);

 FUNC_4(VAR_1->netdev);

 return 0;

err_out:
 while (VAR_2--) {
  FUNC_0(VAR_1, VAR_1->txqcqs[VAR_2].qcq);
  FUNC_0(VAR_1, VAR_1->rxqcqs[VAR_2].qcq);
 }

 return VAR_3;
}
