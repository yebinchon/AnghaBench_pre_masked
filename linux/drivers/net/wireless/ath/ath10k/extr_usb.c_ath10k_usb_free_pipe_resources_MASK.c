
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_usb_pipe {scalar_t__ urb_alloc; scalar_t__ urb_cnt; int usb_pipe_handle; int logical_pipe_num; int ar_usb; } ;
struct ath10k_urb_context {int dummy; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ,char*,int ,int ,scalar_t__,scalar_t__) ;
 struct ath10k_urb_context* FUNC_1 (struct ath10k_usb_pipe*) ;
 int FUNC_2 (struct ath10k_urb_context*) ;

__attribute__((used)) static void FUNC_3(struct ath10k *VAR_1,
        struct ath10k_usb_pipe *VAR_2)
{
 struct ath10k_urb_context *VAR_3;

 if (!VAR_2->ar_usb) {

  return;
 }

 FUNC_0(VAR_1, VAR_0,
     "usb free resources lpipe %d hpipe 0x%x urbs %d avail %d\n",
     VAR_2->logical_pipe_num, VAR_2->usb_pipe_handle,
     VAR_2->urb_alloc, VAR_2->urb_cnt);

 if (VAR_2->urb_alloc != VAR_2->urb_cnt) {
  FUNC_0(VAR_1, VAR_0,
      "usb urb leak lpipe %d hpipe 0x%x urbs %d avail %d\n",
      VAR_2->logical_pipe_num, VAR_2->usb_pipe_handle,
      VAR_2->urb_alloc, VAR_2->urb_cnt);
 }

 for (;;) {
  VAR_3 = FUNC_1(VAR_2);

  if (!VAR_3)
   break;

  FUNC_2(VAR_3);
 }
}
