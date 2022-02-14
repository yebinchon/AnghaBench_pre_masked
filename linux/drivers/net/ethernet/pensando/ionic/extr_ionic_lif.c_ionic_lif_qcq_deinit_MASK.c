
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vector; int index; } ;
struct ionic_qcq {int flags; int napi; TYPE_1__ intr; } ;
struct ionic_lif {TYPE_2__* ionic; } ;
struct ionic_dev {int intr_ctrl; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device* dev; struct ionic_dev idev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,int ,int *) ;
 int FUNC_1 (struct ionic_qcq*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ionic_lif *VAR_3, struct ionic_qcq *VAR_4)
{
 struct ionic_dev *VAR_5 = &VAR_3->ionic->idev;
 struct device *VAR_6 = VAR_3->ionic->dev;

 if (!VAR_4)
  return;

 FUNC_1(VAR_4);

 if (!(VAR_4->flags & VAR_1))
  return;

 if (VAR_4->flags & VAR_2) {
  FUNC_2(VAR_5->intr_ctrl, VAR_4->intr.index,
    VAR_0);
  FUNC_0(VAR_6, VAR_4->intr.vector, &VAR_4->napi);
  FUNC_3(&VAR_4->napi);
 }

 VAR_4->flags &= ~VAR_1;
}
