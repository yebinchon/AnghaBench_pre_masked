
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int dummy; } ;
struct sk_buff {scalar_t__ len; int data; } ;
struct hif_device_usb {int mgmt_submitted; int udev; } ;
struct cmd_buf {struct hif_device_usb* hif_dev; struct sk_buff* skb; } ;
typedef int __le16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_1 (struct cmd_buf*) ;
 struct cmd_buf* FUNC_2 (int,int ) ;
 int * FUNC_3 (struct sk_buff*,int) ;
 struct urb* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct urb*,int *) ;
 int FUNC_6 (struct urb*,int ,int ,int ,scalar_t__,int ,struct cmd_buf*) ;
 int FUNC_7 (struct urb*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct urb*,int ) ;
 int FUNC_10 (struct urb*) ;

__attribute__((used)) static int FUNC_11(struct hif_device_usb *VAR_5,
        struct sk_buff *VAR_6)
{
 struct urb *VAR_7;
 struct cmd_buf *VAR_8;
 int VAR_9 = 0;
 __le16 *VAR_10;

 VAR_7 = FUNC_4(0, VAR_2);
 if (VAR_7 == ((void*)0))
  return -VAR_1;

 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_2);
 if (VAR_8 == ((void*)0)) {
  FUNC_7(VAR_7);
  return -VAR_1;
 }

 VAR_8->skb = VAR_6;
 VAR_8->hif_dev = VAR_5;

 VAR_10 = FUNC_3(VAR_6, 4);
 *VAR_10++ = FUNC_0(VAR_6->len - 4);
 *VAR_10++ = FUNC_0(VAR_0);

 FUNC_6(VAR_7, VAR_5->udev,
    FUNC_8(VAR_5->udev, VAR_3),
    VAR_6->data, VAR_6->len,
    VAR_4, VAR_8);

 FUNC_5(VAR_7, &VAR_5->mgmt_submitted);
 VAR_9 = FUNC_9(VAR_7, VAR_2);
 if (VAR_9) {
  FUNC_10(VAR_7);
  FUNC_1(VAR_8);
 }
 FUNC_7(VAR_7);

 return VAR_9;
}
