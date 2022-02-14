
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb3503 {struct device* dev; } ;
struct device {int dummy; } ;
typedef enum usb3503_mode { ____Placeholder_usb3503_mode } usb3503_mode ;


 int VAR_0 ;


 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct usb3503*) ;
 int FUNC_3 (struct usb3503*,int ) ;

__attribute__((used)) static int FUNC_4(struct usb3503 *VAR_1, enum usb3503_mode VAR_2)
{
 struct device *VAR_3 = VAR_1->dev;
 int VAR_4 = 0;

 switch (VAR_2) {
 case 129:
  VAR_4 = FUNC_2(VAR_1);
  break;

 case 128:
  FUNC_3(VAR_1, 0);
  FUNC_1(VAR_3, "switched to STANDBY mode\n");
  break;

 default:
  FUNC_0(VAR_3, "unknown mode is requested\n");
  VAR_4 = -VAR_0;
  break;
 }

 return VAR_4;
}
