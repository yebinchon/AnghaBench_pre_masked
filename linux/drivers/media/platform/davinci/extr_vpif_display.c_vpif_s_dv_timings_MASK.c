
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vpif_channel_config_params {int l1; int vsize; int l5; int l7; int l11; int frm_fmt; int hd_sd; scalar_t__ stdid; scalar_t__ vbi_supported; scalar_t__ capture_format; scalar_t__ ycmux_mode; scalar_t__ height; scalar_t__ width; int name; scalar_t__ l9; scalar_t__ l3; scalar_t__ sav2eav; scalar_t__ eav2sav; } ;
struct vpif_params {struct vpif_channel_config_params std_info; } ;
struct vpif_display_config {struct vpif_display_chan_config* chan_config; } ;
struct vpif_display_chan_config {TYPE_1__* outputs; } ;
struct v4l2_bt_timings {int vfrontporch; int il_vfrontporch; scalar_t__ interlaced; scalar_t__ height; scalar_t__ width; scalar_t__ il_vbackporch; scalar_t__ il_vsync; scalar_t__ vbackporch; scalar_t__ vsync; scalar_t__ hsync; scalar_t__ hfrontporch; scalar_t__ hbackporch; } ;
struct v4l2_dv_timings {scalar_t__ type; struct v4l2_bt_timings bt; } ;
struct video_obj {scalar_t__ stdid; struct v4l2_dv_timings dv_timings; } ;
struct video_device {int dummy; } ;
struct v4l2_output {scalar_t__ capabilities; } ;
struct file {int dummy; } ;
struct common_obj {int buffer_queue; } ;
struct channel_obj {size_t channel_id; size_t output_idx; int sd; struct video_obj video; struct common_obj* common; struct vpif_params vpifparams; } ;
struct TYPE_4__ {struct vpif_display_config* platform_data; } ;
struct TYPE_3__ {struct v4l2_output output; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct v4l2_bt_timings*) ;
 int FUNC_1 (struct v4l2_bt_timings*) ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ,int ,struct v4l2_dv_timings*) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_10 ;
 struct video_device* FUNC_5 (struct file*) ;
 struct channel_obj* FUNC_6 (struct video_device*) ;
 int FUNC_7 (int,int ,char*) ;
 TYPE_2__* VAR_11 ;

__attribute__((used)) static int FUNC_8(struct file *VAR_12, void *VAR_13,
  struct v4l2_dv_timings *VAR_14)
{
 struct vpif_display_config *VAR_15 = VAR_11->platform_data;
 struct video_device *VAR_16 = FUNC_5(VAR_12);
 struct channel_obj *VAR_17 = FUNC_6(VAR_16);
 struct vpif_params *VAR_18 = &VAR_17->vpifparams;
 struct common_obj *VAR_19 = &VAR_17->common[VAR_7];
 struct vpif_channel_config_params *VAR_20 = &VAR_18->std_info;
 struct video_obj *VAR_21 = &VAR_17->video;
 struct v4l2_bt_timings *VAR_22 = &VAR_21->dv_timings.bt;
 struct vpif_display_chan_config *VAR_23;
 struct v4l2_output VAR_24;
 int VAR_25;

 if (!VAR_15->chan_config[VAR_17->channel_id].outputs)
  return -VAR_2;

 VAR_23 = &VAR_15->chan_config[VAR_17->channel_id];
 VAR_24 = VAR_23->outputs[VAR_17->output_idx].output;
 if (VAR_24.capabilities != VAR_6)
  return -VAR_2;

 if (FUNC_4(&VAR_19->buffer_queue))
  return -VAR_0;

 if (VAR_14->type != VAR_5) {
  FUNC_7(2, VAR_8, "Timing type not defined\n");
  return -VAR_1;
 }


 VAR_25 = FUNC_3(VAR_17->sd, VAR_10, VAR_9, VAR_14);
 if (VAR_25 == -VAR_4 || VAR_25 == -VAR_3)
  VAR_25 = 0;
 if (VAR_25 < 0) {
  FUNC_7(2, VAR_8, "Error setting custom DV timings\n");
  return VAR_25;
 }

 if (!(VAR_14->bt.width && VAR_14->bt.height &&
    (VAR_14->bt.hbackporch ||
     VAR_14->bt.hfrontporch ||
     VAR_14->bt.hsync) &&
    VAR_14->bt.vfrontporch &&
    (VAR_14->bt.vbackporch ||
     VAR_14->bt.vsync))) {
  FUNC_7(2, VAR_8, "Timings for width, height, horizontal back porch, horizontal sync, horizontal front porch, vertical back porch, vertical sync and vertical back porch must be defined\n");
  return -VAR_1;
 }

 VAR_21->dv_timings = *VAR_14;



 VAR_20->eav2sav = FUNC_0(VAR_22) - 8;
 VAR_20->sav2eav = VAR_22->width;

 VAR_20->l1 = 1;
 VAR_20->l3 = VAR_22->vsync + VAR_22->vbackporch + 1;

 VAR_20->vsize = FUNC_1(VAR_22);
 if (VAR_22->interlaced) {
  if (VAR_22->il_vbackporch || VAR_22->il_vfrontporch || VAR_22->il_vsync) {
   VAR_20->l5 = VAR_20->vsize/2 -
    (VAR_22->vfrontporch - 1);
   VAR_20->l7 = VAR_20->vsize/2 + 1;
   VAR_20->l9 = VAR_20->l7 + VAR_22->il_vsync +
    VAR_22->il_vbackporch + 1;
   VAR_20->l11 = VAR_20->vsize -
    (VAR_22->il_vfrontporch - 1);
  } else {
   FUNC_7(2, VAR_8, "Required timing values for interlaced BT format missing\n");
   return -VAR_1;
  }
 } else {
  VAR_20->l5 = VAR_20->vsize - (VAR_22->vfrontporch - 1);
 }
 FUNC_2(VAR_20->name, "Custom timings BT656/1120",
  sizeof(VAR_20->name));
 VAR_20->width = VAR_22->width;
 VAR_20->height = VAR_22->height;
 VAR_20->frm_fmt = VAR_22->interlaced ? 0 : 1;
 VAR_20->ycmux_mode = 0;
 VAR_20->capture_format = 0;
 VAR_20->vbi_supported = 0;
 VAR_20->hd_sd = 1;
 VAR_20->stdid = 0;
 VAR_21->stdid = 0;

 return 0;
}
