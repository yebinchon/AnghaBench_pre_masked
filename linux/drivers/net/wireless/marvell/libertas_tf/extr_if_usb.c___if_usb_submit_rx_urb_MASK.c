
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct if_usb_card {TYPE_1__* udev; struct sk_buff* rx_skb; int rx_urb; int ep_in; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int ,TYPE_1__*,int ,int ,int ,void (*) (struct urb*),struct if_usb_card*) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static int FUNC_11(struct if_usb_card *VAR_3,
      void (*VAR_4)(struct urb *VAR_5))
{
 struct sk_buff *VAR_6;
 int VAR_7 = -1;

 FUNC_2(VAR_1);

 VAR_6 = FUNC_0(VAR_2);
 if (!VAR_6) {
  FUNC_6("No free skb\n");
  FUNC_3(VAR_1);
  return -1;
 }

 VAR_3->rx_skb = VAR_6;


 FUNC_8(VAR_3->rx_urb, VAR_3->udev,
     FUNC_9(VAR_3->udev, VAR_3->ep_in),
     FUNC_7(VAR_6),
     VAR_2, VAR_4, VAR_3);

 FUNC_4(&VAR_3->udev->dev, "Pointer for rx_urb %p\n",
  VAR_3->rx_urb);
 VAR_7 = FUNC_10(VAR_3->rx_urb, VAR_0);
 if (VAR_7) {
  FUNC_5(&VAR_3->udev->dev,
   "Submit Rx URB failed: %d\n", VAR_7);
  FUNC_1(VAR_6);
  VAR_3->rx_skb = ((void*)0);
  FUNC_3(VAR_1);
  return -1;
 } else {
  FUNC_4(&VAR_3->udev->dev, "Submit Rx URB success\n");
  FUNC_3(VAR_1);
  return 0;
 }
}
