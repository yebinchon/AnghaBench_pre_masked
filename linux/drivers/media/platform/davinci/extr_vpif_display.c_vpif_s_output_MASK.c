
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpif_display_config {struct vpif_display_chan_config* chan_config; } ;
struct vpif_display_chan_config {unsigned int output_count; } ;
struct video_device {int dummy; } ;
struct file {int dummy; } ;
struct common_obj {int buffer_queue; } ;
struct channel_obj {size_t channel_id; struct common_obj* common; } ;
struct TYPE_2__ {struct vpif_display_config* platform_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 struct video_device* FUNC_1 (struct file*) ;
 struct channel_obj* FUNC_2 (struct video_device*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 (struct vpif_display_config*,struct channel_obj*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_4, void *VAR_5, unsigned int VAR_6)
{
 struct vpif_display_config *VAR_7 = VAR_3->platform_data;
 struct video_device *VAR_8 = FUNC_1(VAR_4);
 struct channel_obj *VAR_9 = FUNC_2(VAR_8);
 struct vpif_display_chan_config *VAR_10;
 struct common_obj *VAR_11 = &VAR_9->common[VAR_2];

 if (FUNC_0(&VAR_11->buffer_queue))
  return -VAR_0;

 VAR_10 = &VAR_7->chan_config[VAR_9->channel_id];

 if (VAR_6 >= VAR_10->output_count)
  return -VAR_1;

 return FUNC_3(VAR_7, VAR_9, VAR_6);
}
