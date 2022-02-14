
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct video_device {struct vb2_queue* queue; int * lock; int release; int * v4l2_dev; int tvnorms; } ;
struct vb2_queue {int io_modes; int buf_struct_size; int min_buffers_needed; TYPE_1__* dev; int * lock; int timestamp_flags; int * mem_ops; int * ops; struct sh_vou_device* drv_priv; int type; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_rect {int width; int height; scalar_t__ top; scalar_t__ left; } ;
struct v4l2_pix_format {int width; int height; int bytesperline; int sizeimage; int colorspace; int field; int pixelformat; } ;
struct sh_vou_pdata {scalar_t__ bus_fmt; int board_info; int i2c_adap; } ;
struct sh_vou_device {int pix_idx; int v4l2_dev; int buf_list; int fop_lock; struct vb2_queue queue; struct video_device vdev; int base; int std; struct v4l2_pix_format pix; struct v4l2_rect rect; int status; struct sh_vou_pdata* pdata; int lock; } ;
struct sh_vou_buffer {int dummy; } ;
struct resource {int dummy; } ;
struct TYPE_9__ {struct sh_vou_pdata* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,struct resource*) ;
 struct sh_vou_device* FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (TYPE_1__*,int,int ,int ,char*,struct sh_vou_device*) ;
 struct i2c_adapter* FUNC_7 (int ) ;
 int FUNC_8 (struct i2c_adapter*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct platform_device*,int ) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (struct sh_vou_device*) ;
 int VAR_18 ;
 int VAR_19 ;
 struct video_device VAR_20 ;
 int FUNC_16 (int *) ;
 int FUNC_17 (TYPE_1__*,int *) ;
 int FUNC_18 (int *) ;
 struct v4l2_subdev* FUNC_19 (int *,struct i2c_adapter*,int ,int *) ;
 int VAR_21 ;
 int FUNC_20 (struct vb2_queue*) ;
 int VAR_22 ;
 int FUNC_21 (struct video_device*,int ,int) ;
 int FUNC_22 (struct video_device*,struct sh_vou_device*) ;

__attribute__((used)) static int FUNC_23(struct platform_device *VAR_23)
{
 struct sh_vou_pdata *VAR_24 = VAR_23->dev.platform_data;
 struct v4l2_rect *VAR_25;
 struct v4l2_pix_format *VAR_26;
 struct i2c_adapter *VAR_27;
 struct video_device *VAR_28;
 struct sh_vou_device *VAR_29;
 struct resource *VAR_30;
 struct v4l2_subdev *VAR_31;
 struct vb2_queue *VAR_32;
 int VAR_33, VAR_34;

 VAR_30 = FUNC_11(VAR_23, VAR_3, 0);
 VAR_33 = FUNC_10(VAR_23, 0);

 if (!VAR_24 || !VAR_30 || VAR_33 <= 0) {
  FUNC_3(&VAR_23->dev, "Insufficient VOU platform information.\n");
  return -VAR_0;
 }

 VAR_29 = FUNC_5(&VAR_23->dev, sizeof(*VAR_29), VAR_2);
 if (!VAR_29)
  return -VAR_1;

 FUNC_0(&VAR_29->buf_list);
 FUNC_16(&VAR_29->lock);
 FUNC_9(&VAR_29->fop_lock);
 VAR_29->pdata = VAR_24;
 VAR_29->status = VAR_5;
 VAR_29->pix_idx = 1;

 VAR_25 = &VAR_29->rect;
 VAR_26 = &VAR_29->pix;


 VAR_29->std = VAR_11;
 VAR_25->left = 0;
 VAR_25->top = 0;
 VAR_25->width = VAR_17;
 VAR_25->height = 480;
 VAR_26->width = VAR_17;
 VAR_26->height = 480;
 VAR_26->pixelformat = VAR_10;
 VAR_26->field = VAR_9;
 VAR_26->bytesperline = VAR_17;
 VAR_26->sizeimage = VAR_17 * 2 * 480;
 VAR_26->colorspace = VAR_8;

 VAR_29->base = FUNC_4(&VAR_23->dev, VAR_30);
 if (FUNC_1(VAR_29->base))
  return FUNC_2(VAR_29->base);

 VAR_34 = FUNC_6(&VAR_23->dev, VAR_33, VAR_18, 0, "vou", VAR_29);
 if (VAR_34 < 0)
  return VAR_34;

 VAR_34 = FUNC_17(&VAR_23->dev, &VAR_29->v4l2_dev);
 if (VAR_34 < 0) {
  FUNC_3(&VAR_23->dev, "Error registering v4l2 device\n");
  return VAR_34;
 }

 VAR_28 = &VAR_29->vdev;
 *VAR_28 = VAR_20;
 if (VAR_24->bus_fmt == VAR_4)
  VAR_28->tvnorms |= VAR_12;
 VAR_28->v4l2_dev = &VAR_29->v4l2_dev;
 VAR_28->release = VAR_22;
 VAR_28->lock = &VAR_29->fop_lock;

 FUNC_22(VAR_28, VAR_29);


 VAR_32 = &VAR_29->queue;
 VAR_32->type = VAR_7;
 VAR_32->io_modes = VAR_14 | VAR_13 | VAR_15;
 VAR_32->drv_priv = VAR_29;
 VAR_32->buf_struct_size = sizeof(struct sh_vou_buffer);
 VAR_32->ops = &VAR_19;
 VAR_32->mem_ops = &VAR_21;
 VAR_32->timestamp_flags = VAR_6;
 VAR_32->min_buffers_needed = 2;
 VAR_32->lock = &VAR_29->fop_lock;
 VAR_32->dev = &VAR_23->dev;
 VAR_34 = FUNC_20(VAR_32);
 if (VAR_34)
  goto ei2cgadap;

 VAR_28->queue = VAR_32;
 FUNC_0(&VAR_29->buf_list);

 FUNC_13(&VAR_23->dev);
 FUNC_14(&VAR_23->dev);

 VAR_27 = FUNC_7(VAR_24->i2c_adap);
 if (!VAR_27) {
  VAR_34 = -VAR_0;
  goto ei2cgadap;
 }

 VAR_34 = FUNC_15(VAR_29);
 if (VAR_34 < 0)
  goto ereset;

 VAR_31 = FUNC_19(&VAR_29->v4l2_dev, VAR_27,
   VAR_24->board_info, ((void*)0));
 if (!VAR_31) {
  VAR_34 = -VAR_1;
  goto ei2cnd;
 }

 VAR_34 = FUNC_21(VAR_28, VAR_16, -1);
 if (VAR_34 < 0)
  goto evregdev;

 return 0;

evregdev:
ei2cnd:
ereset:
 FUNC_8(VAR_27);
ei2cgadap:
 FUNC_12(&VAR_23->dev);
 FUNC_18(&VAR_29->v4l2_dev);
 return VAR_34;
}
