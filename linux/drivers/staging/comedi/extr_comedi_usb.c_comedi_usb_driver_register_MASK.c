
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_driver {int dummy; } ;
struct comedi_driver {int dummy; } ;


 int FUNC_0 (struct comedi_driver*) ;
 int FUNC_1 (struct comedi_driver*) ;
 int FUNC_2 (struct usb_driver*) ;

int FUNC_3(struct comedi_driver *VAR_0,
          struct usb_driver *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 < 0) {
  FUNC_1(VAR_0);
  return VAR_2;
 }

 return 0;
}
