
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int brightness; int max_brightness; } ;
struct backlight_device {int dev; TYPE_1__ props; } ;
struct ams369fg06 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ams369fg06*,int) ;
 struct ams369fg06* FUNC_1 (struct backlight_device*) ;
 int FUNC_2 (int *,char*,...) ;

__attribute__((used)) static int FUNC_3(struct backlight_device *VAR_4)
{
 int VAR_5 = 0;
 int VAR_6 = VAR_4->props.brightness;
 struct ams369fg06 *VAR_7 = FUNC_1(VAR_4);

 if (VAR_6 < VAR_3 ||
  VAR_6 > VAR_4->props.max_brightness) {
  FUNC_2(&VAR_4->dev, "lcd brightness should be %d to %d.\n",
   VAR_3, VAR_2);
  return -VAR_0;
 }

 VAR_5 = FUNC_0(VAR_7, VAR_4->props.brightness);
 if (VAR_5) {
  FUNC_2(&VAR_4->dev, "lcd brightness setting failed.\n");
  return -VAR_1;
 }

 return VAR_5;
}
