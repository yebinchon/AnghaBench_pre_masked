
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {struct device* parent; } ;
struct usb_interface {scalar_t__ authorized; struct device dev; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct usb_interface*) ;

void FUNC_3(struct usb_interface *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;

 FUNC_0(VAR_1->parent);

 if (VAR_0->authorized) {
  FUNC_0(VAR_1);
  VAR_0->authorized = 0;
  FUNC_1(VAR_1);

  FUNC_2(VAR_0);
 }

 FUNC_1(VAR_1->parent);
}
