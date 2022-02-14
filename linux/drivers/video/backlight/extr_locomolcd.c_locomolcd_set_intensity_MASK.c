
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int brightness; scalar_t__ power; scalar_t__ fb_blank; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int,int) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_1(struct backlight_device *VAR_6)
{
 int VAR_7 = VAR_6->props.brightness;

 if (VAR_6->props.power != VAR_1)
  VAR_7 = 0;
 if (VAR_6->props.fb_blank != VAR_1)
  VAR_7 = 0;
 if (VAR_5 & VAR_2)
  VAR_7 = 0;

 switch (VAR_7) {




 case 0:
  FUNC_0(VAR_4, 0, 0, 161);
  break;
 case 1:
  FUNC_0(VAR_4, 117, 0, 161);
  break;
 case 2:
  FUNC_0(VAR_4, 163, 0, 148);
  break;
 case 3:
  FUNC_0(VAR_4, 194, 0, 161);
  break;
 case 4:
  FUNC_0(VAR_4, 194, 1, 161);
  break;
 default:
  return -VAR_0;
 }
 VAR_3 = VAR_7;
 return 0;
}
