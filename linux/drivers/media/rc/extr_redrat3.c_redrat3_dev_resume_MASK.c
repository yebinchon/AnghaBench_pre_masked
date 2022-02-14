
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct redrat3_dev {int led; int wide_urb; int narrow_urb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct redrat3_dev* FUNC_1 (struct usb_interface*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct usb_interface *VAR_2)
{
 struct redrat3_dev *VAR_3 = FUNC_1(VAR_2);

 if (FUNC_2(VAR_3->narrow_urb, VAR_1))
  return -VAR_0;
 if (FUNC_2(VAR_3->wide_urb, VAR_1))
  return -VAR_0;
 FUNC_0(&VAR_3->led);
 return 0;
}
