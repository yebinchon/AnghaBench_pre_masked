
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct vpif_display_config {struct vpif_display_chan_config* chan_config; } ;
struct vpif_display_chan_config {TYPE_1__* outputs; } ;
struct video_device {int dummy; } ;
struct v4l2_output {scalar_t__ capabilities; } ;
struct file {int dummy; } ;
struct TYPE_5__ {int stdid; } ;
struct channel_obj {size_t channel_id; size_t output_idx; TYPE_2__ video; } ;
struct TYPE_6__ {struct vpif_display_config* platform_data; } ;
struct TYPE_4__ {struct v4l2_output output; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct video_device* FUNC_0 (struct file*) ;
 struct channel_obj* FUNC_1 (struct video_device*) ;
 TYPE_3__* VAR_2 ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4, v4l2_std_id *VAR_5)
{
 struct vpif_display_config *VAR_6 = VAR_2->platform_data;
 struct video_device *VAR_7 = FUNC_0(VAR_3);
 struct channel_obj *VAR_8 = FUNC_1(VAR_7);
 struct vpif_display_chan_config *VAR_9;
 struct v4l2_output VAR_10;

 if (!VAR_6->chan_config[VAR_8->channel_id].outputs)
  return -VAR_0;

 VAR_9 = &VAR_6->chan_config[VAR_8->channel_id];
 VAR_10 = VAR_9->outputs[VAR_8->output_idx].output;
 if (VAR_10.capabilities != VAR_1)
  return -VAR_0;

 *VAR_5 = VAR_8->video.stdid;
 return 0;
}
