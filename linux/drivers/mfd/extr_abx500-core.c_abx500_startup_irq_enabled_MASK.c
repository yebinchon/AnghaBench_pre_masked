
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int parent; } ;
struct abx500_ops {int (* startup_irq_enabled ) (struct device*,unsigned int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,struct abx500_ops**) ;
 int FUNC_1 (struct device*,unsigned int) ;

int FUNC_2(struct device *VAR_1, unsigned int VAR_2)
{
 struct abx500_ops *VAR_3;

 FUNC_0(VAR_1->parent, &VAR_3);
 if (VAR_3 && VAR_3->startup_irq_enabled)
  return VAR_3->startup_irq_enabled(VAR_1, VAR_2);
 else
  return -VAR_0;
}
