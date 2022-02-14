
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct hif_device_usb {TYPE_1__* udev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct hif_device_usb*,struct sk_buff*) ;
 int FUNC_2 (struct hif_device_usb*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, u8 VAR_2, struct sk_buff *VAR_3)
{
 struct hif_device_usb *VAR_4 = VAR_1;
 int VAR_5 = 0;

 switch (VAR_2) {
 case 128:
  VAR_5 = FUNC_2(VAR_4, VAR_3);
  break;
 case 129:
  VAR_5 = FUNC_1(VAR_4, VAR_3);
  break;
 default:
  FUNC_0(&VAR_4->udev->dev,
   "ath9k_htc: Invalid TX pipe: %d\n", VAR_2);
  VAR_5 = -VAR_0;
  break;
 }

 return VAR_5;
}
