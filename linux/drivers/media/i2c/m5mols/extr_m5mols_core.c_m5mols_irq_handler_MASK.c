
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m5mols_info {int irq_waitq; int irq_done; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 struct m5mols_info* FUNC_1 (void*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct m5mols_info *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(&VAR_3->irq_done, 1);
 FUNC_2(&VAR_3->irq_waitq);

 return VAR_0;
}
