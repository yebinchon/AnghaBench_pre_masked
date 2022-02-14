
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ power; scalar_t__ fb_blank; scalar_t__ brightness; } ;
struct backlight_device {int dev; TYPE_1__ props; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct backlight_device *VAR_9)
{
 int VAR_10 = 0;

 FUNC_4();


 if ((VAR_9->props.power != VAR_3) || (VAR_9->props.fb_blank != VAR_3)) {
  VAR_10 = FUNC_2(VAR_1);
  if (VAR_10 != VAR_8) {
   FUNC_1(&VAR_9->dev, "brightness off timeout\n");

   VAR_6 &= ~VAR_4;
   VAR_5 |= VAR_4;
   VAR_10 = -VAR_2;
  }
 } else
  VAR_6 |= VAR_4;


  if (FUNC_2(VAR_7) != VAR_8) {
   FUNC_1(&VAR_9->dev, "failed to set brightness\n");
   VAR_10 = -VAR_2;
   goto out;
  }
  if (FUNC_2(VAR_0 - VAR_9->props.brightness)
   != VAR_8) {
   FUNC_0(&VAR_9->dev, "set brightness failed\n");
   VAR_10 = -VAR_2;
  }





out:
 FUNC_3();

 return VAR_10;
}
