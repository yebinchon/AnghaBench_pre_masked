
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ tty; int open_wait; } ;
struct TYPE_5__ {int dcd; } ;
struct TYPE_4__ {int dcd_down; int dcd_up; } ;
struct slgt_info {int signals; TYPE_3__ port; int pending_bh; int event_wait_q; int status_event_wait_q; int netdev; scalar_t__ netcount; TYPE_2__ icount; int dcd_chkcount; int device_name; TYPE_1__ input_signal_events; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct slgt_info*,int ) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct slgt_info *VAR_5, unsigned short VAR_6)
{
 if (VAR_6 & VAR_1) {
  VAR_5->signals |= VAR_4;
  VAR_5->input_signal_events.dcd_up++;
 } else {
  VAR_5->signals &= ~VAR_4;
  VAR_5->input_signal_events.dcd_down++;
 }
 FUNC_0(("dcd_change %s signals=%04X\n", VAR_5->device_name, VAR_5->signals));
 if ((VAR_5->dcd_chkcount)++ == VAR_2) {
  FUNC_3(VAR_5, VAR_3);
  return;
 }
 VAR_5->icount.dcd++;
 FUNC_6(&VAR_5->status_event_wait_q);
 FUNC_6(&VAR_5->event_wait_q);
 VAR_5->pending_bh |= VAR_0;

 if (FUNC_5(&VAR_5->port)) {
  if (VAR_5->signals & VAR_4)
   FUNC_6(&VAR_5->port.open_wait);
  else {
   if (VAR_5->port.tty)
    FUNC_4(VAR_5->port.tty);
  }
 }
}
