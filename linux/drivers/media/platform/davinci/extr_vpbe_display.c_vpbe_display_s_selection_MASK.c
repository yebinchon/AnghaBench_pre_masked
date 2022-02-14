
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct osd_layer_config {int dummy; } ;
struct TYPE_3__ {scalar_t__ h_zoom; scalar_t__ v_zoom; scalar_t__ h_exp; scalar_t__ v_exp; int id; struct osd_layer_config config; } ;
struct vpbe_layer {TYPE_1__ layer_info; int device_id; struct vpbe_display* disp_dev; } ;
struct vpbe_display {struct osd_state* osd_device; struct vpbe_device* vpbe_dev; } ;
struct vpbe_device {int v4l2_dev; } ;
struct v4l2_rect {scalar_t__ top; scalar_t__ left; int height; int width; } ;
struct v4l2_selection {scalar_t__ type; scalar_t__ target; struct v4l2_rect r; } ;
struct TYPE_4__ {int (* set_layer_config ) (struct osd_state*,int ,struct osd_layer_config*) ;int (* set_vid_expansion ) (struct osd_state*,scalar_t__,scalar_t__) ;int (* set_interpolation_filter ) (struct osd_state*,int) ;int (* set_zoom ) (struct osd_state*,int ,scalar_t__,scalar_t__) ;int (* get_layer_config ) (struct osd_state*,int ,struct osd_layer_config*) ;} ;
struct osd_state {TYPE_2__ ops; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct osd_state*,int ,struct osd_layer_config*) ;
 int FUNC_1 (struct osd_state*,int ,struct osd_layer_config*) ;
 int FUNC_2 (struct osd_state*,int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct osd_state*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct osd_state*,int) ;
 int FUNC_5 (struct osd_state*,int) ;
 int FUNC_6 (int,int ,int *,char*,int ) ;
 int FUNC_7 (int *,char*) ;
 struct vpbe_layer* FUNC_8 (struct file*) ;
 int FUNC_9 (struct vpbe_display*,struct vpbe_layer*,scalar_t__,scalar_t__) ;
 int FUNC_10 (struct vpbe_display*,struct vpbe_layer*,int ,int ) ;
 int FUNC_11 (struct vpbe_display*,struct v4l2_rect*) ;

__attribute__((used)) static int FUNC_12(struct file *VAR_7, void *VAR_8,
        struct v4l2_selection *VAR_9)
{
 struct vpbe_layer *VAR_10 = FUNC_8(VAR_7);
 struct vpbe_display *VAR_11 = VAR_10->disp_dev;
 struct vpbe_device *VAR_12 = VAR_11->vpbe_dev;
 struct osd_layer_config *VAR_13 = &VAR_10->layer_info.config;
 struct osd_state *VAR_14 = VAR_11->osd_device;
 struct v4l2_rect VAR_15 = VAR_9->r;
 int VAR_16;

 FUNC_6(1, VAR_6, &VAR_12->v4l2_dev,
  "VIDIOC_S_SELECTION, layer id = %d\n", VAR_10->device_id);

 if (VAR_9->type != VAR_2 ||
     VAR_9->target != VAR_3)
  return -VAR_0;

 if (VAR_15.top < 0)
  VAR_15.top = 0;
 if (VAR_15.left < 0)
  VAR_15.left = 0;

 FUNC_11(VAR_11, &VAR_15);

 VAR_14->ops.get_layer_config(VAR_14,
   VAR_10->layer_info.id, VAR_13);

 FUNC_10(VAR_11, VAR_10,
     VAR_15.width,
     VAR_15.height);
 FUNC_9(VAR_11, VAR_10, VAR_15.top,
     VAR_15.left);
 VAR_16 = VAR_14->ops.set_layer_config(VAR_14,
    VAR_10->layer_info.id, VAR_13);
 if (VAR_16 < 0) {
  FUNC_7(&VAR_12->v4l2_dev,
   "Error in set layer config:\n");
  return -VAR_0;
 }


 VAR_14->ops.set_zoom(VAR_14,
   VAR_10->layer_info.id,
   VAR_10->layer_info.h_zoom,
   VAR_10->layer_info.v_zoom);
 VAR_16 = VAR_14->ops.set_vid_expansion(VAR_14,
   VAR_10->layer_info.h_exp,
   VAR_10->layer_info.v_exp);
 if (VAR_16 < 0) {
  FUNC_7(&VAR_12->v4l2_dev,
  "Error in set vid expansion:\n");
  return -VAR_0;
 }

 if ((VAR_10->layer_info.h_zoom != VAR_5) ||
  (VAR_10->layer_info.v_zoom != VAR_5) ||
  (VAR_10->layer_info.h_exp != VAR_1) ||
  (VAR_10->layer_info.v_exp != VAR_4))

  VAR_14->ops.set_interpolation_filter(VAR_14, 1);
 else
  VAR_14->ops.set_interpolation_filter(VAR_14, 0);

 VAR_9->r = VAR_15;
 return 0;
}
