
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct napi_struct {int dummy; } ;
struct ionic_cq {TYPE_4__* bound_intr; TYPE_3__* lif; } ;
struct ionic_qcq {struct ionic_cq cq; } ;
typedef int ionic_cq_done_cb ;
typedef int ionic_cq_cb ;
struct TYPE_8__ {int index; } ;
struct TYPE_7__ {TYPE_2__* ionic; } ;
struct TYPE_5__ {int intr_ctrl; } ;
struct TYPE_6__ {TYPE_1__ idev; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (struct ionic_qcq*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct ionic_cq*,int,int ,int ,void*) ;
 int FUNC_3 (int ,int ,int,int) ;
 scalar_t__ FUNC_4 (struct napi_struct*,int) ;
 struct ionic_qcq* FUNC_5 (struct napi_struct*) ;

int FUNC_6(struct napi_struct *VAR_2, int VAR_3, ionic_cq_cb VAR_4,
        ionic_cq_done_cb VAR_5, void *VAR_6)
{
 struct ionic_qcq *VAR_7 = FUNC_5(VAR_2);
 struct ionic_cq *VAR_8 = &VAR_7->cq;
 u32 VAR_9, VAR_10 = 0;

 VAR_9 = FUNC_2(VAR_8, VAR_3, VAR_4, VAR_5, VAR_6);

 if (VAR_9 < VAR_3 && FUNC_4(VAR_2, VAR_9)) {
  VAR_10 |= VAR_1;
  FUNC_0(VAR_8->bound_intr);
 }

 if (VAR_9 || VAR_10) {
  VAR_10 |= VAR_0;
  FUNC_3(VAR_8->lif->ionic->idev.intr_ctrl,
       VAR_8->bound_intr->index,
       VAR_9, VAR_10);
 }

 FUNC_1(VAR_7, VAR_9);

 return VAR_9;
}
