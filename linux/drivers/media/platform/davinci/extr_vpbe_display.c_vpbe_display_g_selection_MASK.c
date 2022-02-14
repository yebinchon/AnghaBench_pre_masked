
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct osd_layer_config {int ysize; int xsize; int xpos; int ypos; } ;
struct TYPE_7__ {int id; struct osd_layer_config config; } ;
struct vpbe_layer {TYPE_3__ layer_info; int device_id; TYPE_1__* disp_dev; } ;
struct TYPE_8__ {int yres; int xres; } ;
struct vpbe_device {TYPE_4__ current_timings; int v4l2_dev; } ;
struct v4l2_rect {int height; int width; int top; int left; } ;
struct v4l2_selection {scalar_t__ type; int target; struct v4l2_rect r; } ;
struct TYPE_6__ {int (* get_layer_config ) (struct osd_state*,int ,struct osd_layer_config*) ;} ;
struct osd_state {TYPE_2__ ops; } ;
struct file {int dummy; } ;
struct TYPE_5__ {struct osd_state* osd_device; struct vpbe_device* vpbe_dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (struct osd_state*,int ,struct osd_layer_config*) ;
 int FUNC_1 (int,int ,int *,char*,int ) ;
 struct vpbe_layer* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4,
        struct v4l2_selection *VAR_5)
{
 struct vpbe_layer *VAR_6 = FUNC_2(VAR_3);
 struct osd_layer_config *VAR_7 = &VAR_6->layer_info.config;
 struct vpbe_device *VAR_8 = VAR_6->disp_dev->vpbe_dev;
 struct osd_state *VAR_9 = VAR_6->disp_dev->osd_device;
 struct v4l2_rect *VAR_10 = &VAR_5->r;

 FUNC_1(1, VAR_2, &VAR_8->v4l2_dev,
   "VIDIOC_G_SELECTION, layer id = %d\n",
   VAR_6->device_id);

 if (VAR_5->type != VAR_1)
  return -VAR_0;

 switch (VAR_5->target) {
 case 130:
  VAR_9->ops.get_layer_config(VAR_9,
       VAR_6->layer_info.id, VAR_7);
  VAR_10->top = VAR_7->ypos;
  VAR_10->left = VAR_7->xpos;
  VAR_10->width = VAR_7->xsize;
  VAR_10->height = VAR_7->ysize;
  break;
 case 128:
 case 129:
  VAR_10->left = 0;
  VAR_10->top = 0;
  VAR_10->width = VAR_8->current_timings.xres;
  VAR_10->height = VAR_8->current_timings.yres;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
