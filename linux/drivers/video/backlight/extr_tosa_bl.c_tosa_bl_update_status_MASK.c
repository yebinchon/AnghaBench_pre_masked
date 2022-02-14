
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tosa_bl_data {int dummy; } ;
struct backlight_properties {int brightness; int fb_blank; int power; } ;
struct backlight_device {struct backlight_properties props; } ;


 struct tosa_bl_data* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct tosa_bl_data*,int) ;

__attribute__((used)) static int FUNC_3(struct backlight_device *VAR_0)
{
 struct backlight_properties *VAR_1 = &VAR_0->props;
 struct tosa_bl_data *VAR_2 = FUNC_0(VAR_0);
 int VAR_3 = FUNC_1(VAR_1->power, VAR_1->fb_blank);
 int VAR_4 = VAR_1->brightness;

 if (VAR_3)
  VAR_4 = 0;

 FUNC_2(VAR_2, VAR_4);

 return 0;
}
