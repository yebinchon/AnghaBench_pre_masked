
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ionic_dev {int intr_ctrl; } ;
struct ionic_cq {TYPE_3__* bound_intr; int num_descs; TYPE_2__* lif; } ;
struct TYPE_6__ {int index; } ;
struct TYPE_5__ {TYPE_1__* ionic; } ;
struct TYPE_4__ {struct ionic_dev idev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct ionic_cq*,int ) ;

void FUNC_2(struct ionic_cq *VAR_1)
{
 struct ionic_dev *VAR_2 = &VAR_1->lif->ionic->idev;
 u32 VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_1->num_descs);

 if (VAR_3)
  FUNC_0(VAR_2->intr_ctrl, VAR_1->bound_intr->index,
       VAR_3, VAR_0);
}
