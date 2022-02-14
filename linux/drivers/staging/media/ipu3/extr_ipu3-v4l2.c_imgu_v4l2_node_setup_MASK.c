
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int u32 ;
struct TYPE_16__ {int * ops; } ;
struct video_device {TYPE_5__ entity; int vfl_dir; struct vb2_queue* queue; int * v4l2_dev; int * lock; int * fops; int release; int name; } ;
struct vb2_queue {scalar_t__ type; int io_modes; int buf_struct_size; int * lock; struct imgu_device* drv_priv; scalar_t__ min_buffers_needed; int timestamp_flags; int * mem_ops; int * ops; } ;
struct v4l2_subdev {TYPE_5__ entity; } ;
struct v4l2_pix_format_mplane {int width; int height; int num_planes; int pixelformat; int xfer_func; int quantization; int ycbcr_enc; int colorspace; scalar_t__ flags; TYPE_3__* plane_fmt; int field; int member_0; } ;
struct v4l2_mbus_framefmt {int width; int height; int xfer_func; int quantization; int ycbcr_enc; int colorspace; int field; int code; int member_0; } ;
struct TYPE_15__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct TYPE_11__ {scalar_t__ type; TYPE_4__ fmt; } ;
struct TYPE_17__ {int flags; } ;
struct imgu_video_device {int id; unsigned int pipe; char* name; scalar_t__ output; scalar_t__ enabled; struct vb2_queue vbq; int lock; TYPE_10__ vdev_fmt; TYPE_6__ vdev_pad; struct v4l2_mbus_framefmt pad_fmt; int buffers; struct video_device vdev; } ;
struct imgu_vb2_buffer {int dummy; } ;
struct TYPE_13__ {struct v4l2_subdev subdev; } ;
struct imgu_media_pipe {struct imgu_video_device* nodes; TYPE_2__ imgu_sd; } ;
struct imgu_device {int buf_struct_size; int v4l2_dev; struct imgu_media_pipe* imgu_pipe; TYPE_1__* pci_dev; } ;
struct device {int dummy; } ;
struct TYPE_14__ {int bytesperline; int sizeimage; } ;
struct TYPE_12__ {struct device dev; } ;


 char* VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (int,struct video_device*,TYPE_10__*) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_3 (TYPE_5__*,int,TYPE_5__*,int,int ) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*,int,TYPE_6__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int,char*,char*,unsigned int,char*) ;
 int VAR_23 ;
 int FUNC_9 (struct vb2_queue*) ;
 int VAR_24 ;
 int FUNC_10 (struct video_device*,int ,int) ;
 int FUNC_11 (struct video_device*,struct imgu_device*) ;
 int FUNC_12 (struct video_device*) ;

