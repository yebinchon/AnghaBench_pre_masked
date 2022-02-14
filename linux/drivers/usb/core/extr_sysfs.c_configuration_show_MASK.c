
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_host_config {char* string; } ;
struct usb_device {struct usb_host_config* actconfig; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*,char*) ;
 struct usb_device* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct usb_device*) ;
 int FUNC_3 (struct usb_device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct usb_device *VAR_4;
 struct usb_host_config *VAR_5;
 ssize_t VAR_6;

 VAR_4 = FUNC_1(VAR_1);
 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6 < 0)
  return -VAR_0;
 VAR_5 = VAR_4->actconfig;
 if (VAR_5 && VAR_5->string)
  VAR_6 = FUNC_0(VAR_3, "%s\n", VAR_5->string);
 FUNC_3(VAR_4);
 return VAR_6;
}
