
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dsr; } ;
struct TYPE_4__ {int dsr_down; int dsr_up; } ;
struct slgt_info {int pending_bh; int event_wait_q; int status_event_wait_q; TYPE_1__ icount; int dsr_chkcount; int signals; int device_name; TYPE_2__ input_signal_events; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct slgt_info*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct slgt_info *VAR_5, unsigned short VAR_6)
{
 if (VAR_6 & VAR_1) {
  VAR_5->signals |= VAR_4;
  VAR_5->input_signal_events.dsr_up++;
 } else {
  VAR_5->signals &= ~VAR_4;
  VAR_5->input_signal_events.dsr_down++;
 }
 FUNC_0(("dsr_change %s signals=%04X\n", VAR_5->device_name, VAR_5->signals));
 if ((VAR_5->dsr_chkcount)++ == VAR_2) {
  FUNC_1(VAR_5, VAR_3);
  return;
 }
 VAR_5->icount.dsr++;
 FUNC_2(&VAR_5->status_event_wait_q);
 FUNC_2(&VAR_5->event_wait_q);
 VAR_5->pending_bh |= VAR_0;
}
