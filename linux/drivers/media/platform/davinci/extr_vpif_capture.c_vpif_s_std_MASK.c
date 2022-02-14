
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
struct common_obj {int buffer_queue; } ;
struct TYPE_5__ {int dv_timings; int stdid; } ;
struct channel_obj {size_t channel_id; size_t input_idx; int sd; TYPE_2__ video; struct common_obj* common; } ;
struct TYPE_6__ {struct vpif_capture_config* platform_data; } ;
struct TYPE_4__ {struct v4l2_input input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,int) ;
 int VAR_8 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_9 ;
 struct video_device* FUNC_3 (struct file*) ;
 struct channel_obj* FUNC_4 (struct video_device*) ;
 int FUNC_5 (int,int ,char*) ;
 TYPE_3__* VAR_10 ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (struct channel_obj*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_11, void *VAR_12, v4l2_std_id VAR_13)
{
 struct vpif_capture_config *VAR_14 = VAR_10->platform_data;
 struct video_device *VAR_15 = FUNC_3(VAR_11);
 struct channel_obj *VAR_16 = FUNC_4(VAR_15);
 struct common_obj *VAR_17 = &VAR_16->common[VAR_6];
 struct vpif_capture_chan_config *VAR_18;
 struct v4l2_input VAR_19;
 int VAR_20;

 FUNC_5(2, VAR_7, "vpif_s_std\n");

 if (!VAR_14->chan_config[VAR_16->channel_id].inputs)
  return -VAR_2;

 VAR_18 = &VAR_14->chan_config[VAR_16->channel_id];
 VAR_19 = VAR_18->inputs[VAR_16->input_idx].input;
 if (VAR_19.capabilities != VAR_5)
  return -VAR_2;

 if (FUNC_2(&VAR_17->buffer_queue))
  return -VAR_0;


 VAR_16->video.stdid = VAR_13;
 FUNC_0(&VAR_16->video.dv_timings, 0, sizeof(VAR_16->video.dv_timings));


 if (FUNC_7(VAR_16)) {
  FUNC_6("Error getting the standard info\n");
  return -VAR_1;
 }


 VAR_20 = FUNC_1(VAR_16->sd, VAR_9, VAR_8, VAR_13);
 if (VAR_20 && VAR_20 != -VAR_4 && VAR_20 != -VAR_3) {
  FUNC_5(1, VAR_7, "Failed to set standard for sub devices\n");
  return VAR_20;
 }
 return 0;
}
