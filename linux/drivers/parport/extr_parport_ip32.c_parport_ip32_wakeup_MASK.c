
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parport_ip32_private {int irq_complete; } ;
struct parport {TYPE_1__* physport; } ;
struct TYPE_2__ {struct parport_ip32_private* private_data; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct parport *VAR_0)
{
 struct parport_ip32_private * const VAR_1 = VAR_0->physport->private_data;
 FUNC_0(&VAR_1->irq_complete);
}
