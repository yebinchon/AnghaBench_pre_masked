
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct led_info {int flags; int default_trigger; int name; } ;
struct i2c_client {int dev; } ;
struct TYPE_3__ {void* brightness; int brightness_set; int default_trigger; int name; } ;
struct adp8860_led {int id; int flags; int work; TYPE_1__ cdev; void* new_brightness; struct i2c_client* client; } ;
struct adp8860_bl {struct adp8860_led* led; } ;
struct adp8860_backlight_platform_data {int num_leds; int led_fade_law; int led_on_time; int bl_led_assign; struct led_info* leds; int led_fade_out; int led_fade_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,int ) ;
 void* VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct adp8860_led*) ;
 int VAR_11 ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,...) ;
 struct adp8860_backlight_platform_data* FUNC_6 (int *) ;
 struct adp8860_led* FUNC_7 (int *,int,int,int ) ;
 struct adp8860_bl* FUNC_8 (struct i2c_client*) ;
 int FUNC_9 (int *,TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_12)
{
 struct adp8860_backlight_platform_data *VAR_13 =
  FUNC_6(&VAR_12->dev);
 struct adp8860_bl *VAR_14 = FUNC_8(VAR_12);
 struct adp8860_led *VAR_15, *VAR_16;
 struct led_info *VAR_17;
 int VAR_18, VAR_19;

 VAR_15 = FUNC_7(&VAR_12->dev, VAR_13->num_leds, sizeof(*VAR_15),
    VAR_8);
 if (VAR_15 == ((void*)0))
  return -VAR_6;

 VAR_18 = FUNC_3(VAR_12, VAR_2, VAR_13->led_fade_law);
 VAR_18 = FUNC_3(VAR_12, VAR_3,
   (VAR_13->led_on_time & 0x3) << 6);
 VAR_18 |= FUNC_3(VAR_12, VAR_1,
   FUNC_0(VAR_13->led_fade_in, VAR_13->led_fade_out));

 if (VAR_18) {
  FUNC_5(&VAR_12->dev, "failed to write\n");
  return VAR_18;
 }

 for (VAR_19 = 0; VAR_19 < VAR_13->num_leds; ++VAR_19) {
  VAR_17 = &VAR_13->leds[VAR_19];
  VAR_16 = &VAR_15[VAR_19];

  VAR_16->id = VAR_17->flags & VAR_0;

  if (VAR_16->id > 7 || VAR_16->id < 1) {
   FUNC_5(&VAR_12->dev, "Invalid LED ID %d\n",
    VAR_16->id);
   VAR_18 = -VAR_5;
   goto err;
  }

  if (VAR_13->bl_led_assign & (1 << (VAR_16->id - 1))) {
   FUNC_5(&VAR_12->dev, "LED %d used by Backlight\n",
    VAR_16->id);
   VAR_18 = -VAR_4;
   goto err;
  }

  VAR_16->cdev.name = VAR_17->name;
  VAR_16->cdev.default_trigger = VAR_17->default_trigger;
  VAR_16->cdev.brightness_set = VAR_10;
  VAR_16->cdev.brightness = VAR_9;
  VAR_16->flags = VAR_17->flags >> VAR_7;
  VAR_16->client = VAR_12;
  VAR_16->new_brightness = VAR_9;
  FUNC_1(&VAR_16->work, VAR_11);

  VAR_18 = FUNC_9(&VAR_12->dev, &VAR_16->cdev);
  if (VAR_18) {
   FUNC_5(&VAR_12->dev, "failed to register LED %d\n",
    VAR_16->id);
   goto err;
  }

  VAR_18 = FUNC_2(VAR_16);
  if (VAR_18) {
   FUNC_5(&VAR_12->dev, "failed to write\n");
   VAR_19++;
   goto err;
  }
 }

 VAR_14->led = VAR_15;

 return 0;

 err:
 for (VAR_19 = VAR_19 - 1; VAR_19 >= 0; --VAR_19) {
  FUNC_10(&VAR_15[VAR_19].cdev);
  FUNC_4(&VAR_15[VAR_19].work);
 }

 return VAR_18;
}
