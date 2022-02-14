
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device {int dummy; } ;
struct ath10k_usb_pipe {int io_comp_queue; int io_complete_work; } ;
struct ath10k_usb {void* diag_resp_buffer; void* diag_cmd_buffer; struct ath10k_usb_pipe* pipes; struct usb_interface* interface; struct usb_device* udev; int cs_lock; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct ath10k*) ;
 int VAR_5 ;
 struct ath10k_usb* FUNC_2 (struct ath10k*) ;
 int FUNC_3 (struct ath10k*,struct usb_interface*) ;
 struct usb_device* FUNC_4 (struct usb_interface*) ;
 void* FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct usb_interface*,struct ath10k_usb*) ;

__attribute__((used)) static int FUNC_9(struct ath10k *VAR_6,
        struct usb_interface *VAR_7)
{
 struct ath10k_usb *VAR_8 = FUNC_2(VAR_6);
 struct usb_device *VAR_9 = FUNC_4(VAR_7);
 struct ath10k_usb_pipe *VAR_10;
 int VAR_11, VAR_12;

 FUNC_8(VAR_7, VAR_8);
 FUNC_7(&VAR_8->cs_lock);
 VAR_8->udev = VAR_9;
 VAR_8->interface = VAR_7;

 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
  VAR_10 = &VAR_8->pipes[VAR_12];
  FUNC_0(&VAR_10->io_complete_work,
     VAR_5);
  FUNC_6(&VAR_10->io_comp_queue);
 }

 VAR_8->diag_cmd_buffer = FUNC_5(VAR_0, VAR_4);
 if (!VAR_8->diag_cmd_buffer) {
  VAR_11 = -VAR_3;
  goto err;
 }

 VAR_8->diag_resp_buffer = FUNC_5(VAR_1,
        VAR_4);
 if (!VAR_8->diag_resp_buffer) {
  VAR_11 = -VAR_3;
  goto err;
 }

 VAR_11 = FUNC_3(VAR_6, VAR_7);
 if (VAR_11)
  goto err;

 return 0;

err:
 FUNC_1(VAR_6);
 return VAR_11;
}
