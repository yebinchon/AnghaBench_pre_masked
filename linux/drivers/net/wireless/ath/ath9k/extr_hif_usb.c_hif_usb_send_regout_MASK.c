
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int dummy; } ;
struct sk_buff {int len; int data; } ;
struct hif_device_usb {int regout_submitted; int udev; } ;
struct cmd_buf {struct hif_device_usb* hif_dev; struct sk_buff* skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cmd_buf*) ;
 struct cmd_buf* FUNC_1 (int,int ) ;
 struct urb* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct urb*,int *) ;
 int FUNC_4 (struct urb*,int ,int ,int ,int ,int ,struct cmd_buf*,int) ;
 int FUNC_5 (struct urb*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct urb*,int ) ;
 int FUNC_8 (struct urb*) ;

__attribute__((used)) static int FUNC_9(struct hif_device_usb *VAR_4,
          struct sk_buff *VAR_5)
{
 struct urb *VAR_6;
 struct cmd_buf *VAR_7;
 int VAR_8 = 0;

 VAR_6 = FUNC_2(0, VAR_1);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1);
 if (VAR_7 == ((void*)0)) {
  FUNC_5(VAR_6);
  return -VAR_0;
 }

 VAR_7->skb = VAR_5;
 VAR_7->hif_dev = VAR_4;

 FUNC_4(VAR_6, VAR_4->udev,
    FUNC_6(VAR_4->udev, VAR_2),
    VAR_5->data, VAR_5->len,
    VAR_3, VAR_7, 1);

 FUNC_3(VAR_6, &VAR_4->regout_submitted);
 VAR_8 = FUNC_7(VAR_6, VAR_1);
 if (VAR_8) {
  FUNC_8(VAR_6);
  FUNC_0(VAR_7);
 }
 FUNC_5(VAR_6);

 return VAR_8;
}
