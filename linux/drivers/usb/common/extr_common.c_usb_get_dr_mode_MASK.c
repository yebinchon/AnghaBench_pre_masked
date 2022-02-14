
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef enum usb_dr_mode { ____Placeholder_usb_dr_mode } usb_dr_mode ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,char const**) ;
 int FUNC_1 (char const*) ;

enum usb_dr_mode FUNC_2(struct device *VAR_1)
{
 const char *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, "dr_mode", &VAR_2);
 if (VAR_3 < 0)
  return VAR_0;

 return FUNC_1(VAR_2);
}
