
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int capabilities; } ;
struct vpbe_output {int num_modes; TYPE_2__* modes; TYPE_1__ output; } ;
struct vpbe_device {int current_out_index; struct vpbe_config* cfg; } ;
struct vpbe_config {struct vpbe_output* outputs; } ;
struct v4l2_enum_dv_timings {int index; int timings; } ;
struct TYPE_4__ {scalar_t__ timings_type; int dv_timings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_0(struct vpbe_device *VAR_4,
    struct v4l2_enum_dv_timings *VAR_5)
{
 struct vpbe_config *VAR_6 = VAR_4->cfg;
 int VAR_7 = VAR_4->current_out_index;
 struct vpbe_output *VAR_8 = &VAR_6->outputs[VAR_7];
 int VAR_9 = 0;
 int VAR_10;

 if (!(VAR_8->output.capabilities & VAR_2))
  return -VAR_1;

 for (VAR_10 = 0; VAR_10 < VAR_8->num_modes; VAR_10++) {
  if (VAR_8->modes[VAR_10].timings_type == VAR_3) {
   if (VAR_9 == VAR_5->index)
    break;
   VAR_9++;
  }
 }

 if (VAR_10 == VAR_8->num_modes)
  return -VAR_0;
 VAR_5->timings = VAR_8->modes[VAR_10].dv_timings;
 return 0;
}
