
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct vpif_capture_config {struct vpif_capture_chan_config* chan_config; } ;
struct vpif_capture_chan_config {TYPE_1__* inputs; } ;
struct video_device {int dummy; } ;
struct v4l2_input {scalar_t__ capabilities; } ;
struct file {int dummy; } ;
struct TYPE_5__ {int stdid; } ;
struct channel_obj {size_t channel_id; size_t input_idx; TYPE_2__ video; } ;
struct TYPE_6__ {struct vpif_capture_config* platform_data; } ;
struct TYPE_4__ {struct v4l2_input input; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct video_device* FUNC_0 (struct file*) ;
 struct channel_obj* FUNC_1 (struct video_device*) ;
 int FUNC_2 (int,int ,char*) ;
 TYPE_3__* VAR_3 ;

__attribute__((used)) static int FUNC_3(struct file *VAR_4, void *VAR_5, v4l2_std_id *VAR_6)
{
 struct vpif_capture_config *VAR_7 = VAR_3->platform_data;
 struct video_device *VAR_8 = FUNC_0(VAR_4);
 struct channel_obj *VAR_9 = FUNC_1(VAR_8);
 struct vpif_capture_chan_config *VAR_10;
 struct v4l2_input VAR_11;

 FUNC_2(2, VAR_2, "vpif_g_std\n");

 if (!VAR_7->chan_config[VAR_9->channel_id].inputs)
  return -VAR_0;

 VAR_10 = &VAR_7->chan_config[VAR_9->channel_id];
 VAR_11 = VAR_10->inputs[VAR_9->input_idx].input;
 if (VAR_11.capabilities != VAR_1)
  return -VAR_0;

 *VAR_6 = VAR_9->video.stdid;
 return 0;
}
