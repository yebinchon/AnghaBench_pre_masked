
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device {int dummy; } ;
struct ath6kl_usb_pipe {int io_comp_queue; int io_complete_work; } ;
struct ath6kl_usb {int * diag_resp_buffer; int * diag_cmd_buffer; struct ath6kl_usb_pipe* pipes; struct usb_interface* interface; struct usb_device* udev; int cs_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct ath6kl_usb*) ;
 int VAR_5 ;
 int FUNC_2 (struct ath6kl_usb*) ;
 struct usb_device* FUNC_3 (struct usb_interface*) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct usb_interface*,struct ath6kl_usb*) ;

__attribute__((used)) static struct ath6kl_usb *FUNC_8(struct usb_interface *VAR_6)
{
 struct usb_device *VAR_7 = FUNC_3(VAR_6);
 struct ath6kl_usb *VAR_8;
 struct ath6kl_usb_pipe *VAR_9;
 int VAR_10 = 0;
 int VAR_11;

 VAR_8 = FUNC_4(sizeof(struct ath6kl_usb), VAR_4);
 if (VAR_8 == ((void*)0))
  goto fail_ath6kl_usb_create;

 FUNC_7(VAR_6, VAR_8);
 FUNC_6(&(VAR_8->cs_lock));
 VAR_8->udev = VAR_7;
 VAR_8->interface = VAR_6;

 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  VAR_9 = &VAR_8->pipes[VAR_11];
  FUNC_0(&VAR_9->io_complete_work,
     VAR_5);
  FUNC_5(&VAR_9->io_comp_queue);
 }

 VAR_8->diag_cmd_buffer = FUNC_4(VAR_0, VAR_4);
 if (VAR_8->diag_cmd_buffer == ((void*)0)) {
  VAR_10 = -VAR_3;
  goto fail_ath6kl_usb_create;
 }

 VAR_8->diag_resp_buffer = FUNC_4(VAR_1,
        VAR_4);
 if (VAR_8->diag_resp_buffer == ((void*)0)) {
  VAR_10 = -VAR_3;
  goto fail_ath6kl_usb_create;
 }

 VAR_10 = FUNC_2(VAR_8);

fail_ath6kl_usb_create:
 if (VAR_10 != 0) {
  FUNC_1(VAR_8);
  VAR_8 = ((void*)0);
 }
 return VAR_8;
}