__attribute__((used)) static int FUNC_13(struct imgu_device *VAR_25, unsigned int VAR_26,
    int VAR_27)
{
 int VAR_28;
 u32 VAR_29;
 struct v4l2_mbus_framefmt VAR_30 = { 0 };
 struct v4l2_pix_format_mplane VAR_31 = { 0 };
 struct device *VAR_32 = &VAR_25->pci_dev->dev;
 struct imgu_media_pipe *VAR_33 = &VAR_25->imgu_pipe[VAR_26];
 struct v4l2_subdev *VAR_34 = &VAR_33->imgu_sd.subdev;
 struct imgu_video_device *VAR_35 = &VAR_33->nodes[VAR_27];
 struct video_device *VAR_36 = &VAR_35->vdev;
 struct vb2_queue *VAR_37 = &VAR_35->vbq;


 VAR_30.width = 1920;
 VAR_30.height = 1080;
 VAR_30.code = VAR_1;
 VAR_30.field = VAR_9;
 VAR_30.colorspace = VAR_8;
 VAR_30.ycbcr_enc = VAR_14;
 VAR_30.quantization = VAR_12;
 VAR_30.xfer_func = VAR_13;

 VAR_31.width = VAR_30.width;
 VAR_31.height = VAR_30.height;
 VAR_31.field = VAR_30.field;
 VAR_31.num_planes = 1;
 VAR_31.plane_fmt[0].bytesperline = VAR_31.width * 2;
 VAR_31.plane_fmt[0].sizeimage =
  VAR_31.height * VAR_31.plane_fmt[0].bytesperline;
 VAR_31.flags = 0;
 VAR_31.colorspace = VAR_30.colorspace;
 VAR_31.ycbcr_enc = VAR_30.ycbcr_enc;
 VAR_31.quantization = VAR_30.quantization;
 VAR_31.xfer_func = VAR_30.xfer_func;


 FUNC_7(&VAR_35->lock);
 FUNC_0(&VAR_35->buffers);


 VAR_35->pad_fmt = VAR_30;
 VAR_35->id = VAR_27;
 VAR_35->pipe = VAR_26;
 FUNC_2(VAR_27, VAR_36, &VAR_35->vdev_fmt);
 if (VAR_35->vdev_fmt.type ==
     VAR_7 ||
     VAR_35->vdev_fmt.type ==
     VAR_6) {
  VAR_31.pixelformat = VAR_35->output ?
   VAR_10 :
   VAR_11;
  VAR_35->vdev_fmt.fmt.pix_mp = VAR_31;
 }


 VAR_28 = FUNC_5(&VAR_36->entity, 1, &VAR_35->vdev_pad);
 if (VAR_28) {
  FUNC_1(VAR_32, "failed initialize media entity (%d)\n", VAR_28);
  FUNC_6(&VAR_35->lock);
  return VAR_28;
 }
 VAR_35->vdev_pad.flags = VAR_35->output ?
  VAR_4 : VAR_3;
 VAR_36->entity.ops = ((void*)0);


 VAR_37->type = VAR_35->vdev_fmt.type;
 VAR_37->io_modes = VAR_17 | VAR_16 | VAR_15;
 VAR_37->ops = &VAR_22;
 VAR_37->mem_ops = &VAR_23;
 if (VAR_25->buf_struct_size <= 0)
  VAR_25->buf_struct_size =
   sizeof(struct imgu_vb2_buffer);
 VAR_37->buf_struct_size = VAR_25->buf_struct_size;
 VAR_37->timestamp_flags = VAR_5;

 VAR_37->min_buffers_needed = 0;
 VAR_37->drv_priv = VAR_25;
 VAR_37->lock = &VAR_35->lock;
 VAR_28 = FUNC_9(VAR_37);
 if (VAR_28) {
  FUNC_1(VAR_32, "failed to initialize video queue (%d)", VAR_28);
  FUNC_4(&VAR_36->entity);
  return VAR_28;
 }


 FUNC_8(VAR_36->name, sizeof(VAR_36->name), "%s %u %s",
   VAR_0, VAR_26, VAR_35->name);
 VAR_36->release = VAR_24;
 VAR_36->fops = &VAR_21;
 VAR_36->lock = &VAR_35->lock;
 VAR_36->v4l2_dev = &VAR_25->v4l2_dev;
 VAR_36->queue = &VAR_35->vbq;
 VAR_36->vfl_dir = VAR_35->output ? VAR_19 : VAR_18;
 FUNC_11(VAR_36, VAR_25);
 VAR_28 = FUNC_10(VAR_36, VAR_20, -1);
 if (VAR_28) {
  FUNC_1(VAR_32, "failed to register video device (%d)", VAR_28);
  FUNC_4(&VAR_36->entity);
  return VAR_28;
 }


 VAR_29 = 0;
 if (VAR_35->enabled)
  VAR_29 |= VAR_2;
 if (VAR_35->output) {
  VAR_28 = FUNC_3(&VAR_36->entity, 0, &VAR_34->entity,
       VAR_27, VAR_29);
 } else {
  VAR_28 = FUNC_3(&VAR_34->entity, VAR_27, &VAR_36->entity,
       0, VAR_29);
 }
 if (VAR_28) {
  FUNC_1(VAR_32, "failed to create pad link (%d)", VAR_28);
  FUNC_12(VAR_36);
  return VAR_28;
 }

 return 0;
}
