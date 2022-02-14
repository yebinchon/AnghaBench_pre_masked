
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcf50633_bl {unsigned int brightness_limit; unsigned int brightness; int pcf; } ;
struct TYPE_2__ {int state; scalar_t__ power; unsigned int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct pcf50633_bl* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_5)
{
 struct pcf50633_bl *VAR_6 = FUNC_0(VAR_5);
 unsigned int VAR_7;


 if (VAR_5->props.state & (VAR_1 | VAR_0) ||
  VAR_5->props.power != VAR_2)
  VAR_7 = 0;
 else if (VAR_5->props.brightness < VAR_6->brightness_limit)
  VAR_7 = VAR_5->props.brightness;
 else
  VAR_7 = VAR_6->brightness_limit;


 if (VAR_6->brightness == VAR_7)
  return 0;

 if (VAR_7) {
  FUNC_1(VAR_6->pcf, VAR_4,
     VAR_7);
  if (!VAR_6->brightness)
   FUNC_1(VAR_6->pcf, VAR_3, 1);
 } else {
  FUNC_1(VAR_6->pcf, VAR_3, 0);
 }

 VAR_6->brightness = VAR_7;

 return 0;
}
