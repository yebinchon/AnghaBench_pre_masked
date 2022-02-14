
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct led_classdev {int dummy; } ;
struct gb_lights_blink_request {void* time_off_ms; void* time_on_ms; int channel_id; int light_id; } ;
struct gb_connection {struct gb_bundle* bundle; } ;
struct gb_channel {int active; int lock; int id; TYPE_1__* light; scalar_t__ releasing; } ;
struct gb_bundle {int dummy; } ;
typedef int req ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (unsigned long) ;
 int FUNC_1 (struct gb_connection*,int ,struct gb_lights_blink_request*,int,int *,int ) ;
 int FUNC_2 (struct gb_bundle*) ;
 int FUNC_3 (struct gb_bundle*) ;
 struct gb_channel* FUNC_4 (struct led_classdev*) ;
 struct gb_connection* FUNC_5 (struct gb_channel*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct led_classdev *VAR_3, unsigned long *VAR_4,
   unsigned long *VAR_5)
{
 struct gb_channel *VAR_6 = FUNC_4(VAR_3);
 struct gb_connection *VAR_7 = FUNC_5(VAR_6);
 struct gb_bundle *VAR_8 = VAR_7->bundle;
 struct gb_lights_blink_request VAR_9;
 bool VAR_10;
 int VAR_11;

 if (VAR_6->releasing)
  return -VAR_1;

 if (!VAR_4 || !VAR_5)
  return -VAR_0;

 FUNC_6(&VAR_6->lock);
 VAR_11 = FUNC_2(VAR_8);
 if (VAR_11 < 0)
  goto out_unlock;

 VAR_10 = VAR_6->active;

 VAR_9.light_id = VAR_6->light->id;
 VAR_9.channel_id = VAR_6->id;
 VAR_9.time_on_ms = FUNC_0(*VAR_4);
 VAR_9.time_off_ms = FUNC_0(*VAR_5);

 VAR_11 = FUNC_1(VAR_7, VAR_2, &VAR_9,
    sizeof(VAR_9), ((void*)0), 0);
 if (VAR_11 < 0)
  goto out_pm_put;

 if (*VAR_4)
  VAR_6->active = 1;
 else
  VAR_6->active = 0;


 if (!VAR_10 && VAR_6->active)
  goto out_unlock;





 if (VAR_10 && !VAR_6->active)
  FUNC_3(VAR_8);

out_pm_put:
 FUNC_3(VAR_8);
out_unlock:
 FUNC_7(&VAR_6->lock);

 return VAR_11;
}
