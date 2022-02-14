
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct gb_lights_set_color_request {int color; int channel_id; int light_id; } ;
struct gb_connection {struct gb_bundle* bundle; } ;
struct gb_channel {int id; TYPE_1__* light; scalar_t__ releasing; } ;
struct gb_bundle {int dummy; } ;
typedef int req ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct gb_connection*,int ,struct gb_lights_set_color_request*,int,int *,int ) ;
 int FUNC_2 (struct gb_bundle*) ;
 int FUNC_3 (struct gb_bundle*) ;
 struct gb_connection* FUNC_4 (struct gb_channel*) ;

__attribute__((used)) static int FUNC_5(struct gb_channel *VAR_2, u32 VAR_3)
{
 struct gb_connection *VAR_4 = FUNC_4(VAR_2);
 struct gb_bundle *VAR_5 = VAR_4->bundle;
 struct gb_lights_set_color_request VAR_6;
 int VAR_7;

 if (VAR_2->releasing)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_6.light_id = VAR_2->light->id;
 VAR_6.channel_id = VAR_2->id;
 VAR_6.color = FUNC_0(VAR_3);
 VAR_7 = FUNC_1(VAR_4, VAR_1,
    &VAR_6, sizeof(VAR_6), ((void*)0), 0);

 FUNC_3(VAR_5);

 return VAR_7;
}
