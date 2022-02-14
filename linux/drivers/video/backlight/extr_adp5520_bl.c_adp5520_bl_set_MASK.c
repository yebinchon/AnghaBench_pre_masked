
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct backlight_device {int dummy; } ;
struct adp5520_bl {int cached_daylight_max; int current_brightness; TYPE_1__* pdata; struct device* master; } ;
struct TYPE_2__ {scalar_t__ en_ambl_sens; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,int ,int ) ;
 int FUNC_1 (struct device*,int ,int ) ;
 int FUNC_2 (struct device*,int ,int) ;
 struct adp5520_bl* FUNC_3 (struct backlight_device*) ;

__attribute__((used)) static int FUNC_4(struct backlight_device *VAR_6, int VAR_7)
{
 struct adp5520_bl *VAR_8 = FUNC_3(VAR_6);
 struct device *VAR_9 = VAR_8->master;
 int VAR_10 = 0;

 if (VAR_8->pdata->en_ambl_sens) {
  if ((VAR_7 > 0) && (VAR_7 < VAR_0)) {

   VAR_10 |= FUNC_0(VAR_9, VAR_2,
     VAR_1);
   VAR_10 |= FUNC_2(VAR_9, VAR_3,
     VAR_7);
  } else {




   VAR_10 |= FUNC_2(VAR_9, VAR_3,
      VAR_8->cached_daylight_max);
   VAR_10 |= FUNC_1(VAR_9, VAR_2,
      VAR_1);
  }
 } else {
  VAR_10 |= FUNC_2(VAR_9, VAR_3, VAR_7);
 }

 if (VAR_8->current_brightness && VAR_7 == 0)
  VAR_10 |= FUNC_1(VAR_9,
    VAR_5, VAR_4);
 else if (VAR_8->current_brightness == 0 && VAR_7)
  VAR_10 |= FUNC_0(VAR_9,
    VAR_5, VAR_4);

 if (!VAR_10)
  VAR_8->current_brightness = VAR_7;

 return VAR_10;
}
