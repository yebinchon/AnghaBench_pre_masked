
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iwl_priv {unsigned long blink_on; unsigned long blink_off; TYPE_3__* trans; int status; } ;
struct iwl_led_cmd {void* off; void* on; int interval; int id; } ;
struct TYPE_6__ {TYPE_2__* trans_cfg; } ;
struct TYPE_5__ {TYPE_1__* base_params; } ;
struct TYPE_4__ {int led_compensation; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (struct iwl_priv*,unsigned long,int ) ;
 int FUNC_1 (struct iwl_priv*,struct iwl_led_cmd*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct iwl_priv *VAR_5,
         unsigned long VAR_6,
         unsigned long VAR_7)
{
 struct iwl_led_cmd VAR_8 = {
  .id = VAR_2,
  .interval = VAR_1
 };
 int VAR_9;

 if (!FUNC_2(VAR_4, &VAR_5->status))
  return -VAR_0;

 if (VAR_5->blink_on == VAR_6 && VAR_5->blink_off == VAR_7)
  return 0;

 if (VAR_7 == 0) {

  VAR_6 = VAR_3;
 }

 VAR_8.on = FUNC_0(VAR_5, VAR_6,
    VAR_5->trans->trans_cfg->base_params->led_compensation);
 VAR_8.off = FUNC_0(VAR_5, VAR_7,
    VAR_5->trans->trans_cfg->base_params->led_compensation);

 VAR_9 = FUNC_1(VAR_5, &VAR_8);
 if (!VAR_9) {
  VAR_5->blink_on = VAR_6;
  VAR_5->blink_off = VAR_7;
 }
 return VAR_9;
}
