
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_dv_timings {int dummy; } ;
struct vpbe_enc_mode_info {int timings_type; int upper_margin; int left_margin; struct v4l2_dv_timings dv_timings; int std_id; int name; } ;
struct vpbe_device {int current_out_index; int lock; struct vpbe_enc_mode_info current_timings; struct osd_state* osd_device; struct vpbe_config* cfg; } ;
struct vpbe_config {TYPE_1__* outputs; } ;
struct TYPE_4__ {int (* set_top_margin ) (struct osd_state*,int ) ;int (* set_left_margin ) (struct osd_state*,int ) ;} ;
struct osd_state {TYPE_2__ ops; } ;
struct TYPE_3__ {int num_modes; struct vpbe_enc_mode_info* modes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct osd_state*,int ) ;
 int FUNC_4 (struct osd_state*,int ) ;
 int FUNC_5 (struct vpbe_device*,struct v4l2_dv_timings*) ;
 int FUNC_6 (struct vpbe_device*,int ) ;

__attribute__((used)) static int FUNC_7(struct vpbe_device *VAR_3,
    struct vpbe_enc_mode_info *VAR_4)
{
 struct vpbe_enc_mode_info *VAR_5 = ((void*)0);
 struct vpbe_config *VAR_6 = VAR_3->cfg;
 struct v4l2_dv_timings VAR_7;
 struct osd_state *VAR_8;
 int VAR_9 = VAR_3->current_out_index;
 int VAR_10;

 if (!VAR_4 || !VAR_4->name)
  return -VAR_0;

 for (VAR_10 = 0; VAR_10 < VAR_6->outputs[VAR_9].num_modes; VAR_10++) {
  if (!FUNC_2(VAR_4->name,
       VAR_6->outputs[VAR_9].modes[VAR_10].name)) {
   VAR_5 = &VAR_6->outputs[VAR_9].modes[VAR_10];




   if (VAR_5->timings_type & VAR_2)
    return FUNC_6(VAR_3,
       VAR_5->std_id);
   if (VAR_5->timings_type &
      VAR_1) {
    VAR_7 =
     VAR_5->dv_timings;
    return FUNC_5(VAR_3, &VAR_7);
   }
  }
 }


 if (!VAR_5)
  return -VAR_0;

 FUNC_0(&VAR_3->lock);

 VAR_8 = VAR_3->osd_device;
 VAR_3->current_timings = *VAR_5;
 VAR_8->ops.set_left_margin(VAR_8,
  VAR_3->current_timings.left_margin);
 VAR_8->ops.set_top_margin(VAR_8,
  VAR_3->current_timings.upper_margin);

 FUNC_1(&VAR_3->lock);
 return 0;
}
