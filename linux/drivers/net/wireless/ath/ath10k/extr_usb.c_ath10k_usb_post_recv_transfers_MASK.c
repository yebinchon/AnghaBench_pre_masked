
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int dummy; } ;
struct ath10k_usb_pipe {int urb_submitted; int ep_address; int usb_pipe_handle; int logical_pipe_num; TYPE_1__* ar_usb; } ;
struct ath10k_urb_context {TYPE_2__* skb; } ;
struct ath10k {int dummy; } ;
struct TYPE_4__ {int data; } ;
struct TYPE_3__ {int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath10k*,int ,char*,int,...) ;
 struct ath10k_urb_context* FUNC_1 (struct ath10k_usb_pipe*) ;
 int FUNC_2 (struct ath10k_urb_context*) ;
 int VAR_3 ;
 TYPE_2__* FUNC_3 (int ) ;
 struct urb* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct urb*,int *) ;
 int FUNC_6 (struct urb*,int ,int ,int ,int ,int ,struct ath10k_urb_context*) ;
 int FUNC_7 (struct urb*) ;
 int FUNC_8 (struct urb*,int ) ;
 int FUNC_9 (struct urb*) ;

__attribute__((used)) static void FUNC_10(struct ath10k *VAR_4,
        struct ath10k_usb_pipe *VAR_5)
{
 struct ath10k_urb_context *VAR_6;
 struct urb *VAR_7;
 int VAR_8;

 for (;;) {
  VAR_6 = FUNC_1(VAR_5);
  if (!VAR_6)
   break;

  VAR_6->skb = FUNC_3(VAR_1);
  if (!VAR_6->skb)
   goto err;

  VAR_7 = FUNC_4(0, VAR_2);
  if (!VAR_7)
   goto err;

  FUNC_6(VAR_7,
      VAR_5->ar_usb->udev,
      VAR_5->usb_pipe_handle,
      VAR_6->skb->data,
      VAR_1,
      VAR_3, VAR_6);

  FUNC_0(VAR_4, VAR_0,
      "usb bulk recv submit %d 0x%x ep 0x%2.2x len %d buf 0x%pK\n",
      VAR_5->logical_pipe_num,
      VAR_5->usb_pipe_handle, VAR_5->ep_address,
      VAR_1, VAR_6->skb);

  FUNC_5(VAR_7, &VAR_5->urb_submitted);
  VAR_8 = FUNC_8(VAR_7, VAR_2);

  if (VAR_8) {
   FUNC_0(VAR_4, VAR_0,
       "usb bulk recv failed: %d\n",
       VAR_8);
   FUNC_9(VAR_7);
   FUNC_7(VAR_7);
   goto err;
  }
  FUNC_7(VAR_7);
 }

 return;

err:
 FUNC_2(VAR_6);
}
