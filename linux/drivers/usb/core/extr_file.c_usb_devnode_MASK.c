
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct usb_class_driver {char* (* devnode ) (struct device*,int *) ;} ;
struct device {int dummy; } ;


 struct usb_class_driver* FUNC_0 (struct device*) ;
 char* FUNC_1 (struct device*,int *) ;

__attribute__((used)) static char *FUNC_2(struct device *VAR_0, umode_t *VAR_1)
{
 struct usb_class_driver *VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (!VAR_2 || !VAR_2->devnode)
  return ((void*)0);
 return VAR_2->devnode(VAR_0, VAR_1);
}
