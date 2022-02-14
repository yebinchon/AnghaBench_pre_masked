
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cbaf {int host_name; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,char*,int ) ;
 struct usb_interface* FUNC_1 (struct device*) ;
 struct cbaf* FUNC_2 (struct usb_interface*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
      struct device_attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 ssize_t VAR_5;
 struct usb_interface *VAR_6 = FUNC_1(VAR_1);
 struct cbaf *VAR_7 = FUNC_2(VAR_6);

 VAR_5 = FUNC_0(VAR_3, "%63s", VAR_7->host_name);
 if (VAR_5 != 1)
  return -VAR_0;

 return VAR_4;
}
