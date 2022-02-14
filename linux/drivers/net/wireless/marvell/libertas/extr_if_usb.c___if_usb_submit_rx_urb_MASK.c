
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct if_usb_card {TYPE_1__* udev; struct sk_buff* rx_skb; int rx_urb; int ep_in; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,TYPE_1__*,int ,scalar_t__,int ,void (*) (struct urb*),struct if_usb_card*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct if_usb_card *VAR_3,
      void (*VAR_4)(struct urb *VAR_5))
{
 struct sk_buff *VAR_6;
 int VAR_7 = -1;

 if (!(VAR_6 = FUNC_0(VAR_2))) {
  FUNC_4("No free skb\n");
  goto rx_ret;
 }

 VAR_3->rx_skb = VAR_6;


 FUNC_5(VAR_3->rx_urb, VAR_3->udev,
     FUNC_6(VAR_3->udev, VAR_3->ep_in),
     VAR_6->data + VAR_1,
     VAR_2, VAR_4,
     VAR_3);

 FUNC_2(&VAR_3->udev->dev, "Pointer for rx_urb %p\n", VAR_3->rx_urb);
 if ((VAR_7 = FUNC_7(VAR_3->rx_urb, VAR_0))) {
  FUNC_3(&VAR_3->udev->dev, "Submit Rx URB failed: %d\n", VAR_7);
  FUNC_1(VAR_6);
  VAR_3->rx_skb = ((void*)0);
  VAR_7 = -1;
 } else {
  FUNC_2(&VAR_3->udev->dev, "Submit Rx URB success\n");
  VAR_7 = 0;
 }

rx_ret:
 return VAR_7;
}
