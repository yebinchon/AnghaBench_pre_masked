
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_port {int connect_type; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;





 int FUNC_0 (char*,char*,char*) ;
 struct usb_port* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
     struct device_attribute *VAR_1, char *VAR_2)
{
 struct usb_port *VAR_3 = FUNC_1(VAR_0);
 char *VAR_4;

 switch (VAR_3->connect_type) {
 case 129:
  VAR_4 = "hotplug";
  break;
 case 130:
  VAR_4 = "hardwired";
  break;
 case 128:
  VAR_4 = "not used";
  break;
 default:
  VAR_4 = "unknown";
  break;
 }

 return FUNC_0(VAR_2, "%s\n", VAR_4);
}
