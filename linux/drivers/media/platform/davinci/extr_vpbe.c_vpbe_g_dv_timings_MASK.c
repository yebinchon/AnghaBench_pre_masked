
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_dv_timings {int dummy; } ;
struct TYPE_6__ {int timings_type; struct v4l2_dv_timings dv_timings; } ;
struct vpbe_device {int current_out_index; TYPE_3__ current_timings; struct vpbe_config* cfg; } ;
struct vpbe_config {TYPE_2__* outputs; } ;
struct TYPE_4__ {int capabilities; } ;
struct TYPE_5__ {TYPE_1__ output; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct vpbe_device *VAR_4,
       struct v4l2_dv_timings *VAR_5)
{
 struct vpbe_config *VAR_6 = VAR_4->cfg;
 int VAR_7 = VAR_4->current_out_index;

 if (!(VAR_6->outputs[VAR_7].output.capabilities &
  VAR_2))
  return -VAR_1;

 if (VAR_4->current_timings.timings_type &
   VAR_3) {
  *VAR_5 = VAR_4->current_timings.dv_timings;
  return 0;
 }

 return -VAR_0;
}
