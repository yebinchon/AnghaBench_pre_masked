
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct vpbe_enc_mode_info {int timings_type; int std_id; } ;
struct vpbe_device {int current_out_index; struct vpbe_enc_mode_info current_timings; struct vpbe_config* cfg; } ;
struct vpbe_config {TYPE_1__* outputs; } ;
struct TYPE_2__ {int num_modes; struct vpbe_enc_mode_info* modes; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct vpbe_device *VAR_2,
        v4l2_std_id VAR_3)
{
 struct vpbe_config *VAR_4 = VAR_2->cfg;
 struct vpbe_enc_mode_info VAR_5;
 int VAR_6 = VAR_2->current_out_index;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_2->cfg->outputs[VAR_6].num_modes; VAR_7++) {
  VAR_5 = VAR_4->outputs[VAR_6].modes[VAR_7];
  if ((VAR_5.timings_type & VAR_1) &&
    (VAR_5.std_id & VAR_3)) {
   VAR_2->current_timings = VAR_5;
   return 0;
  }
 }

 return -VAR_0;
}
