
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,char*,int*) ;
 struct usb_device* FUNC_1 (struct device*) ;
 int FUNC_2 (struct usb_device*) ;
 int FUNC_3 (struct usb_device*,int) ;
 int FUNC_4 (struct usb_device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
      struct device_attribute *VAR_3,
      const char *VAR_4, size_t VAR_5)
{
 struct usb_device *VAR_6 = FUNC_1(VAR_2);
 int VAR_7, VAR_8, VAR_9;

 if (FUNC_0(VAR_4, "%d", &VAR_7) != 1 || VAR_7 < -1 || VAR_7 > 255)
  return -VAR_1;
 VAR_9 = FUNC_2(VAR_6);
 if (VAR_9 < 0)
  return -VAR_0;
 VAR_8 = FUNC_3(VAR_6, VAR_7);
 FUNC_4(VAR_6);
 return (VAR_8 < 0) ? VAR_8 : VAR_5;
}
