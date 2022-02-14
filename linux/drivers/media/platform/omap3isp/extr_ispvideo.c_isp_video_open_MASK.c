
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vb2_queue {int io_modes; int buf_struct_size; int dev; int timestamp_flags; int * mem_ops; int * ops; struct isp_video_fh* drv_priv; int type; } ;
struct TYPE_6__ {int denominator; } ;
struct TYPE_9__ {int type; } ;
struct isp_video_fh {int vfh; struct isp_video* video; TYPE_1__ timeperframe; TYPE_5__ format; struct vb2_queue queue; } ;
struct TYPE_7__ {int entity; } ;
struct isp_video {int type; TYPE_3__* isp; TYPE_2__ video; } ;
struct isp_buffer {int dummy; } ;
struct file {int * private_data; } ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct isp_video_fh*) ;
 struct isp_video_fh* FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_5__*,int ,int) ;
 int * FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,TYPE_2__*) ;
 int FUNC_9 (int *,int) ;
 int VAR_7 ;
 int FUNC_10 (struct vb2_queue*) ;
 struct isp_video* FUNC_11 (struct file*) ;

__attribute__((used)) static int FUNC_12(struct file *VAR_8)
{
 struct isp_video *VAR_9 = FUNC_11(VAR_8);
 struct isp_video_fh *VAR_10;
 struct vb2_queue *VAR_11;
 int VAR_12 = 0;

 VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_2);
 if (VAR_10 == ((void*)0))
  return -VAR_1;

 FUNC_8(&VAR_10->vfh, &VAR_9->video);
 FUNC_5(&VAR_10->vfh);


 if (FUNC_3(VAR_9->isp) == ((void*)0)) {
  VAR_12 = -VAR_0;
  goto done;
 }

 VAR_12 = FUNC_9(&VAR_9->video.entity, 1);
 if (VAR_12 < 0) {
  FUNC_4(VAR_9->isp);
  goto done;
 }

 VAR_11 = &VAR_10->queue;
 VAR_11->type = VAR_9->type;
 VAR_11->io_modes = VAR_4 | VAR_5;
 VAR_11->drv_priv = VAR_10;
 VAR_11->ops = &VAR_6;
 VAR_11->mem_ops = &VAR_7;
 VAR_11->buf_struct_size = sizeof(struct isp_buffer);
 VAR_11->timestamp_flags = VAR_3;
 VAR_11->dev = VAR_9->isp->dev;

 VAR_12 = FUNC_10(&VAR_10->queue);
 if (VAR_12 < 0) {
  FUNC_4(VAR_9->isp);
  goto done;
 }

 FUNC_2(&VAR_10->format, 0, sizeof(VAR_10->format));
 VAR_10->format.type = VAR_9->type;
 VAR_10->timeperframe.denominator = 1;

 VAR_10->video = VAR_9;
 VAR_8->private_data = &VAR_10->vfh;

done:
 if (VAR_12 < 0) {
  FUNC_6(&VAR_10->vfh);
  FUNC_7(&VAR_10->vfh);
  FUNC_0(VAR_10);
 }

 return VAR_12;
}
