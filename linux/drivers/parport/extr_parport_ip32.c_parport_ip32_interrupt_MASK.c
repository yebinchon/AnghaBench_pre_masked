
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parport_ip32_private {int irq_mode; } ;
struct parport {TYPE_1__* physport; } ;
typedef int irqreturn_t ;
typedef enum parport_ip32_irq_mode { ____Placeholder_parport_ip32_irq_mode } parport_ip32_irq_mode ;
struct TYPE_2__ {struct parport_ip32_private* private_data; } ;


 int VAR_0 ;


 int FUNC_0 (struct parport* const) ;
 int FUNC_1 (int,void*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct parport * const VAR_3 = VAR_2;
 struct parport_ip32_private * const VAR_4 = VAR_3->physport->private_data;
 enum parport_ip32_irq_mode VAR_5 = VAR_4->irq_mode;

 switch (VAR_5) {
 case 129:
  return FUNC_1(VAR_1, VAR_2);

 case 128:
  FUNC_0(VAR_3);
  break;
 }

 return VAR_0;
}
