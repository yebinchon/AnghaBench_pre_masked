
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_card_rec {scalar_t__ rx_cmd_ep; int rx_data_urb_pending; int rx_cmd_urb_pending; } ;
struct urb_context {scalar_t__ ep; struct sk_buff* skb; struct mwifiex_adapter* adapter; } ;
struct urb {int actual_length; int status; scalar_t__ context; } ;
struct sk_buff {int len; } ;
struct mwifiex_adapter {int rx_pending; int work_flags; scalar_t__ card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct mwifiex_adapter*,int ,char*,...) ;
 int FUNC_4 (struct mwifiex_adapter*) ;
 int FUNC_5 (struct mwifiex_adapter*,struct sk_buff*,scalar_t__) ;
 int FUNC_6 (struct urb_context*,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*,int) ;
 scalar_t__ FUNC_11 (int ,int *) ;

__attribute__((used)) static void FUNC_12(struct urb *VAR_9)
{
 struct urb_context *VAR_10 = (struct urb_context *)VAR_9->context;
 struct mwifiex_adapter *VAR_11 = VAR_10->adapter;
 struct sk_buff *VAR_12 = VAR_10->skb;
 struct usb_card_rec *VAR_13;
 int VAR_14 = VAR_9->actual_length;
 int VAR_15, VAR_16;

 if (!VAR_11 || !VAR_11->card) {
  FUNC_7("mwifiex adapter or card structure is not valid\n");
  return;
 }

 VAR_13 = (struct usb_card_rec *)VAR_11->card;
 if (VAR_13->rx_cmd_ep == VAR_10->ep)
  FUNC_0(&VAR_13->rx_cmd_urb_pending);
 else
  FUNC_0(&VAR_13->rx_data_urb_pending);

 if (VAR_14) {
  if (VAR_9->status ||
      FUNC_11(VAR_8, &VAR_11->work_flags)) {
   FUNC_3(VAR_11, VAR_1,
        "URB status is failed: %d\n", VAR_9->status);

   if (VAR_13->rx_cmd_ep != VAR_10->ep)
    FUNC_2(VAR_12);
   goto setup_for_next;
  }
  if (VAR_12->len > VAR_14)
   FUNC_10(VAR_12, VAR_14);
  else
   FUNC_9(VAR_12, VAR_14 - VAR_12->len);

  VAR_16 = FUNC_5(VAR_11, VAR_12, VAR_10->ep);

  FUNC_3(VAR_11, VAR_4,
       "info: recv_length=%d, status=%d\n",
       VAR_14, VAR_16);
  if (VAR_16 == -VAR_0) {
   FUNC_4(VAR_11);





   if (VAR_13->rx_cmd_ep == VAR_10->ep)
    return;
  } else {
   if (VAR_16 == -1)
    FUNC_3(VAR_11, VAR_1,
         "received data processing failed!\n");


   if (VAR_13->rx_cmd_ep != VAR_10->ep)
    FUNC_2(VAR_12);
  }
 } else if (VAR_9->status) {
  if (!FUNC_11(VAR_5, &VAR_11->work_flags)) {
   FUNC_3(VAR_11, VAR_2,
        "Card is removed: %d\n", VAR_9->status);
   FUNC_8(VAR_8, &VAR_11->work_flags);
  }
  FUNC_2(VAR_12);
  return;
 } else {

  if (VAR_13->rx_cmd_ep != VAR_10->ep)
   FUNC_2(VAR_12);


 }

setup_for_next:
 if (VAR_13->rx_cmd_ep == VAR_10->ep)
  VAR_15 = VAR_6;
 else
  VAR_15 = VAR_7;

 if (VAR_13->rx_cmd_ep == VAR_10->ep) {
  FUNC_6(VAR_10, VAR_15);
 } else {
  if (FUNC_1(&VAR_11->rx_pending) <= VAR_3) {
   FUNC_6(VAR_10, VAR_15);
  } else {
   VAR_10->skb = ((void*)0);
  }
 }

 return;
}
