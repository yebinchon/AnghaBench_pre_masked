
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_function {int dummy; } ;
struct usb_ctrlrequest {int dummy; } ;
struct f_uas {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct f_uas* FUNC_0 (struct usb_function*) ;
 int FUNC_1 (struct usb_function*,struct usb_ctrlrequest const*) ;

__attribute__((used)) static int FUNC_2(struct usb_function *VAR_2,
  const struct usb_ctrlrequest *VAR_3)
{
 struct f_uas *VAR_4 = FUNC_0(VAR_2);

 if (!(VAR_4->flags & VAR_1))
  return -VAR_0;

 return FUNC_1(VAR_2, VAR_3);
}
