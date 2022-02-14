
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_configuration {int dummy; } ;
struct usb_composite_dev {int lock; struct usb_configuration* config; } ;


 int FUNC_0 (struct usb_composite_dev*,struct usb_configuration*) ;
 int FUNC_1 (struct usb_composite_dev*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct usb_composite_dev *VAR_0,
        struct usb_configuration *VAR_1)
{
 unsigned long VAR_2;

 FUNC_2(&VAR_0->lock, VAR_2);

 if (VAR_0->config == VAR_1)
  FUNC_1(VAR_0);

 FUNC_3(&VAR_0->lock, VAR_2);

 FUNC_0(VAR_0, VAR_1);
}
