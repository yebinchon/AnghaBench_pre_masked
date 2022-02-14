
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct backlight_device {int dummy; } ;
struct adp8870_bl {int cached_daylight_max; int current_brightness; TYPE_1__* pdata; struct i2c_client* client; } ;
struct TYPE_2__ {scalar_t__ en_ambl_sens; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct i2c_client*,int ,int ) ;
 int FUNC_1 (struct i2c_client*,int ,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 struct adp8870_bl* FUNC_3 (struct backlight_device*) ;

__attribute__((used)) static int FUNC_4(struct backlight_device *VAR_5, int VAR_6)
{
 struct adp8870_bl *VAR_7 = FUNC_3(VAR_5);
 struct i2c_client *VAR_8 = VAR_7->client;
 int VAR_9 = 0;

 if (VAR_7->pdata->en_ambl_sens) {
  if ((VAR_6 > 0) && (VAR_6 < VAR_1)) {

   VAR_9 = FUNC_0(VAR_8, VAR_2,
     VAR_3);
   if (VAR_9)
    return VAR_9;
   VAR_9 = FUNC_2(VAR_8, VAR_0, VAR_6);
   if (VAR_9)
    return VAR_9;
  } else {




   VAR_9 = FUNC_2(VAR_8, VAR_0,
      VAR_7->cached_daylight_max);
   if (VAR_9)
    return VAR_9;

   VAR_9 = FUNC_1(VAR_8, VAR_2,
      VAR_3);
   if (VAR_9)
    return VAR_9;
  }
 } else {
  VAR_9 = FUNC_2(VAR_8, VAR_0, VAR_6);
  if (VAR_9)
   return VAR_9;
 }

 if (VAR_7->current_brightness && VAR_6 == 0)
  VAR_9 = FUNC_1(VAR_8,
    VAR_2, VAR_4);
 else if (VAR_7->current_brightness == 0 && VAR_6)
  VAR_9 = FUNC_0(VAR_8,
    VAR_2, VAR_4);

 if (!VAR_9)
  VAR_7->current_brightness = VAR_6;

 return VAR_9;
}
