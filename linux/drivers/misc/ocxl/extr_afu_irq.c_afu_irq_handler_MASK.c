
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afu_irq {int private; int (* handler ) (int ) ;} ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct afu_irq *VAR_3 = (struct afu_irq *) VAR_2;

 FUNC_1(VAR_1);

 if (VAR_3->handler)
  return VAR_3->handler(VAR_3->private);

 return VAR_0;
}
