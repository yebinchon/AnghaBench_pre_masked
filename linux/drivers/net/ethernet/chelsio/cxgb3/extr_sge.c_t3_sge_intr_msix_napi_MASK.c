
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_rspq {int lock; int unhandled_irqs; } ;
struct sge_qset {int adap; struct sge_rspq rspq; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct sge_rspq*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct sge_qset *VAR_3 = VAR_2;
 struct sge_rspq *VAR_4 = &VAR_3->rspq;

 FUNC_1(&VAR_4->lock);

 if (FUNC_0(VAR_3->adap, VAR_4) < 0)
  VAR_4->unhandled_irqs++;
 FUNC_2(&VAR_4->lock);
 return VAR_0;
}
