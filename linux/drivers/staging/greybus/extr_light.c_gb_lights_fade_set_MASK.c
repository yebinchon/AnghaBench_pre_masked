
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gb_lights_set_fade_request {int fade_out; int fade_in; int channel_id; int light_id; } ;
struct gb_connection {struct gb_bundle* bundle; } ;
struct gb_channel {int fade_out; int fade_in; int id; TYPE_1__* light; scalar_t__ releasing; } ;
struct gb_bundle {int dummy; } ;
typedef int req ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gb_connection*,int ,struct gb_lights_set_fade_request*,int,int *,int ) ;
 int FUNC_1 (struct gb_bundle*) ;
 int FUNC_2 (struct gb_bundle*) ;
 struct gb_connection* FUNC_3 (struct gb_channel*) ;

__attribute__((used)) static int FUNC_4(struct gb_channel *VAR_2)
{
 struct gb_connection *VAR_3 = FUNC_3(VAR_2);
 struct gb_bundle *VAR_4 = VAR_3->bundle;
 struct gb_lights_set_fade_request VAR_5;
 int VAR_6;

 if (VAR_2->releasing)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5.light_id = VAR_2->light->id;
 VAR_5.channel_id = VAR_2->id;
 VAR_5.fade_in = VAR_2->fade_in;
 VAR_5.fade_out = VAR_2->fade_out;
 VAR_6 = FUNC_0(VAR_3, VAR_1,
    &VAR_5, sizeof(VAR_5), ((void*)0), 0);

 FUNC_2(VAR_4);

 return VAR_6;
}
