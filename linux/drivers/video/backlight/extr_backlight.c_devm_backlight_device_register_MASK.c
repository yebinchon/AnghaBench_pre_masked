
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct backlight_properties {int dummy; } ;
struct backlight_ops {int dummy; } ;
struct backlight_device {int dummy; } ;


 int VAR_0 ;
 struct backlight_device* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct backlight_device*) ;
 struct backlight_device* FUNC_2 (char const*,struct device*,void*,struct backlight_ops const*,struct backlight_properties const*) ;
 int VAR_2 ;
 int FUNC_3 (struct device*,struct backlight_device**) ;
 struct backlight_device** FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct backlight_device**) ;

struct backlight_device *FUNC_6(struct device *VAR_3,
 const char *VAR_4, struct device *VAR_5, void *VAR_6,
 const struct backlight_ops *VAR_7,
 const struct backlight_properties *VAR_8)
{
 struct backlight_device **VAR_9, *VAR_10;

 VAR_9 = FUNC_4(VAR_2, sizeof(*VAR_9),
   VAR_1);
 if (!VAR_9)
  return FUNC_0(-VAR_0);

 VAR_10 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7,
      VAR_8);
 if (!FUNC_1(VAR_10)) {
  *VAR_9 = VAR_10;
  FUNC_3(VAR_3, VAR_9);
 } else {
  FUNC_5(VAR_9);
 }

 return VAR_10;
}
