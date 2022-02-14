
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssd1307fb_par {int contrast; int client; } ;
struct TYPE_2__ {int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 struct ssd1307fb_par* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_1)
{
 struct ssd1307fb_par *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;
 int VAR_4 = VAR_1->props.brightness;

 VAR_2->contrast = VAR_4;

 VAR_3 = FUNC_1(VAR_2->client, VAR_0);
 if (VAR_3 < 0)
  return VAR_3;
 VAR_3 = FUNC_1(VAR_2->client, VAR_2->contrast);
 if (VAR_3 < 0)
  return VAR_3;
 return 0;
}
