
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int dsr; int rng; } ;
struct TYPE_9__ {TYPE_3__* state; TYPE_1__ icount; } ;
struct mxs_auart_port {int mctrl_prev; TYPE_4__ port; scalar_t__ ms_irq_enabled; } ;
struct TYPE_7__ {int delta_msr_wait; } ;
struct TYPE_8__ {TYPE_2__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static u32 FUNC_3(struct mxs_auart_port *VAR_5, u32 VAR_6)
{
 u32 VAR_7;

 VAR_7 = VAR_6 ^ VAR_5->mctrl_prev;
 VAR_5->mctrl_prev = VAR_6;
 if (VAR_7 & VAR_0 && VAR_5->ms_irq_enabled &&
      VAR_5->port.state != ((void*)0)) {
  if (VAR_7 & VAR_4)
   VAR_5->port.icount.rng++;
  if (VAR_7 & VAR_3)
   VAR_5->port.icount.dsr++;
  if (VAR_7 & VAR_1)
   FUNC_1(&VAR_5->port, VAR_6 & VAR_1);
  if (VAR_7 & VAR_2)
   FUNC_0(&VAR_5->port, VAR_6 & VAR_2);

  FUNC_2(&VAR_5->port.state->port.delta_msr_wait);
 }
 return VAR_6;
}
