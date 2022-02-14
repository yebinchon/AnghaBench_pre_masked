
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct usb_interface {int authorized; struct device dev; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;

void FUNC_2(struct usb_interface *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;

 if (!VAR_0->authorized) {
  FUNC_0(VAR_1);
  VAR_0->authorized = 1;
  FUNC_1(VAR_1);
 }
}
