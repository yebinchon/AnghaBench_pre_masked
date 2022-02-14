
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int capabilities; } ;
struct vpbe_output {int num_modes; TYPE_3__* modes; TYPE_1__ output; } ;
struct TYPE_6__ {scalar_t__ timings_type; int upper_margin; int left_margin; int dv_timings; } ;
struct vpbe_device {int current_out_index; int current_sd_index; int lock; TYPE_3__ current_timings; struct osd_state* osd_device; scalar_t__ amp; scalar_t__* encoders; struct vpbe_config* cfg; } ;
struct vpbe_config {struct vpbe_output* outputs; } ;
struct v4l2_dv_timings {int dummy; } ;
struct TYPE_5__ {int (* set_top_margin ) (struct osd_state*,int ) ;int (* set_left_margin ) (struct osd_state*,int ) ;} ;
struct osd_state {TYPE_2__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,struct v4l2_dv_timings*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int FUNC_3 (struct osd_state*,int ) ;
 int FUNC_4 (struct osd_state*,int ) ;
 int FUNC_5 (scalar_t__,int ,int ,struct v4l2_dv_timings*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(struct vpbe_device *VAR_6,
      struct v4l2_dv_timings *VAR_7)
{
 struct vpbe_config *VAR_8 = VAR_6->cfg;
 int VAR_9 = VAR_6->current_out_index;
 struct vpbe_output *VAR_10 = &VAR_8->outputs[VAR_9];
 int VAR_11 = VAR_6->current_sd_index;
 int VAR_12, VAR_13;


 if (!(VAR_8->outputs[VAR_9].output.capabilities &
     VAR_2))
  return -VAR_1;

 for (VAR_13 = 0; VAR_13 < VAR_10->num_modes; VAR_13++) {
  if (VAR_10->modes[VAR_13].timings_type == VAR_3 &&
      !FUNC_0(&VAR_10->modes[VAR_13].dv_timings,
    VAR_7, sizeof(*VAR_7)))
   break;
 }
 if (VAR_13 >= VAR_10->num_modes)
  return -VAR_0;
 VAR_6->current_timings = VAR_10->modes[VAR_13];
 FUNC_1(&VAR_6->lock);

 VAR_12 = FUNC_5(VAR_6->encoders[VAR_11], VAR_5,
     VAR_4, VAR_7);
 if (!VAR_12 && VAR_6->amp) {

  VAR_12 = FUNC_5(VAR_6->amp, VAR_5,
    VAR_4, VAR_7);
 }

 if (!VAR_12) {
  struct osd_state *VAR_14 = VAR_6->osd_device;

  VAR_14->ops.set_left_margin(VAR_14,
  VAR_6->current_timings.left_margin);
  VAR_14->ops.set_top_margin(VAR_14,
  VAR_6->current_timings.upper_margin);
 }
 FUNC_2(&VAR_6->lock);

 return VAR_12;
}
