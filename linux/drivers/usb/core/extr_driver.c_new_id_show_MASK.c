
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_driver {int dynids; } ;
struct device_driver {int dummy; } ;
typedef int ssize_t ;


 struct usb_driver* FUNC_0 (struct device_driver*) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device_driver *VAR_0, char *VAR_1)
{
 struct usb_driver *VAR_2 = FUNC_0(VAR_0);

 return FUNC_1(&VAR_2->dynids, VAR_1);
}
