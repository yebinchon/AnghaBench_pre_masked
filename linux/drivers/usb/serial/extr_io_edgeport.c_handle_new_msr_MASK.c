
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct edgeport_port {int shadowMSR; TYPE_2__* port; } ;
struct async_icount {int rng; int dcd; int dsr; int cts; } ;
typedef int __u8 ;
struct TYPE_3__ {int delta_msr_wait; } ;
struct TYPE_4__ {TYPE_1__ port; struct async_icount icount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct edgeport_port *VAR_4, __u8 VAR_5)
{
 struct async_icount *VAR_6;

 if (VAR_5 & (VAR_1 | VAR_2 |
   VAR_3 | VAR_0)) {
  VAR_6 = &VAR_4->port->icount;


  if (VAR_5 & VAR_1)
   VAR_6->cts++;
  if (VAR_5 & VAR_2)
   VAR_6->dsr++;
  if (VAR_5 & VAR_0)
   VAR_6->dcd++;
  if (VAR_5 & VAR_3)
   VAR_6->rng++;
  FUNC_0(&VAR_4->port->port.delta_msr_wait);
 }


 VAR_4->shadowMSR = VAR_5 & 0xf0;
}
