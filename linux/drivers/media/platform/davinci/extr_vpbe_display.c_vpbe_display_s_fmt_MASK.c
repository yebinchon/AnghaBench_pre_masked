
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct osd_layer_config {void* pixfmt; int interlaced; scalar_t__ xpos; scalar_t__ ypos; int line_length; int ysize; int xsize; } ;
struct TYPE_8__ {int id; struct osd_layer_config config; } ;
struct v4l2_pix_format {scalar_t__ pixelformat; int bytesperline; int height; int width; } ;
struct vpbe_layer {TYPE_4__ layer_info; struct v4l2_pix_format pix_fmt; int buffer_queue; int device_id; struct vpbe_display* disp_dev; } ;
struct vpbe_display {struct osd_state* osd_device; struct vpbe_device* vpbe_dev; } ;
struct TYPE_6__ {int interlaced; } ;
struct vpbe_device {int v4l2_dev; TYPE_2__ current_timings; } ;
struct TYPE_5__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {scalar_t__ type; TYPE_1__ fmt; } ;
struct TYPE_7__ {int (* request_layer ) (struct osd_state*,int ) ;int (* set_layer_config ) (struct osd_state*,int ,struct osd_layer_config*) ;int (* get_layer_config ) (struct osd_state*,int ,struct osd_layer_config*) ;} ;
struct osd_state {TYPE_3__ ops; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct vpbe_layer* FUNC_0 (struct vpbe_display*,struct vpbe_layer*) ;
 int VAR_7 ;
 int FUNC_1 (struct osd_state*,int ) ;
 int FUNC_2 (struct osd_state*,int ,struct osd_layer_config*) ;
 int FUNC_3 (struct osd_state*,int ,struct osd_layer_config*) ;
 int FUNC_4 (struct osd_state*,int ,struct osd_layer_config*) ;
 int FUNC_5 (int,int ,int *,char*,...) ;
 int FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (int *) ;
 struct vpbe_layer* FUNC_8 (struct file*) ;
 int FUNC_9 (struct vpbe_display*,struct v4l2_pix_format*,int) ;

__attribute__((used)) static int FUNC_10(struct file *VAR_8, void *VAR_9,
    struct v4l2_format *VAR_10)
{
 struct vpbe_layer *VAR_11 = FUNC_8(VAR_8);
 struct vpbe_display *VAR_12 = VAR_11->disp_dev;
 struct vpbe_device *VAR_13 = VAR_12->vpbe_dev;
 struct osd_layer_config *VAR_14 = &VAR_11->layer_info.config;
 struct v4l2_pix_format *VAR_15 = &VAR_10->fmt.pix;
 struct osd_state *VAR_16 = VAR_12->osd_device;
 int VAR_17;

 FUNC_5(1, VAR_7, &VAR_13->v4l2_dev,
   "VIDIOC_S_FMT, layer id = %d\n",
   VAR_11->device_id);

 if (FUNC_7(&VAR_11->buffer_queue))
  return -VAR_0;

 if (VAR_4 != VAR_10->type) {
  FUNC_5(1, VAR_7, &VAR_13->v4l2_dev, "invalid type\n");
  return -VAR_1;
 }

 VAR_17 = FUNC_9(VAR_12, VAR_15, 1);
 if (VAR_17)
  return VAR_17;




 VAR_11->pix_fmt = *VAR_15;
 if (VAR_15->pixelformat == VAR_5) {
  struct vpbe_layer *VAR_18;

  VAR_18 = FUNC_0(VAR_12, VAR_11);



  VAR_17 = VAR_16->ops.request_layer(VAR_16,
          VAR_18->layer_info.id);
  if (VAR_17 < 0) {
   FUNC_6(&VAR_13->v4l2_dev,
     "Display Manager failed to allocate layer\n");
   return -VAR_0;
  }
 }


 VAR_16->ops.get_layer_config(VAR_16,
   VAR_11->layer_info.id, VAR_14);

 VAR_14->xsize = VAR_15->width;
 VAR_14->ysize = VAR_15->height;
 VAR_14->line_length = VAR_15->bytesperline;
 VAR_14->ypos = 0;
 VAR_14->xpos = 0;
 VAR_14->interlaced = VAR_13->current_timings.interlaced;

 if (VAR_6 == VAR_15->pixelformat)
  VAR_14->pixfmt = VAR_3;


 if (VAR_5 == VAR_15->pixelformat) {
  struct vpbe_layer *VAR_19;
  VAR_14->pixfmt = VAR_2;
  VAR_19 = FUNC_0(VAR_12,
        VAR_11);
  VAR_19->layer_info.config.pixfmt = VAR_2;
 }


 VAR_17 = VAR_16->ops.set_layer_config(VAR_16,
    VAR_11->layer_info.id, VAR_14);
 if (VAR_17 < 0) {
  FUNC_6(&VAR_13->v4l2_dev,
    "Error in S_FMT params:\n");
  return -VAR_1;
 }


 VAR_16->ops.get_layer_config(VAR_16,
   VAR_11->layer_info.id, VAR_14);

 return 0;
}
