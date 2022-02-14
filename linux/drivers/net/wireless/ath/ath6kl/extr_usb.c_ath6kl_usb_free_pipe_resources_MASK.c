
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath6kl_usb_pipe {scalar_t__ urb_alloc; scalar_t__ urb_cnt; int usb_pipe_handle; int logical_pipe_num; int * ar_usb; } ;
struct ath6kl_urb_context {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,scalar_t__,scalar_t__) ;
 struct ath6kl_urb_context* FUNC_1 (struct ath6kl_usb_pipe*) ;
 int FUNC_2 (struct ath6kl_urb_context*) ;

__attribute__((used)) static void FUNC_3(struct ath6kl_usb_pipe *VAR_1)
{
 struct ath6kl_urb_context *VAR_2;

 if (VAR_1->ar_usb == ((void*)0)) {

  return;
 }

 FUNC_0(VAR_0,
     "ath6kl usb: free resources lpipe:%d"
     "hpipe:0x%X urbs:%d avail:%d\n",
     VAR_1->logical_pipe_num, VAR_1->usb_pipe_handle,
     VAR_1->urb_alloc, VAR_1->urb_cnt);

 if (VAR_1->urb_alloc != VAR_1->urb_cnt) {
  FUNC_0(VAR_0,
      "ath6kl usb: urb leak! lpipe:%d"
      "hpipe:0x%X urbs:%d avail:%d\n",
      VAR_1->logical_pipe_num, VAR_1->usb_pipe_handle,
      VAR_1->urb_alloc, VAR_1->urb_cnt);
 }

 while (1) {
  VAR_2 = FUNC_1(VAR_1);
  if (VAR_2 == ((void*)0))
   break;
  FUNC_2(VAR_2);
 }
}
