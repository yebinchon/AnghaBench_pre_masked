
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ctr; } ;
struct TYPE_4__ {TYPE_1__ pc; } ;
struct parport_state {TYPE_2__ u; } ;
struct pardevice {scalar_t__ irq_func; } ;



void FUNC_0(struct pardevice *VAR_0, struct parport_state *VAR_1)
{
 VAR_1->u.pc.ctr = 0xc | (VAR_0->irq_func ? 0x10 : 0x0);
}
