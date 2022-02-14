
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int quirks; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,char*,int*) ;
 struct usb_device* FUNC_1 (struct device*) ;
 int FUNC_2 (struct usb_device*) ;
 int FUNC_3 (struct usb_device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_3,
          struct device_attribute *VAR_4,
          const char *VAR_5, size_t VAR_6)
{
 struct usb_device *VAR_7 = FUNC_1(VAR_3);
 int VAR_8, VAR_9;

 if (FUNC_0(VAR_5, "%d", &VAR_8) != 1 || VAR_8 < 0 || VAR_8 > 1)
  return -VAR_1;
 VAR_9 = FUNC_2(VAR_7);
 if (VAR_9 < 0)
  return -VAR_0;
 if (VAR_8)
  VAR_7->quirks |= VAR_2;
 else
  VAR_7->quirks &= ~VAR_2;
 FUNC_3(VAR_7);
 return VAR_6;
}
