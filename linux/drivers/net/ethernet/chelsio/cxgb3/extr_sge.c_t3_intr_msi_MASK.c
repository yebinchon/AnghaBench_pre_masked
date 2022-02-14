
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sge_rspq {int lock; int unhandled_irqs; int cidx; int next_holdoff; int cntxt_id; } ;
struct TYPE_5__ {TYPE_3__* qs; } ;
struct TYPE_4__ {int nports; } ;
struct adapter {TYPE_2__ sge; TYPE_1__ params; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {struct sge_rspq rspq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct adapter*,TYPE_3__*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct adapter*) ;
 int FUNC_7 (struct adapter*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_2, void *VAR_3)
{
 int VAR_4 = 0;
 struct adapter *VAR_5 = VAR_3;
 struct sge_rspq *VAR_6 = &VAR_5->sge.qs[0].rspq;

 FUNC_4(&VAR_6->lock);

 if (FUNC_3(VAR_5, &VAR_5->sge.qs[0], -1)) {
  FUNC_7(VAR_5, VAR_0, FUNC_2(VAR_6->cntxt_id) |
        FUNC_1(VAR_6->next_holdoff) | FUNC_0(VAR_6->cidx));
  VAR_4 = 1;
 }

 if (VAR_5->params.nports == 2 &&
     FUNC_3(VAR_5, &VAR_5->sge.qs[1], -1)) {
  struct sge_rspq *VAR_7 = &VAR_5->sge.qs[1].rspq;

  FUNC_7(VAR_5, VAR_0, FUNC_2(VAR_7->cntxt_id) |
        FUNC_1(VAR_7->next_holdoff) |
        FUNC_0(VAR_7->cidx));
  VAR_4 = 1;
 }

 if (!VAR_4 && FUNC_6(VAR_5) == 0)
  VAR_6->unhandled_irqs++;

 FUNC_5(&VAR_6->lock);
 return VAR_1;
}
