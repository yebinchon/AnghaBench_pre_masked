
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_rspq {int lock; int cidx; int next_holdoff; int cntxt_id; int unhandled_irqs; } ;
struct sge_qset {struct sge_rspq rspq; struct adapter* adap; } ;
struct adapter {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct adapter*,struct sge_qset*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct adapter*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_2, void *VAR_3)
{
 struct sge_qset *VAR_4 = VAR_3;
 struct adapter *VAR_5 = VAR_4->adap;
 struct sge_rspq *VAR_6 = &VAR_4->rspq;

 FUNC_4(&VAR_6->lock);
 if (FUNC_3(VAR_5, VAR_4, -1) == 0)
  VAR_6->unhandled_irqs++;
 FUNC_6(VAR_5, VAR_0, FUNC_2(VAR_6->cntxt_id) |
       FUNC_1(VAR_6->next_holdoff) | FUNC_0(VAR_6->cidx));
 FUNC_5(&VAR_6->lock);
 return VAR_1;
}
