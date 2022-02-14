
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct vpif_display_config {struct vpif_display_chan_config* chan_config; } ;
struct vpif_display_chan_config {TYPE_1__* outputs; } ;
struct video_device {int dummy; } ;
struct v4l2_output {scalar_t__ capabilities; } ;
struct file {int dummy; } ;
struct TYPE_10__ {int width; int bytesperline; } ;
struct TYPE_11__ {TYPE_3__ pix; } ;
struct TYPE_12__ {TYPE_4__ fmt; } ;
struct common_obj {TYPE_5__ fmt; int buffer_queue; } ;
struct TYPE_9__ {int stdid; int dv_timings; } ;
struct channel_obj {size_t channel_id; size_t output_idx; TYPE_2__ video; struct common_obj* common; } ;
struct TYPE_14__ {struct vpif_display_config* platform_data; } ;
struct TYPE_13__ {int v4l2_dev; } ;
struct TYPE_8__ {struct v4l2_output output; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int *,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int,int ,int ,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_8 ;
 struct video_device* FUNC_3 (struct file*) ;
 struct channel_obj* FUNC_4 (struct video_device*) ;
 TYPE_7__* VAR_9 ;
 int FUNC_5 (char*) ;
 TYPE_6__ VAR_10 ;
 scalar_t__ FUNC_6 (struct channel_obj*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_11, void *VAR_12, v4l2_std_id VAR_13)
{
 struct vpif_display_config *VAR_14 = VAR_9->platform_data;
 struct video_device *VAR_15 = FUNC_3(VAR_11);
 struct channel_obj *VAR_16 = FUNC_4(VAR_15);
 struct common_obj *VAR_17 = &VAR_16->common[VAR_5];
 struct vpif_display_chan_config *VAR_18;
 struct v4l2_output VAR_19;
 int VAR_20;

 if (!VAR_14->chan_config[VAR_16->channel_id].outputs)
  return -VAR_2;

 VAR_18 = &VAR_14->chan_config[VAR_16->channel_id];
 VAR_19 = VAR_18->outputs[VAR_16->output_idx].output;
 if (VAR_19.capabilities != VAR_3)
  return -VAR_2;

 if (FUNC_2(&VAR_17->buffer_queue))
  return -VAR_0;


 if (!(VAR_13 & VAR_4))
  return -VAR_1;


 VAR_16->video.stdid = VAR_13;
 FUNC_0(&VAR_16->video.dv_timings, 0, sizeof(VAR_16->video.dv_timings));

 if (FUNC_6(VAR_16))
  return -VAR_1;

 VAR_17->fmt.fmt.pix.bytesperline = VAR_17->fmt.fmt.pix.width;

 VAR_20 = FUNC_1(&VAR_10.v4l2_dev, 1, VAR_8,
      VAR_7, VAR_13);
 if (VAR_20 < 0) {
  FUNC_5("Failed to set output standard\n");
  return VAR_20;
 }

 VAR_20 = FUNC_1(&VAR_10.v4l2_dev, 1, VAR_8,
       VAR_6, VAR_13);
 if (VAR_20 < 0)
  FUNC_5("Failed to set standard for sub devices\n");
 return VAR_20;
}
