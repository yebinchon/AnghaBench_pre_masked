
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct venus_core {TYPE_1__* ops; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int (* isr ) (struct venus_core*) ;} ;


 int FUNC_0 (struct venus_core*) ;

irqreturn_t FUNC_1(int VAR_0, void *VAR_1)
{
 struct venus_core *VAR_2 = VAR_1;

 return VAR_2->ops->isr(VAR_2);
}
