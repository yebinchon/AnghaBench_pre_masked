
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct vpif_subdev_info {int name; } ;
struct vpif_capture_config {int (* setup_input_path ) (size_t,int ) ;struct vpif_subdev_info* subdev_info; struct vpif_capture_chan_config* chan_config; } ;
struct vpif_capture_chan_config {TYPE_4__* inputs; int vpif_if; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_7__ {int tvnorms; } ;
struct TYPE_6__ {int iface; } ;
struct channel_obj {size_t channel_id; int input_idx; TYPE_2__ video_dev; TYPE_1__ vpifparams; struct v4l2_subdev* sd; } ;
struct TYPE_10__ {struct v4l2_subdev** sd; } ;
struct TYPE_8__ {int std; } ;
struct TYPE_9__ {TYPE_3__ input; int output_route; int input_route; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (size_t,int ) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int ,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int,int ,char*,...) ;
 int FUNC_3 (struct vpif_capture_config*,struct vpif_capture_chan_config*,int) ;
 TYPE_5__ VAR_4 ;

__attribute__((used)) static int FUNC_4(
  struct vpif_capture_config *VAR_5,
  struct channel_obj *VAR_6,
  int VAR_7)
{
 struct vpif_capture_chan_config *VAR_8 =
   &VAR_5->chan_config[VAR_6->channel_id];
 struct vpif_subdev_info *VAR_9 = ((void*)0);
 struct v4l2_subdev *VAR_10 = ((void*)0);
 u32 VAR_11 = 0, VAR_12 = 0;
 int VAR_13;
 int VAR_14;

 VAR_13 = FUNC_3(VAR_5, VAR_8, VAR_7);
 if (VAR_13 >= 0) {
  VAR_10 = VAR_4.sd[VAR_13];
  VAR_9 = &VAR_5->subdev_info[VAR_13];
 } else {

  return 0;
 }


 if (VAR_10 && VAR_5->setup_input_path) {
  VAR_14 = VAR_5->setup_input_path(VAR_6->channel_id,
           VAR_9->name);
  if (VAR_14 < 0) {
   FUNC_2(1, VAR_1, "couldn't setup input path for the" " sub device %s, for input index %d\n",

   VAR_9->name, VAR_7);
   return VAR_14;
  }
 }

 if (VAR_10) {
  VAR_11 = VAR_8->inputs[VAR_7].input_route;
  VAR_12 = VAR_8->inputs[VAR_7].output_route;
  VAR_14 = FUNC_1(VAR_10, VAR_3, VAR_2,
    VAR_11, VAR_12, 0);
  if (VAR_14 < 0 && VAR_14 != -VAR_0) {
   FUNC_2(1, VAR_1, "Failed to set input\n");
   return VAR_14;
  }
 }
 VAR_6->input_idx = VAR_7;
 VAR_6->sd = VAR_10;

 VAR_6->vpifparams.iface = VAR_8->vpif_if;


 VAR_6->video_dev.tvnorms = VAR_8->inputs[VAR_7].input.std;
 return 0;
}
