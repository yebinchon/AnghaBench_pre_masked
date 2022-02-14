
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {char* name; int max_brightness; } ;
struct gb_lights_get_channel_config_response {int max_brightness; int mode_name; int color_name; int color; int flags; int mode; } ;
struct gb_lights_get_channel_config_request {int channel_id; int light_id; } ;
struct gb_light {int has_flash; int name; int id; } ;
struct gb_connection {int dummy; } ;
struct gb_channel {void* mode_name; void* color_name; struct led_classdev* led; void* color; void* flags; void* mode; struct gb_light* light; int id; } ;
typedef int req ;
typedef int conf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gb_channel*,struct led_classdev*) ;
 int FUNC_1 (struct gb_channel*) ;
 int FUNC_2 (struct gb_channel*,struct led_classdev*) ;
 int FUNC_3 (struct gb_connection*,int ,struct gb_lights_get_channel_config_request*,int,struct gb_lights_get_channel_config_response*,int) ;
 struct led_classdev* FUNC_4 (struct gb_channel*) ;
 struct gb_connection* FUNC_5 (struct gb_light*) ;
 int FUNC_6 (struct gb_channel*) ;
 char* FUNC_7 (int ,char*,int ,void*,void*) ;
 void* FUNC_8 (int ,int ,int ) ;
 void* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct gb_light *VAR_4,
        struct gb_channel *VAR_5)
{
 struct gb_lights_get_channel_config_response VAR_6;
 struct gb_lights_get_channel_config_request VAR_7;
 struct gb_connection *VAR_8 = FUNC_5(VAR_4);
 struct led_classdev *VAR_9 = FUNC_4(VAR_5);
 char *VAR_10;
 int VAR_11;

 VAR_7.light_id = VAR_4->id;
 VAR_7.channel_id = VAR_5->id;

 VAR_11 = FUNC_3(VAR_8, VAR_1,
    &VAR_7, sizeof(VAR_7), &VAR_6, sizeof(VAR_6));
 if (VAR_11 < 0)
  return VAR_11;

 VAR_5->light = VAR_4;
 VAR_5->mode = FUNC_9(VAR_6.mode);
 VAR_5->flags = FUNC_9(VAR_6.flags);
 VAR_5->color = FUNC_9(VAR_6.color);
 VAR_5->color_name = FUNC_8(VAR_6.color_name, VAR_3, VAR_2);
 if (!VAR_5->color_name)
  return -VAR_0;
 VAR_5->mode_name = FUNC_8(VAR_6.mode_name, VAR_3, VAR_2);
 if (!VAR_5->mode_name)
  return -VAR_0;

 VAR_5->led = VAR_9;

 VAR_10 = FUNC_7(VAR_2, "%s:%s:%s", VAR_4->name,
    VAR_5->color_name, VAR_5->mode_name);
 if (!VAR_10)
  return -VAR_0;

 VAR_9->name = VAR_10;

 VAR_9->max_brightness = VAR_6.max_brightness;

 VAR_11 = FUNC_0(VAR_5, VAR_9);
 if (VAR_11 < 0)
  return VAR_11;

 FUNC_2(VAR_5, VAR_9);






 if (!FUNC_6(VAR_5))
  return VAR_11;

 VAR_4->has_flash = 1;

 return FUNC_1(VAR_5);
}
