
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int dummy; } ;
struct sk_buff {int data; } ;
struct hif_device_usb {int reg_in_submitted; int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sk_buff* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct hif_device_usb*) ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sk_buff*) ;
 struct urb* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct urb*,int *) ;
 int FUNC_6 (struct urb*,int ,int ,int ,int ,int ,struct sk_buff*,int) ;
 int FUNC_7 (struct urb*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct urb*,int ) ;
 int FUNC_10 (struct urb*) ;

__attribute__((used)) static int FUNC_11(struct hif_device_usb *VAR_6)
{
 struct urb *VAR_7 = ((void*)0);
 struct sk_buff *VAR_8 = ((void*)0);
 int VAR_9, VAR_10;

 FUNC_2(&VAR_6->reg_in_submitted);

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {


  VAR_7 = FUNC_4(0, VAR_1);
  if (VAR_7 == ((void*)0)) {
   VAR_10 = -VAR_0;
   goto err_urb;
  }


  VAR_8 = FUNC_0(VAR_2, VAR_1);
  if (!VAR_8) {
   VAR_10 = -VAR_0;
   goto err_skb;
  }

  FUNC_6(VAR_7, VAR_6->udev,
      FUNC_8(VAR_6->udev,
        VAR_4),
      VAR_8->data, VAR_2,
      VAR_5, VAR_8, 1);


  FUNC_5(VAR_7, &VAR_6->reg_in_submitted);


  VAR_10 = FUNC_9(VAR_7, VAR_1);
  if (VAR_10) {
   FUNC_10(VAR_7);
   goto err_submit;
  }





  FUNC_7(VAR_7);
 }

 return 0;

err_submit:
 FUNC_3(VAR_8);
err_skb:
 FUNC_7(VAR_7);
err_urb:
 FUNC_1(VAR_6);
 return VAR_10;
}
