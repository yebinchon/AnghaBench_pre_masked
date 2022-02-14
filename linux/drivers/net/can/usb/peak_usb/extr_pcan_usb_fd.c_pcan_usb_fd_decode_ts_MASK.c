
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pucan_msg {int dummy; } ;
struct pcan_usb_fd_if {scalar_t__ cm_ignore_count; int time_ref; } ;
struct pcan_ufd_ts_msg {int ts_low; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct pcan_usb_fd_if *VAR_0,
      struct pucan_msg *VAR_1)
{
 struct pcan_ufd_ts_msg *VAR_2 = (struct pcan_ufd_ts_msg *)VAR_1;


 if (VAR_0->cm_ignore_count > 0)
  VAR_0->cm_ignore_count--;
 else
  FUNC_1(&VAR_0->time_ref, FUNC_0(VAR_2->ts_low));
}
