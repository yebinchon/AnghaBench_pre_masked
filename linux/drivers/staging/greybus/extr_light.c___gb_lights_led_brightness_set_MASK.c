
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct gb_lights_set_brightness_request {scalar_t__ brightness; int channel_id; int light_id; } ;
struct gb_connection {struct gb_bundle* bundle; } ;
struct gb_channel {int active; int lock; TYPE_2__* led; int id; TYPE_1__* light; } ;
struct gb_bundle {int dummy; } ;
typedef int req ;
struct TYPE_4__ {scalar_t__ brightness; } ;
struct TYPE_3__ {int id; } ;


 int VAR_0 ;
 int FUNC_0 (struct gb_connection*,int ,struct gb_lights_set_brightness_request*,int,int *,int ) ;
 int FUNC_1 (struct gb_bundle*) ;
 int FUNC_2 (struct gb_bundle*) ;
 struct gb_connection* FUNC_3 (struct gb_channel*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct gb_channel *VAR_1)
{
 struct gb_lights_set_brightness_request VAR_2;
 struct gb_connection *VAR_3 = FUNC_3(VAR_1);
 struct gb_bundle *VAR_4 = VAR_3->bundle;
 bool VAR_5;
 int VAR_6;

 FUNC_4(&VAR_1->lock);
 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6 < 0)
  goto out_unlock;

 VAR_5 = VAR_1->active;

 VAR_2.light_id = VAR_1->light->id;
 VAR_2.channel_id = VAR_1->id;
 VAR_2.brightness = (u8)VAR_1->led->brightness;

 VAR_6 = FUNC_0(VAR_3, VAR_0,
    &VAR_2, sizeof(VAR_2), ((void*)0), 0);
 if (VAR_6 < 0)
  goto out_pm_put;

 if (VAR_1->led->brightness)
  VAR_1->active = 1;
 else
  VAR_1->active = 0;


 if (!VAR_5 && VAR_1->active)
  goto out_unlock;





 if (VAR_5 && !VAR_1->active)
  FUNC_2(VAR_4);

out_pm_put:
 FUNC_2(VAR_4);
out_unlock:
 FUNC_5(&VAR_1->lock);

 return VAR_6;
}
