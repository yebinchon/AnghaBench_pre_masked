
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union hfa384x_usbin {int dummy; } hfa384x_usbin ;
struct sk_buff {int data; } ;
struct hfa384x {struct sk_buff* rx_urb_skb; int usb_work; int usb_flags; TYPE_1__* wlandev; int rx_urb; int endp_in; int usb; } ;
typedef int gfp_t ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {TYPE_2__* netdev; int hwremoved; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,int ,int ,int ,int,int ,TYPE_1__*) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(struct hfa384x *VAR_5, gfp_t VAR_6)
{
 struct sk_buff *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_0(sizeof(union hfa384x_usbin));
 if (!VAR_7) {
  VAR_8 = -VAR_1;
  goto done;
 }


 FUNC_6(&VAR_5->rx_urb, VAR_5->usb,
     VAR_5->endp_in,
     VAR_7->data, sizeof(union hfa384x_usbin),
     VAR_4, VAR_5->wlandev);

 VAR_5->rx_urb_skb = VAR_7;

 VAR_8 = -VAR_0;
 if (!VAR_5->wlandev->hwremoved &&
     !FUNC_5(VAR_3, &VAR_5->usb_flags)) {
  VAR_8 = FUNC_7(&VAR_5->rx_urb, VAR_6);


  if (VAR_8 == -VAR_2) {
   FUNC_2(VAR_5->wlandev->netdev,
        "%s rx pipe stalled: requesting reset\n",
        VAR_5->wlandev->netdev->name);
   if (!FUNC_4(VAR_3, &VAR_5->usb_flags))
    FUNC_3(&VAR_5->usb_work);
  }
 }


 if (VAR_8 != 0) {
  FUNC_1(VAR_7);
  VAR_5->rx_urb_skb = ((void*)0);
 }

done:
 return VAR_8;
}
