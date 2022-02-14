
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int upper_margin; int left_margin; } ;
struct vpbe_device {int current_sd_index; int current_out_index; int lock; TYPE_4__ current_timings; struct osd_state* osd_device; int * encoders; struct venc_platform_data* venc_device; struct vpbe_config* cfg; } ;
struct vpbe_config {int num_outputs; TYPE_2__* outputs; } ;
struct venc_platform_data {int (* setup_if_config ) (int ) ;} ;
struct TYPE_7__ {int (* set_top_margin ) (struct osd_state*,int ) ;int (* set_left_margin ) (struct osd_state*,int ) ;} ;
struct osd_state {TYPE_3__ ops; } ;
struct encoder_config_info {int module_name; } ;
struct TYPE_5__ {int index; } ;
struct TYPE_6__ {int default_mode; int if_params; int subdev_name; TYPE_1__ output; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct osd_state*,int ) ;
 int FUNC_5 (struct osd_state*,int ) ;
 int FUNC_6 (int ,int ,int ,int ,int,int ) ;
 int VAR_2 ;
 struct encoder_config_info* FUNC_7 (struct vpbe_device*) ;
 int FUNC_8 (struct vpbe_config*,int) ;
 int FUNC_9 (struct vpbe_device*,int ,int) ;

__attribute__((used)) static int FUNC_10(struct vpbe_device *VAR_3, int VAR_4)
{
 struct encoder_config_info *VAR_5 =
   FUNC_7(VAR_3);
 struct vpbe_config *VAR_6 = VAR_3->cfg;
 struct venc_platform_data *VAR_7 = VAR_3->venc_device;
 int VAR_8;
 int VAR_9;
 int VAR_10;

 if (VAR_4 >= VAR_6->num_outputs)
  return -VAR_0;

 FUNC_0(&VAR_3->lock);

 VAR_9 = VAR_3->current_sd_index;
 VAR_8 = VAR_6->outputs[VAR_4].output.index;
 if (FUNC_2(VAR_5->module_name,
     VAR_6->outputs[VAR_4].subdev_name)) {

  VAR_9 = FUNC_8(VAR_6, VAR_4);
  if (VAR_9 < 0) {
   VAR_10 = -VAR_0;
   goto unlock;
  }

  VAR_10 = VAR_7->setup_if_config(VAR_6->outputs[VAR_4].if_params);
  if (VAR_10)
   goto unlock;
 }


 VAR_10 = FUNC_6(VAR_3->encoders[VAR_9], VAR_2,
           VAR_1, 0, VAR_8, 0);
 if (VAR_10)
  goto unlock;
 VAR_10 = FUNC_9(VAR_3,
     VAR_6->outputs[VAR_4].default_mode, VAR_4);
 if (!VAR_10) {
  struct osd_state *VAR_11 = VAR_3->osd_device;

  VAR_11->ops.set_left_margin(VAR_11,
   VAR_3->current_timings.left_margin);
  VAR_11->ops.set_top_margin(VAR_11,
  VAR_3->current_timings.upper_margin);
  VAR_3->current_sd_index = VAR_9;
  VAR_3->current_out_index = VAR_4;
 }
unlock:
 FUNC_1(&VAR_3->lock);
 return VAR_10;
}
