
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int dummy; } ;
struct ath6kl_usb_pipe {int urb_submitted; int ep_address; int usb_pipe_handle; int logical_pipe_num; TYPE_1__* ar_usb; } ;
struct ath6kl_urb_context {TYPE_2__* skb; } ;
struct TYPE_4__ {int data; } ;
struct TYPE_3__ {int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,...) ;
 struct ath6kl_urb_context* FUNC_1 (struct ath6kl_usb_pipe*) ;
 int FUNC_2 (struct ath6kl_urb_context*) ;
 int VAR_2 ;
 TYPE_2__* FUNC_3 (int) ;
 struct urb* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct urb*,int *) ;
 int FUNC_6 (struct urb*,int ,int ,int ,int,int ,struct ath6kl_urb_context*) ;
 int FUNC_7 (struct urb*) ;
 int FUNC_8 (struct urb*,int ) ;
 int FUNC_9 (struct urb*) ;

__attribute__((used)) static void FUNC_10(struct ath6kl_usb_pipe *VAR_3,
        int VAR_4)
{
 struct ath6kl_urb_context *VAR_5;
 struct urb *VAR_6;
 int VAR_7;

 while (1) {
  VAR_5 = FUNC_1(VAR_3);
  if (VAR_5 == ((void*)0))
   break;

  VAR_5->skb = FUNC_3(VAR_4);
  if (VAR_5->skb == ((void*)0))
   goto err_cleanup_urb;

  VAR_6 = FUNC_4(0, VAR_1);
  if (VAR_6 == ((void*)0))
   goto err_cleanup_urb;

  FUNC_6(VAR_6,
      VAR_3->ar_usb->udev,
      VAR_3->usb_pipe_handle,
      VAR_5->skb->data,
      VAR_4,
      VAR_2, VAR_5);

  FUNC_0(VAR_0,
      "ath6kl usb: bulk recv submit:%d, 0x%X (ep:0x%2.2X), %d bytes buf:0x%p\n",
      VAR_3->logical_pipe_num,
      VAR_3->usb_pipe_handle, VAR_3->ep_address,
      VAR_4, VAR_5->skb);

  FUNC_5(VAR_6, &VAR_3->urb_submitted);
  VAR_7 = FUNC_8(VAR_6, VAR_1);

  if (VAR_7) {
   FUNC_0(VAR_0,
       "ath6kl usb : usb bulk recv failed %d\n",
       VAR_7);
   FUNC_9(VAR_6);
   FUNC_7(VAR_6);
   goto err_cleanup_urb;
  }
  FUNC_7(VAR_6);
 }
 return;

err_cleanup_urb:
 FUNC_2(VAR_5);
 return;
}
