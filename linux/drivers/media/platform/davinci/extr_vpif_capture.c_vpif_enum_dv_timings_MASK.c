
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
struct v4l2_enum_dv_timings {scalar_t__ pad; } ;
struct file {int dummy; } ;
struct channel_obj {size_t channel_id; size_t input_idx; int sd; } ;
struct TYPE_4__ {struct vpif_capture_config* platform_data; } ;
struct TYPE_3__ {struct v4l2_input input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,struct v4l2_enum_dv_timings*) ;
 struct video_device* FUNC_1 (struct file*) ;
 struct channel_obj* FUNC_2 (struct video_device*) ;
 TYPE_2__* VAR_7 ;

__attribute__((used)) static int
FUNC_3(struct file *VAR_8, void *VAR_9,
       struct v4l2_enum_dv_timings *VAR_10)
{
 struct vpif_capture_config *VAR_11 = VAR_7->platform_data;
 struct video_device *VAR_12 = FUNC_1(VAR_8);
 struct channel_obj *VAR_13 = FUNC_2(VAR_12);
 struct vpif_capture_chan_config *VAR_14;
 struct v4l2_input VAR_15;
 int VAR_16;

 if (!VAR_11->chan_config[VAR_13->channel_id].inputs)
  return -VAR_1;

 VAR_14 = &VAR_11->chan_config[VAR_13->channel_id];
 VAR_15 = VAR_14->inputs[VAR_13->input_idx].input;
 if (VAR_15.capabilities != VAR_4)
  return -VAR_1;

 VAR_10->pad = 0;

 VAR_16 = FUNC_0(VAR_13->sd, VAR_6, VAR_5, VAR_10);
 if (VAR_16 == -VAR_3 || VAR_16 == -VAR_2)
  return -VAR_0;

 return VAR_16;
}
