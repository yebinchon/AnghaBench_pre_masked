
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max8998_dev {scalar_t__ irq; scalar_t__ irq_domain; } ;


 int FUNC_0 (scalar_t__,struct max8998_dev*) ;

int FUNC_1(struct max8998_dev *VAR_0)
{
 if (VAR_0->irq && VAR_0->irq_domain)
  FUNC_0(VAR_0->irq, VAR_0);
 return 0;
}
