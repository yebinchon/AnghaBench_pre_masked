
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct vpif_display_config {struct vpif_display_chan_config* chan_config; } ;
struct vpif_display_chan_config {TYPE_3__* outputs; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_5__ {int tvnorms; } ;
struct channel_obj {size_t channel_id; int output_idx; TYPE_1__ video_dev; struct v4l2_subdev* sd; } ;
struct TYPE_8__ {struct v4l2_subdev** sd; } ;
struct TYPE_6__ {int std; } ;
struct TYPE_7__ {TYPE_2__ output; int output_route; int input_route; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_subdev*,int ,int ,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 TYPE_4__ VAR_3 ;
 int FUNC_2 (struct vpif_display_config*,struct vpif_display_chan_config*,int) ;

__attribute__((used)) static int FUNC_3(struct vpif_display_config *VAR_4,
        struct channel_obj *VAR_5, int VAR_6)
{
 struct vpif_display_chan_config *VAR_7 =
  &VAR_4->chan_config[VAR_5->channel_id];
 struct v4l2_subdev *VAR_8 = ((void*)0);
 u32 VAR_9 = 0, VAR_10 = 0;
 int VAR_11;
 int VAR_12;

 VAR_11 = FUNC_2(VAR_4, VAR_7, VAR_6);
 if (VAR_11 >= 0)
  VAR_8 = VAR_3.sd[VAR_11];

 if (VAR_8) {
  VAR_9 = VAR_7->outputs[VAR_6].input_route;
  VAR_10 = VAR_7->outputs[VAR_6].output_route;
  VAR_12 = FUNC_0(VAR_8, VAR_2, VAR_1, VAR_9, VAR_10, 0);
  if (VAR_12 < 0 && VAR_12 != -VAR_0) {
   FUNC_1("Failed to set output\n");
   return VAR_12;
  }

 }
 VAR_5->output_idx = VAR_6;
 VAR_5->sd = VAR_8;
 if (VAR_7->outputs)

  VAR_5->video_dev.tvnorms = VAR_7->outputs[VAR_6].output.std;
 return 0;
}
