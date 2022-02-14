
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dsr; int rng; } ;
struct TYPE_9__ {TYPE_3__* state; TYPE_1__ icount; } ;
struct imx_port {unsigned int old_status; TYPE_4__ port; } ;
struct TYPE_7__ {int delta_msr_wait; } ;
struct TYPE_8__ {TYPE_2__ port; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (struct imx_port*) ;
 int FUNC_1 (TYPE_4__*,unsigned int) ;
 int FUNC_2 (TYPE_4__*,unsigned int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct imx_port *VAR_4)
{
 unsigned int VAR_5, VAR_6;

 VAR_5 = FUNC_0(VAR_4);
 VAR_6 = VAR_5 ^ VAR_4->old_status;

 if (VAR_6 == 0)
  return;

 VAR_4->old_status = VAR_5;

 if (VAR_6 & VAR_3 && VAR_5 & VAR_3)
  VAR_4->port.icount.rng++;
 if (VAR_6 & VAR_2)
  VAR_4->port.icount.dsr++;
 if (VAR_6 & VAR_0)
  FUNC_2(&VAR_4->port, VAR_5 & VAR_0);
 if (VAR_6 & VAR_1)
  FUNC_1(&VAR_4->port, VAR_5 & VAR_1);

 FUNC_3(&VAR_4->port.state->port.delta_msr_wait);
}
