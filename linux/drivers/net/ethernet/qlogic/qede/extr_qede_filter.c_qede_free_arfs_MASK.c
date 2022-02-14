
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qede_dev {TYPE_2__* arfs; TYPE_1__* ndev; } ;
struct TYPE_4__ {struct TYPE_4__* arfs_fltr_bmap; } ;
struct TYPE_3__ {int * rx_cpu_rmap; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(struct qede_dev *VAR_0)
{
 if (!VAR_0->arfs)
  return;







 FUNC_1(VAR_0->arfs->arfs_fltr_bmap);
 VAR_0->arfs->arfs_fltr_bmap = ((void*)0);
 FUNC_1(VAR_0->arfs);
 VAR_0->arfs = ((void*)0);
}
