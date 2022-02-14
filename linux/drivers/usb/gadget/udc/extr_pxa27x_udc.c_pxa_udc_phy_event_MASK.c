
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int dummy; } ;
struct notifier_block {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct usb_gadget*) ;
 int FUNC_1 (struct usb_gadget*) ;

__attribute__((used)) static int FUNC_2(struct notifier_block *VAR_2, unsigned long VAR_3,
        void *VAR_4)
{
 struct usb_gadget *VAR_5 = VAR_4;

 switch (VAR_3) {
 case 128:
  FUNC_0(VAR_5);
  return VAR_1;
 case 129:
  FUNC_1(VAR_5);
  return VAR_1;
 default:
  return VAR_0;
 }
}
