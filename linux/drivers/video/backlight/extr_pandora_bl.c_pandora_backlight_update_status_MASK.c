
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pandora_private {scalar_t__ old_state; } ;
struct TYPE_2__ {int brightness; scalar_t__ power; int state; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct pandora_private* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (int ,int*,int ) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct backlight_device *VAR_13)
{
 int VAR_14 = VAR_13->props.brightness;
 struct pandora_private *VAR_15 = FUNC_0(VAR_13);
 u8 VAR_16;

 if (VAR_13->props.power != VAR_2)
  VAR_14 = 0;
 if (VAR_13->props.state & VAR_0)
  VAR_14 = 0;
 if (VAR_13->props.state & VAR_1)
  VAR_14 = 0;

 if ((unsigned int)VAR_14 > VAR_3)
  VAR_14 = VAR_3;

 if (VAR_14 == 0) {
  if (VAR_15->old_state == VAR_6)
   goto done;


  FUNC_1(VAR_9, &VAR_16, VAR_10);
  VAR_16 &= ~VAR_8;
  FUNC_2(VAR_9, VAR_16, VAR_10);
  VAR_16 &= ~VAR_7;
  FUNC_2(VAR_9, VAR_16, VAR_10);

  goto done;
 }

 if (VAR_15->old_state == VAR_6) {




  FUNC_2(VAR_11, VAR_4, VAR_12);


  FUNC_1(VAR_9, &VAR_16, VAR_10);
  VAR_16 &= ~VAR_8;
  VAR_16 |= VAR_7;
  FUNC_2(VAR_9, VAR_16, VAR_10);
  VAR_16 |= VAR_8;
  FUNC_2(VAR_9, VAR_16, VAR_10);






  FUNC_3(2000, 10000);
 }

 FUNC_2(VAR_11, VAR_5 + VAR_14, VAR_12);

done:
 if (VAR_14 != 0)
  VAR_15->old_state = 0;
 else
  VAR_15->old_state = VAR_6;

 return 0;
}
