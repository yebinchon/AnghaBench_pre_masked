
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {int flag_disconnected; int * usb_intf; int * usb_dev; int v4l2_dev; int * ctl_write_buffer; int * ctl_read_buffer; int * ctl_write_urb; int * ctl_read_urb; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct pvr2_hdw*) ;
 int FUNC_2 (int ,char*,struct pvr2_hdw*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct pvr2_hdw *VAR_1)
{
 if (VAR_1->flag_disconnected) return;
 FUNC_2(VAR_0,"pvr2_hdw_remove_usb_stuff: hdw=%p",VAR_1);
 if (VAR_1->ctl_read_urb) {
  FUNC_4(VAR_1->ctl_read_urb);
  FUNC_3(VAR_1->ctl_read_urb);
  VAR_1->ctl_read_urb = ((void*)0);
 }
 if (VAR_1->ctl_write_urb) {
  FUNC_4(VAR_1->ctl_write_urb);
  FUNC_3(VAR_1->ctl_write_urb);
  VAR_1->ctl_write_urb = ((void*)0);
 }
 if (VAR_1->ctl_read_buffer) {
  FUNC_0(VAR_1->ctl_read_buffer);
  VAR_1->ctl_read_buffer = ((void*)0);
 }
 if (VAR_1->ctl_write_buffer) {
  FUNC_0(VAR_1->ctl_write_buffer);
  VAR_1->ctl_write_buffer = ((void*)0);
 }
 VAR_1->flag_disconnected = !0;



 FUNC_5(&VAR_1->v4l2_dev);
 VAR_1->usb_dev = ((void*)0);
 VAR_1->usb_intf = ((void*)0);
 FUNC_1(VAR_1);
}
