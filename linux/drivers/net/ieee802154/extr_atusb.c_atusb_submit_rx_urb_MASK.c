
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dev; } ;
struct urb {struct sk_buff* context; } ;
struct sk_buff {int data; } ;
struct atusb {int rx_urbs; struct usb_device* usb_dev; } ;
typedef struct atusb* SKB_ATUSB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (struct urb*,int *) ;
 int FUNC_5 (struct urb*,struct usb_device*,int ,int ,int ,int ,struct sk_buff*) ;
 int FUNC_6 (struct usb_device*,int) ;
 int FUNC_7 (struct urb*,int ) ;
 int FUNC_8 (struct urb*) ;

__attribute__((used)) static int FUNC_9(struct atusb *VAR_4, struct urb *VAR_5)
{
 struct usb_device *VAR_6 = VAR_4->usb_dev;
 struct sk_buff *VAR_7 = VAR_5->context;
 int VAR_8;

 if (!VAR_7) {
  VAR_7 = FUNC_0(VAR_2, VAR_1);
  if (!VAR_7) {
   FUNC_1(&VAR_6->dev,
          "atusb_in: can't allocate skb\n");
   return -VAR_0;
  }
  FUNC_3(VAR_7, VAR_2);
  SKB_ATUSB(VAR_9) = VAR_4;
 }

 FUNC_5(VAR_5, VAR_6, FUNC_6(VAR_6, 1),
     VAR_7->data, VAR_2, VAR_3, VAR_7);
 FUNC_4(VAR_5, &VAR_4->rx_urbs);

 VAR_8 = FUNC_7(VAR_5, VAR_1);
 if (VAR_8) {
  FUNC_8(VAR_5);
  FUNC_2(VAR_7);
  VAR_5->context = ((void*)0);
 }
 return VAR_8;
}
