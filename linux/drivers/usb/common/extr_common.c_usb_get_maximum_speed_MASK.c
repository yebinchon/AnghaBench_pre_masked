
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef enum usb_device_speed { ____Placeholder_usb_device_speed } usb_device_speed ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct device*,char*,char const**) ;
 int FUNC_2 (int ,int ,char const*) ;
 int VAR_1 ;

enum usb_device_speed FUNC_3(struct device *VAR_2)
{
 const char *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, "maximum-speed", &VAR_3);
 if (VAR_4 < 0)
  return VAR_0;

 VAR_4 = FUNC_2(VAR_1, FUNC_0(VAR_1), VAR_3);

 return (VAR_4 < 0) ? VAR_0 : VAR_4;
}
