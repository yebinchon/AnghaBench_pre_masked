
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct vpbe_enc_mode_info {int timings_type; int std_id; } ;
struct vpbe_device {int current_out_index; struct vpbe_config* cfg; struct vpbe_enc_mode_info current_timings; } ;
struct vpbe_config {TYPE_2__* outputs; } ;
struct TYPE_3__ {int capabilities; } ;
struct TYPE_4__ {TYPE_1__ output; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct vpbe_device *VAR_4, v4l2_std_id *VAR_5)
{
 struct vpbe_enc_mode_info *VAR_6 = &VAR_4->current_timings;
 struct vpbe_config *VAR_7 = VAR_4->cfg;
 int VAR_8 = VAR_4->current_out_index;

 if (!(VAR_7->outputs[VAR_8].output.capabilities & VAR_2))
  return -VAR_1;

 if (VAR_6->timings_type & VAR_3) {
  *VAR_5 = VAR_6->std_id;
  return 0;
 }

 return -VAR_0;
}
