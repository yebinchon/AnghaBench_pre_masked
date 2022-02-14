
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct backlight_device {int dummy; } ;


 struct backlight_device* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct backlight_device*) ;
 int FUNC_2 (struct backlight_device*) ;
 int FUNC_3 (struct device*,int ,struct backlight_device*) ;
 int VAR_0 ;
 struct backlight_device* FUNC_4 (struct device*) ;

struct backlight_device *FUNC_5(struct device *VAR_1)
{
 struct backlight_device *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_4(VAR_1);
 if (FUNC_1(VAR_2))
  return VAR_2;
 VAR_3 = FUNC_3(VAR_1, VAR_0, VAR_2);
 if (VAR_3) {
  FUNC_2(VAR_2);
  return FUNC_0(VAR_3);
 }
 return VAR_2;
}
