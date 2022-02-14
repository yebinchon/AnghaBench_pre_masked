
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vpif_capture_config {struct vpif_capture_chan_config* chan_config; } ;
struct vpif_capture_chan_config {TYPE_1__* inputs; } ;
struct video_device {int dummy; } ;
struct v4l2_input {scalar_t__ capabilities; } ;
struct v4l2_dv_timings {int dummy; } ;
struct file {int dummy; } ;
struct channel_obj {size_t channel_id; size_t input_idx; int sd; } ;
struct TYPE_4__ {struct vpif_capture_config* platform_data; } ;
struct TYPE_3__ {struct v4l2_input input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,struct v4l2_dv_timings*) ;
 int VAR_5 ;
 struct video_device* FUNC_1 (struct file*) ;
 struct channel_obj* FUNC_2 (struct video_device*) ;
 TYPE_2__* VAR_6 ;

__attribute__((used)) static int
FUNC_3(struct file *VAR_7, void *VAR_8,
        struct v4l2_dv_timings *VAR_9)
{
 struct vpif_capture_config *VAR_10 = VAR_6->platform_data;
 struct video_device *VAR_11 = FUNC_1(VAR_7);
 struct channel_obj *VAR_12 = FUNC_2(VAR_11);
 struct vpif_capture_chan_config *VAR_13;
 struct v4l2_input VAR_14;
 int VAR_15;

 if (!VAR_10->chan_config[VAR_12->channel_id].inputs)
  return -VAR_0;

 VAR_13 = &VAR_10->chan_config[VAR_12->channel_id];
 VAR_14 = VAR_13->inputs[VAR_12->input_idx].input;
 if (VAR_14.capabilities != VAR_3)
  return -VAR_0;

 VAR_15 = FUNC_0(VAR_12->sd, VAR_5, VAR_4, VAR_9);
 if (VAR_15 == -VAR_2 || VAR_15 == -VAR_1)
  return -VAR_0;

 return VAR_15;
}
