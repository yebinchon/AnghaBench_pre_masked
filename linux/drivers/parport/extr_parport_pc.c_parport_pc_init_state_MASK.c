
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ctr; int ecr; } ;
struct TYPE_6__ {TYPE_2__ pc; } ;
struct parport_state {TYPE_3__ u; } ;
struct pardevice {TYPE_1__* port; scalar_t__ irq_func; } ;
struct TYPE_4__ {scalar_t__ irq; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct pardevice *VAR_1,
      struct parport_state *VAR_2)
{
 VAR_2->u.pc.ctr = 0xc;
 if (VAR_1->irq_func &&
     VAR_1->port->irq != VAR_0)

  VAR_2->u.pc.ctr |= 0x10;

 VAR_2->u.pc.ecr = 0x34;

}
