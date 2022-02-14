
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dev; } ;
struct urb {int actual_length; struct sk_buff* context; struct usb_device* dev; } ;
struct sk_buff {int* data; } ;
struct atusb {int hw; } ;


 struct atusb* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct atusb*,int) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,struct sk_buff*,int) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_7(struct urb *VAR_0)
{
 struct usb_device *VAR_1 = VAR_0->dev;
 struct sk_buff *VAR_2 = VAR_0->context;
 struct atusb *VAR_3 = FUNC_0(VAR_2);
 u8 VAR_4, VAR_5;

 if (!VAR_0->actual_length) {
  FUNC_2(&VAR_1->dev, "atusb_in: zero-sized URB ?\n");
  return;
 }

 VAR_4 = *VAR_2->data;

 if (VAR_0->actual_length == 1) {
  FUNC_1(VAR_3, VAR_4);
  return;
 }

 if (VAR_4 + 1 > VAR_0->actual_length - 1) {
  FUNC_2(&VAR_1->dev, "atusb_in: frame len %d+1 > URB %u-1\n",
   VAR_4, VAR_0->actual_length);
  return;
 }

 if (!FUNC_3(VAR_4)) {
  FUNC_2(&VAR_1->dev, "atusb_in: frame corrupted\n");
  return;
 }

 VAR_5 = VAR_2->data[VAR_4 + 1];
 FUNC_2(&VAR_1->dev, "atusb_in: rx len %d lqi 0x%02x\n", VAR_4, VAR_5);
 FUNC_5(VAR_2, 1);
 FUNC_6(VAR_2, VAR_4);
 FUNC_4(VAR_3->hw, VAR_2, VAR_5);
 VAR_0->context = ((void*)0);
}
