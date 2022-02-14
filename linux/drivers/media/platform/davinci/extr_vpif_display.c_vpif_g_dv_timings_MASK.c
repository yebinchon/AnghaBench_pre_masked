
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vpif_display_config {struct vpif_display_chan_config* chan_config; } ;
struct vpif_display_chan_config {TYPE_1__* outputs; } ;
struct v4l2_dv_timings {int dummy; } ;
struct video_obj {struct v4l2_dv_timings dv_timings; } ;
struct video_device {int dummy; } ;
struct v4l2_output {scalar_t__ capabilities; } ;
struct file {int dummy; } ;
struct channel_obj {size_t channel_id; size_t output_idx; struct video_obj video; } ;
struct TYPE_4__ {struct vpif_display_config* platform_data; } ;
struct TYPE_3__ {struct v4l2_output output; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct video_device* FUNC_0 (struct file*) ;
 struct channel_obj* FUNC_1 (struct video_device*) ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
  struct v4l2_dv_timings *VAR_5)
{
 struct vpif_display_config *VAR_6 = VAR_2->platform_data;
 struct video_device *VAR_7 = FUNC_0(VAR_3);
 struct channel_obj *VAR_8 = FUNC_1(VAR_7);
 struct vpif_display_chan_config *VAR_9;
 struct video_obj *VAR_10 = &VAR_8->video;
 struct v4l2_output VAR_11;

 if (!VAR_6->chan_config[VAR_8->channel_id].outputs)
  goto error;

 VAR_9 = &VAR_6->chan_config[VAR_8->channel_id];
 VAR_11 = VAR_9->outputs[VAR_8->output_idx].output;

 if (VAR_11.capabilities != VAR_1)
  goto error;

 *VAR_5 = VAR_10->dv_timings;

 return 0;
error:
 return -VAR_0;
}
