
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ep {int name; } ;
struct usb_composite_dev {int dummy; } ;


 int FUNC_0 (struct usb_composite_dev*,char*,int ,int) ;
 int FUNC_1 (struct usb_ep*) ;

__attribute__((used)) static void FUNC_2(struct usb_composite_dev *VAR_0, struct usb_ep *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 < 0)
  FUNC_0(VAR_0, "disable %s --> %d\n", VAR_1->name, VAR_2);
}
