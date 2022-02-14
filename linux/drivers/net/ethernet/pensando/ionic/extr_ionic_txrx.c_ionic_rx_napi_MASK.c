
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct napi_struct {int dummy; } ;
struct ionic_qcq {int dummy; } ;
struct ionic_lif {TYPE_3__* txqcqs; TYPE_1__* ionic; } ;
struct ionic_dev {int intr_ctrl; } ;
struct ionic_cq {TYPE_5__* bound_intr; TYPE_4__* bound_q; } ;
struct TYPE_10__ {int index; } ;
struct TYPE_9__ {unsigned int index; struct ionic_lif* lif; } ;
struct TYPE_8__ {TYPE_2__* qcq; } ;
struct TYPE_7__ {struct ionic_cq cq; } ;
struct TYPE_6__ {struct ionic_dev idev; } ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (struct ionic_qcq*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (struct ionic_cq*,int) ;
 int FUNC_5 (struct ionic_cq*) ;
 scalar_t__ FUNC_6 (struct napi_struct*,int) ;
 struct ionic_cq* FUNC_7 (struct napi_struct*) ;
 struct ionic_qcq* FUNC_8 (struct napi_struct*) ;

int FUNC_9(struct napi_struct *VAR_2, int VAR_3)
{
 struct ionic_qcq *VAR_4 = FUNC_8(VAR_2);
 struct ionic_cq *VAR_5 = FUNC_7(VAR_2);
 unsigned int VAR_6 = VAR_5->bound_q->index;
 struct ionic_dev *VAR_7;
 struct ionic_lif *VAR_8;
 struct ionic_cq *VAR_9;
 u32 VAR_10 = 0;
 u32 VAR_11 = 0;

 VAR_8 = VAR_5->bound_q->lif;
 VAR_7 = &VAR_8->ionic->idev;
 VAR_9 = &VAR_8->txqcqs[VAR_6].qcq->cq;

 FUNC_5(VAR_9);

 VAR_10 = FUNC_4(VAR_5, VAR_3);

 if (VAR_10)
  FUNC_3(VAR_5->bound_q);

 if (VAR_10 < VAR_3 && FUNC_6(VAR_2, VAR_10)) {
  VAR_11 |= VAR_1;
  FUNC_0(VAR_5->bound_intr);
 }

 if (VAR_10 || VAR_11) {
  VAR_11 |= VAR_0;
  FUNC_2(VAR_7->intr_ctrl, VAR_5->bound_intr->index,
       VAR_10, VAR_11);
 }

 FUNC_1(VAR_4, VAR_10);

 return VAR_10;
}
