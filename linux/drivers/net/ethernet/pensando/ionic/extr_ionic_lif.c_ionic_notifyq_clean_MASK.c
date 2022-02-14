
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ionic_lif {TYPE_2__* notifyqcq; TYPE_1__* ionic; } ;
struct ionic_dev {int intr_ctrl; } ;
struct ionic_cq {TYPE_3__* bound_intr; } ;
struct TYPE_6__ {int index; } ;
struct TYPE_5__ {struct ionic_cq cq; } ;
struct TYPE_4__ {struct ionic_dev idev; } ;


 int VAR_0 ;
 int FUNC_0 (struct ionic_cq*,int,int ,int *,int *) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct ionic_lif *VAR_2, int VAR_3)
{
 struct ionic_dev *VAR_4 = &VAR_2->ionic->idev;
 struct ionic_cq *VAR_5 = &VAR_2->notifyqcq->cq;
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_3, VAR_1,
         ((void*)0), ((void*)0));
 if (VAR_6)
  FUNC_1(VAR_4->intr_ctrl, VAR_5->bound_intr->index,
       VAR_6, VAR_0);

 return VAR_6;
}
