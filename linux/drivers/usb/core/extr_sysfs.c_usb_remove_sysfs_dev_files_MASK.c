
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct usb_device {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int *) ;
 scalar_t__ FUNC_1 (struct usb_device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;

void FUNC_5(struct usb_device *VAR_1)
{
 struct device *VAR_2 = &VAR_1->dev;

 if (FUNC_1(VAR_1))
  FUNC_2(VAR_2);

 FUNC_4(VAR_2);
 FUNC_3(VAR_2);
 FUNC_0(VAR_2, &VAR_0);
}
