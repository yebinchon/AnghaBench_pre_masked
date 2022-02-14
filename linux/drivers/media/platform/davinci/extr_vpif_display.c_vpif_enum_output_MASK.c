
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vpif_display_config {struct vpif_display_chan_config* chan_config; } ;
struct vpif_display_chan_config {size_t output_count; TYPE_1__* outputs; } ;
struct video_device {int dummy; } ;
struct v4l2_output {size_t index; } ;
struct file {int dummy; } ;
struct channel_obj {size_t channel_id; } ;
struct TYPE_4__ {struct vpif_display_config* platform_data; } ;
struct TYPE_3__ {struct v4l2_output output; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct video_device* FUNC_0 (struct file*) ;
 struct channel_obj* FUNC_1 (struct video_device*) ;
 int FUNC_2 (int,int ,char*) ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4,
    struct v4l2_output *VAR_5)
{

 struct vpif_display_config *VAR_6 = VAR_2->platform_data;
 struct video_device *VAR_7 = FUNC_0(VAR_3);
 struct channel_obj *VAR_8 = FUNC_1(VAR_7);
 struct vpif_display_chan_config *VAR_9;

 VAR_9 = &VAR_6->chan_config[VAR_8->channel_id];
 if (VAR_5->index >= VAR_9->output_count) {
  FUNC_2(1, VAR_1, "Invalid output index\n");
  return -VAR_0;
 }

 *VAR_5 = VAR_9->outputs[VAR_5->index].output;
 return 0;
}
