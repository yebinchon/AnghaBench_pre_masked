
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_function {int dummy; } ;
struct printer_dev {int dummy; } ;


 int VAR_0 ;
 struct printer_dev* FUNC_0 (struct usb_function*) ;
 int FUNC_1 (struct printer_dev*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct usb_function *VAR_1,
  unsigned VAR_2, unsigned VAR_3)
{
 struct printer_dev *VAR_4 = FUNC_0(VAR_1);
 int VAR_5 = -VAR_0;

 if (!VAR_3)
  VAR_5 = FUNC_1(VAR_4, VAR_2);

 return VAR_5;
}
