
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int dsr; int rng; } ;
struct TYPE_12__ {TYPE_4__* state; TYPE_2__ icount; TYPE_1__* ops; } ;
struct sa1100_port {unsigned int old_status; TYPE_5__ port; } ;
struct TYPE_10__ {int delta_msr_wait; } ;
struct TYPE_11__ {TYPE_3__ port; } ;
struct TYPE_8__ {unsigned int (* get_mctrl ) (TYPE_5__*) ;} ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*,unsigned int) ;
 int FUNC_2 (TYPE_5__*,unsigned int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct sa1100_port *VAR_4)
{
 unsigned int VAR_5, VAR_6;

 VAR_5 = VAR_4->port.ops->get_mctrl(&VAR_4->port);
 VAR_6 = VAR_5 ^ VAR_4->old_status;

 if (VAR_6 == 0)
  return;

 VAR_4->old_status = VAR_5;

 if (VAR_6 & VAR_3)
  VAR_4->port.icount.rng++;
 if (VAR_6 & VAR_2)
  VAR_4->port.icount.dsr++;
 if (VAR_6 & VAR_0)
  FUNC_2(&VAR_4->port, VAR_5 & VAR_0);
 if (VAR_6 & VAR_1)
  FUNC_1(&VAR_4->port, VAR_5 & VAR_1);

 FUNC_3(&VAR_4->port.state->port.delta_msr_wait);
}
