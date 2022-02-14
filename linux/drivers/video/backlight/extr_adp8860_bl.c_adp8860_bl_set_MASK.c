
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct backlight_device {int dummy; } ;
struct adp8860_bl {int cached_daylight_max; int current_brightness; scalar_t__ en_ambl_sens; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct i2c_client*,int ,int ) ;
 int FUNC_1 (struct i2c_client*,int ,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 struct adp8860_bl* FUNC_3 (struct backlight_device*) ;

__attribute__((used)) static int FUNC_4(struct backlight_device *VAR_5, int VAR_6)
{
 struct adp8860_bl *VAR_7 = FUNC_3(VAR_5);
 struct i2c_client *VAR_8 = VAR_7->client;
 int VAR_9 = 0;

 if (VAR_7->en_ambl_sens) {
  if ((VAR_6 > 0) && (VAR_6 < VAR_1)) {

   VAR_9 |= FUNC_0(VAR_8, VAR_2,
     VAR_3);
   VAR_9 |= FUNC_2(VAR_8, VAR_0, VAR_6);
  } else {




   VAR_9 |= FUNC_2(VAR_8, VAR_0,
      VAR_7->cached_daylight_max);
   VAR_9 |= FUNC_1(VAR_8, VAR_2,
      VAR_3);
  }
 } else
  VAR_9 |= FUNC_2(VAR_8, VAR_0, VAR_6);

 if (VAR_7->current_brightness && VAR_6 == 0)
  VAR_9 |= FUNC_1(VAR_8,
    VAR_2, VAR_4);
 else if (VAR_7->current_brightness == 0 && VAR_6)
  VAR_9 |= FUNC_0(VAR_8,
    VAR_2, VAR_4);

 if (!VAR_9)
  VAR_7->current_brightness = VAR_6;

 return VAR_9;
}
