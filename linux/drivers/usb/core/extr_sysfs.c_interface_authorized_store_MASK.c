
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int*) ;
 struct usb_interface* FUNC_1 (struct device*) ;
 int FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (struct usb_interface*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
  struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct usb_interface *VAR_5 = FUNC_1(VAR_1);
 bool VAR_6;

 if (FUNC_0(VAR_3, &VAR_6) != 0)
  return -VAR_0;

 if (VAR_6)
  FUNC_2(VAR_5);
 else
  FUNC_3(VAR_5);

 return VAR_4;
}
