
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* tty; } ;
struct TYPE_6__ {int cts; } ;
struct TYPE_5__ {int cts_down; int cts_up; } ;
struct slgt_info {int signals; TYPE_4__ port; int pending_bh; int event_wait_q; int status_event_wait_q; TYPE_2__ icount; int cts_chkcount; int device_name; TYPE_1__ input_signal_events; } ;
struct TYPE_7__ {int hw_stopped; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct slgt_info*,int ) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct slgt_info *VAR_6, unsigned short VAR_7)
{
 if (VAR_7 & VAR_2) {
  VAR_6->signals |= VAR_5;
  VAR_6->input_signal_events.cts_up++;
 } else {
  VAR_6->signals &= ~VAR_5;
  VAR_6->input_signal_events.cts_down++;
 }
 FUNC_0(("cts_change %s signals=%04X\n", VAR_6->device_name, VAR_6->signals));
 if ((VAR_6->cts_chkcount)++ == VAR_3) {
  FUNC_1(VAR_6, VAR_4);
  return;
 }
 VAR_6->icount.cts++;
 FUNC_3(&VAR_6->status_event_wait_q);
 FUNC_3(&VAR_6->event_wait_q);
 VAR_6->pending_bh |= VAR_0;

 if (FUNC_2(&VAR_6->port)) {
  if (VAR_6->port.tty) {
   if (VAR_6->port.tty->hw_stopped) {
    if (VAR_6->signals & VAR_5) {
      VAR_6->port.tty->hw_stopped = 0;
     VAR_6->pending_bh |= VAR_1;
     return;
    }
   } else {
    if (!(VAR_6->signals & VAR_5))
      VAR_6->port.tty->hw_stopped = 1;
   }
  }
 }
}
