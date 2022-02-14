
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vpfe_fh {int io_allowed; } ;
struct TYPE_4__ {int field; } ;
struct TYPE_5__ {TYPE_1__ pix; } ;
struct TYPE_6__ {TYPE_2__ fmt; } ;
struct vpfe_device {int io_usrs; int lock; int buffer_queue; int dma_queue; TYPE_3__ fmt; int irqlock; int pdev; int memory; int v4l2_dev; } ;
struct videobuf_buffer {int dummy; } ;
struct v4l2_requestbuffers {int type; int memory; } ;
struct file {struct vpfe_fh* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int ,int *,char*) ;
 int FUNC_4 (int *,char*) ;
 struct vpfe_device* FUNC_5 (struct file*) ;
 int FUNC_6 (int *,int *,int ,int *,int ,int ,int,struct vpfe_fh*,int *) ;
 int FUNC_7 (int *,struct v4l2_requestbuffers*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(struct file *VAR_5, void *VAR_6,
   struct v4l2_requestbuffers *VAR_7)
{
 struct vpfe_device *VAR_8 = FUNC_5(VAR_5);
 struct vpfe_fh *VAR_9 = VAR_5->private_data;
 int VAR_10;

 FUNC_3(1, VAR_3, &VAR_8->v4l2_dev, "vpfe_reqbufs\n");

 if (VAR_2 != VAR_7->type) {
  FUNC_4(&VAR_8->v4l2_dev, "Invalid buffer type\n");
  return -VAR_1;
 }

 VAR_10 = FUNC_1(&VAR_8->lock);
 if (VAR_10)
  return VAR_10;

 if (VAR_8->io_usrs != 0) {
  FUNC_4(&VAR_8->v4l2_dev, "Only one IO user allowed\n");
  VAR_10 = -VAR_0;
  goto unlock_out;
 }

 VAR_8->memory = VAR_7->memory;
 FUNC_6(&VAR_8->buffer_queue,
    &VAR_4,
    VAR_8->pdev,
    &VAR_8->irqlock,
    VAR_7->type,
    VAR_8->fmt.fmt.pix.field,
    sizeof(struct videobuf_buffer),
    VAR_9, ((void*)0));

 VAR_9->io_allowed = 1;
 VAR_8->io_usrs = 1;
 FUNC_0(&VAR_8->dma_queue);
 VAR_10 = FUNC_7(&VAR_8->buffer_queue, VAR_7);
unlock_out:
 FUNC_2(&VAR_8->lock);
 return VAR_10;
}
