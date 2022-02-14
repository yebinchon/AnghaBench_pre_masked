
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tps65217_bl {int is_enabled; int dev; int tps; } ;
struct TYPE_2__ {int brightness; int state; scalar_t__ power; scalar_t__ fb_blank; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct tps65217_bl* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct tps65217_bl*) ;
 int FUNC_4 (struct tps65217_bl*) ;
 int FUNC_5 (int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_6(struct backlight_device *VAR_4)
{
 struct tps65217_bl *VAR_5 = FUNC_0(VAR_4);
 int VAR_6;
 int VAR_7 = VAR_4->props.brightness;

 if (VAR_4->props.state & VAR_0)
  VAR_7 = 0;

 if ((VAR_4->props.power != VAR_1) ||
  (VAR_4->props.fb_blank != VAR_1))

  VAR_7 = 0;

 if (VAR_7 > 0) {
  VAR_6 = FUNC_5(VAR_5->tps,
     VAR_3,
     VAR_7 - 1,
     VAR_2);
  if (VAR_6) {
   FUNC_2(VAR_5->dev,
    "failed to set brightness level: %d\n", VAR_6);
   return VAR_6;
  }

  FUNC_1(VAR_5->dev, "brightness set to %d\n", VAR_7);

  if (!VAR_5->is_enabled)
   VAR_6 = FUNC_4(VAR_5);
 } else {
  VAR_6 = FUNC_3(VAR_5);
 }

 return VAR_6;
}
