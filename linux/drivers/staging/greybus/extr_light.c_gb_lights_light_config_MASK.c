
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct gb_lights_get_light_config_response {int channel_count; int name; } ;
struct gb_lights_get_light_config_request {size_t id; } ;
struct gb_lights {int connection; struct gb_light* lights; } ;
struct gb_light {size_t id; int channels_count; TYPE_1__* channels; int name; struct gb_lights* glights; } ;
struct gb_channel {int dummy; } ;
typedef int req ;
typedef int conf ;
struct TYPE_3__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct gb_light*,TYPE_1__*) ;
 int FUNC_1 (int ,int ,struct gb_lights_get_light_config_request*,int,struct gb_lights_get_light_config_response*,int) ;
 TYPE_1__* FUNC_2 (int,int,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct gb_lights *VAR_5, u8 VAR_6)
{
 struct gb_light *VAR_7 = &VAR_5->lights[VAR_6];
 struct gb_lights_get_light_config_request VAR_8;
 struct gb_lights_get_light_config_response VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_7->glights = VAR_5;
 VAR_7->id = VAR_6;

 VAR_8.id = VAR_6;

 VAR_10 = FUNC_1(VAR_5->connection,
    VAR_2,
    &VAR_8, sizeof(VAR_8), &VAR_9, sizeof(VAR_9));
 if (VAR_10 < 0)
  return VAR_10;

 if (!VAR_9.channel_count)
  return -VAR_0;
 if (!FUNC_4(VAR_9.name))
  return -VAR_0;

 VAR_7->channels_count = VAR_9.channel_count;
 VAR_7->name = FUNC_3(VAR_9.name, VAR_4, VAR_3);

 VAR_7->channels = FUNC_2(VAR_7->channels_count,
      sizeof(struct gb_channel), VAR_3);
 if (!VAR_7->channels)
  return -VAR_1;


 for (VAR_11 = 0; VAR_11 < VAR_7->channels_count; VAR_11++) {
  VAR_7->channels[VAR_11].id = VAR_11;
  VAR_10 = FUNC_0(VAR_7, &VAR_7->channels[VAR_11]);
  if (VAR_10 < 0)
   return VAR_10;
 }

 return 0;
}
