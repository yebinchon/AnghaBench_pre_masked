
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vpif_capture_config {struct vpif_capture_chan_config* chan_config; } ;
struct vpif_capture_chan_config {size_t input_count; TYPE_1__* inputs; } ;
struct video_device {int dummy; } ;
struct v4l2_input {size_t index; } ;
struct file {int dummy; } ;
struct channel_obj {size_t channel_id; } ;
struct TYPE_4__ {struct vpif_capture_config* platform_data; } ;
struct TYPE_3__ {int input; } ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_input*,int *,int) ;
 struct video_device* FUNC_1 (struct file*) ;
 struct channel_obj* FUNC_2 (struct video_device*) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3,
    struct v4l2_input *VAR_4)
{

 struct vpif_capture_config *VAR_5 = VAR_1->platform_data;
 struct video_device *VAR_6 = FUNC_1(VAR_2);
 struct channel_obj *VAR_7 = FUNC_2(VAR_6);
 struct vpif_capture_chan_config *VAR_8;

 VAR_8 = &VAR_5->chan_config[VAR_7->channel_id];

 if (VAR_4->index >= VAR_8->input_count)
  return -VAR_0;

 FUNC_0(VAR_4, &VAR_8->inputs[VAR_4->index].input,
  sizeof(*VAR_4));
 return 0;
}
