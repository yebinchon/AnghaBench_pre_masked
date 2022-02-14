
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct urb {int transfer_flags; } ;
struct sk_buff {int len; int data; } ;
struct ath10k_usb_pipe {int max_packet_size; int urb_submitted; int usb_pipe_handle; } ;
struct ath10k_usb {int udev; struct ath10k_usb_pipe* pipes; } ;
struct ath10k_urb_context {int pipe; struct sk_buff* skb; } ;
struct ath10k_hif_sg_item {struct sk_buff* transfer_context; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ath10k*,int ,char*,int) ;
 struct ath10k_urb_context* FUNC_1 (struct ath10k_usb_pipe*) ;
 int FUNC_2 (int ,struct ath10k_urb_context*) ;
 struct ath10k_usb* FUNC_3 (struct ath10k*) ;
 int VAR_5 ;
 struct urb* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct urb*,int *) ;
 int FUNC_6 (struct urb*,int ,int ,int ,int,int ,struct ath10k_urb_context*) ;
 int FUNC_7 (struct urb*) ;
 int FUNC_8 (struct urb*,int ) ;
 int FUNC_9 (struct urb*) ;

__attribute__((used)) static int FUNC_10(struct ath10k *VAR_6, u8 VAR_7,
    struct ath10k_hif_sg_item *VAR_8, int VAR_9)
{
 struct ath10k_usb *VAR_10 = FUNC_3(VAR_6);
 struct ath10k_usb_pipe *VAR_11 = &VAR_10->pipes[VAR_7];
 struct ath10k_urb_context *VAR_12;
 struct sk_buff *VAR_13;
 struct urb *VAR_14;
 int VAR_15, VAR_16;

 for (VAR_16 = 0; VAR_16 < VAR_9; VAR_16++) {
  VAR_12 = FUNC_1(VAR_11);
  if (!VAR_12) {
   VAR_15 = -VAR_2;
   goto err;
  }

  VAR_13 = VAR_8[VAR_16].transfer_context;
  VAR_12->skb = VAR_13;

  VAR_14 = FUNC_4(0, VAR_3);
  if (!VAR_14) {
   VAR_15 = -VAR_2;
   goto err_free_urb_to_pipe;
  }

  FUNC_6(VAR_14,
      VAR_10->udev,
      VAR_11->usb_pipe_handle,
      VAR_13->data,
      VAR_13->len,
      VAR_5, VAR_12);

  if (!(VAR_13->len % VAR_11->max_packet_size)) {

   VAR_14->transfer_flags |= VAR_4;
  }

  FUNC_5(VAR_14, &VAR_11->urb_submitted);
  VAR_15 = FUNC_8(VAR_14, VAR_3);
  if (VAR_15) {
   FUNC_0(VAR_6, VAR_0,
       "usb bulk transmit failed: %d\n", VAR_15);
   FUNC_9(VAR_14);
   VAR_15 = -VAR_1;
   goto err_free_urb_to_pipe;
  }

  FUNC_7(VAR_14);
 }

 return 0;

err_free_urb_to_pipe:
 FUNC_2(VAR_12->pipe, VAR_12);
err:
 return VAR_15;
}
