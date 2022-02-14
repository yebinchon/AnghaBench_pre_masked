
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
struct uart_omap_port {unsigned int msr_saved_flags; int ier; TYPE_4__ port; } ;
struct TYPE_7__ {int delta_msr_wait; } ;
struct TYPE_8__ {TYPE_2__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int FUNC_0 (struct uart_omap_port*,int ) ;
 int FUNC_1 (TYPE_4__*,unsigned int) ;
 int FUNC_2 (TYPE_4__*,unsigned int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static unsigned int FUNC_4(struct uart_omap_port *VAR_9)
{
 unsigned int VAR_10;

 VAR_10 = FUNC_0(VAR_9, VAR_1);
 VAR_10 |= VAR_9->msr_saved_flags;
 VAR_9->msr_saved_flags = 0;
 if ((VAR_10 & VAR_2) == 0)
  return VAR_10;

 if (VAR_10 & VAR_2 && VAR_9->ier & VAR_0 &&
     VAR_9->port.state != ((void*)0)) {
  if (VAR_10 & VAR_8)
   VAR_9->port.icount.rng++;
  if (VAR_10 & VAR_7)
   VAR_9->port.icount.dsr++;
  if (VAR_10 & VAR_6)
   FUNC_2
    (&VAR_9->port, VAR_10 & VAR_4);
  if (VAR_10 & VAR_5)
   FUNC_1
    (&VAR_9->port, VAR_10 & VAR_3);
  FUNC_3(&VAR_9->port.state->port.delta_msr_wait);
 }

 return VAR_10;
}
