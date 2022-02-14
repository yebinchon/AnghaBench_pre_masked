
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct device {int dummy; } ;
typedef int dev_t ;


 struct device* FUNC_0 (int *,int ) ;
 struct usb_device* FUNC_1 (struct device*) ;
 int VAR_0 ;

__attribute__((used)) static struct usb_device *FUNC_2(dev_t VAR_1)
{
 struct device *VAR_2;

 VAR_2 = FUNC_0(&VAR_0, VAR_1);
 if (!VAR_2)
  return ((void*)0);
 return FUNC_1(VAR_2);
}
