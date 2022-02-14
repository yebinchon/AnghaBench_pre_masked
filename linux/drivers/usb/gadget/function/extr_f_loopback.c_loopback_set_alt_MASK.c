
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_function {TYPE_1__* config; } ;
struct usb_composite_dev {int dummy; } ;
struct f_loopback {int dummy; } ;
struct TYPE_2__ {struct usb_composite_dev* cdev; } ;


 int FUNC_0 (struct f_loopback*) ;
 int FUNC_1 (struct usb_composite_dev*,struct f_loopback*) ;
 struct f_loopback* FUNC_2 (struct usb_function*) ;

__attribute__((used)) static int FUNC_3(struct usb_function *VAR_0,
  unsigned VAR_1, unsigned VAR_2)
{
 struct f_loopback *VAR_3 = FUNC_2(VAR_0);
 struct usb_composite_dev *VAR_4 = VAR_0->config->cdev;


 FUNC_0(VAR_3);
 return FUNC_1(VAR_4, VAR_3);
}
