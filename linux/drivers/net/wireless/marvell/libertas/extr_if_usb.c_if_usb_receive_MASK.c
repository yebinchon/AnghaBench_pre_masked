
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int u32 ;
struct urb {int actual_length; int status; struct if_usb_card* context; } ;
struct sk_buff {int * data; } ;
struct lbs_private {int dummy; } ;
struct if_usb_card {TYPE_1__* udev; struct lbs_private* priv; struct sk_buff* rx_skb; } ;
typedef int __le32 ;
struct TYPE_2__ {int dev; } ;





 int VAR_0 ;
 int FUNC_0 (struct if_usb_card*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *,char*,int,...) ;
 int FUNC_3 (struct lbs_private*,int) ;
 int FUNC_4 (struct lbs_private*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int *,struct sk_buff*,struct if_usb_card*,struct lbs_private*) ;
 int FUNC_7 (int,struct sk_buff*,struct if_usb_card*,struct lbs_private*) ;

__attribute__((used)) static void FUNC_8(struct urb *VAR_1)
{
 struct if_usb_card *VAR_2 = VAR_1->context;
 struct sk_buff *VAR_3 = VAR_2->rx_skb;
 struct lbs_private *VAR_4 = VAR_2->priv;
 int VAR_5 = VAR_1->actual_length;
 uint8_t *VAR_6 = ((void*)0);
 uint32_t VAR_7 = 0;
 __le32 *VAR_8 = (__le32 *)(VAR_3->data + VAR_0);
 uint32_t VAR_9;

 if (VAR_5) {
  if (VAR_1->status) {
   FUNC_2(&VAR_2->udev->dev, "RX URB failed: %d\n",
         VAR_1->status);
   FUNC_1(VAR_3);
   goto setup_for_next;
  }

  VAR_6 = VAR_3->data + VAR_0;
  VAR_7 = FUNC_5(VAR_8[0]);
  FUNC_2(&VAR_2->udev->dev,
       "Recv length = 0x%x, Recv type = 0x%X\n",
       VAR_5, VAR_7);
 } else if (VAR_1->status) {
  FUNC_1(VAR_3);
  return;
 }

 switch (VAR_7) {
 case 130:
  FUNC_7(VAR_5, VAR_3, VAR_2, VAR_4);
  break;

 case 128:
  FUNC_6(VAR_5, VAR_6, VAR_3, VAR_2, VAR_4);
  break;

 case 129:

  VAR_9 = FUNC_5(VAR_8[1]);
  FUNC_2(&VAR_2->udev->dev, "**EVENT** 0x%X\n", VAR_9);
  FUNC_1(VAR_3);


  if (VAR_9 & 0xffff0000) {
   u32 VAR_10 = (VAR_9 & 0xffff0000) >> 16;

   FUNC_4(VAR_4, VAR_10);
  } else
   FUNC_3(VAR_4, VAR_9 & 0xFF);
  break;

 default:
  FUNC_2(&VAR_2->udev->dev, "Unknown command type 0x%X\n",
        VAR_7);
  FUNC_1(VAR_3);
  break;
 }

setup_for_next:
 FUNC_0(VAR_2);
}
