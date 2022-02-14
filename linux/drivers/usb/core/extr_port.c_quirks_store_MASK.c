
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_port {int quirks; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int,int *) ;
 struct usb_port* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 struct usb_port *VAR_5 = FUNC_1(VAR_1);
 u32 VAR_6;

 if (FUNC_0(VAR_3, 16, &VAR_6))
  return -VAR_0;

 VAR_5->quirks = VAR_6;
 return VAR_4;
}
