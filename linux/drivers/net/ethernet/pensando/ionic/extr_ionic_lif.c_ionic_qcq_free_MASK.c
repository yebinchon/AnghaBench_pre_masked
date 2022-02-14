
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {struct ionic_qcq* info; } ;
struct TYPE_6__ {struct ionic_qcq* info; } ;
struct TYPE_5__ {int index; } ;
struct ionic_qcq {int flags; TYPE_3__ q; TYPE_2__ cq; TYPE_1__ intr; int base_pa; int * base; int total_size; } ;
struct ionic_lif {TYPE_4__* ionic; } ;
struct device {int dummy; } ;
struct TYPE_8__ {struct device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,struct ionic_qcq*) ;
 int FUNC_1 (struct device*,int ,int *,int ) ;
 int FUNC_2 (struct ionic_lif*,int ) ;

__attribute__((used)) static void FUNC_3(struct ionic_lif *VAR_1, struct ionic_qcq *VAR_2)
{
 struct device *VAR_3 = VAR_1->ionic->dev;

 if (!VAR_2)
  return;

 FUNC_1(VAR_3, VAR_2->total_size, VAR_2->base, VAR_2->base_pa);
 VAR_2->base = ((void*)0);
 VAR_2->base_pa = 0;

 if (VAR_2->flags & VAR_0)
  FUNC_2(VAR_1, VAR_2->intr.index);

 FUNC_0(VAR_3, VAR_2->cq.info);
 VAR_2->cq.info = ((void*)0);
 FUNC_0(VAR_3, VAR_2->q.info);
 VAR_2->q.info = ((void*)0);
 FUNC_0(VAR_3, VAR_2);
}
