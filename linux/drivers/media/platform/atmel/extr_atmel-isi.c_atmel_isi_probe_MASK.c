
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vb2_queue {int io_modes; int buf_struct_size; int min_buffers_needed; int * dev; int timestamp_flags; int * mem_ops; int * ops; struct atmel_isi* drv_priv; int * lock; int type; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct frame_buffer {int dummy; } ;
struct fbd {int dummy; } ;
struct TYPE_6__ {int data_width_flags; } ;
struct atmel_isi {int width_flags; int irq; int v4l2_dev; TYPE_3__* vdev; scalar_t__ fb_descriptors_phys; scalar_t__ p_fb_descriptors; TYPE_1__ pdata; int regs; int dma_desc_head; TYPE_2__* dma_desc; int lock; struct vb2_queue queue; int video_buffer_list; int irqlock; int * dev; int * active; int pclk; } ;
struct TYPE_8__ {int device_caps; int * lock; int * ioctl_ops; int (* release ) (TYPE_3__*) ;int name; struct vb2_queue* queue; int * v4l2_dev; int * fops; } ;
struct TYPE_7__ {int list; scalar_t__ fbd_phys; scalar_t__ p_fbd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (struct atmel_isi*,struct platform_device*) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,struct resource*) ;
 struct atmel_isi* FUNC_7 (int *,int,int ) ;
 int FUNC_8 (int *,int,int ,int ,char*,struct atmel_isi*) ;
 scalar_t__ FUNC_9 (int *,int,scalar_t__*,int ) ;
 int FUNC_10 (int *,int,scalar_t__,scalar_t__) ;
 int VAR_15 ;
 int FUNC_11 (struct atmel_isi*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct platform_device*,int ) ;
 struct resource* FUNC_15 (struct platform_device*,int ,int ) ;
 int FUNC_16 (struct platform_device*,struct atmel_isi*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ,int ,int) ;
 int FUNC_21 (int *,int *) ;
 int FUNC_22 (int *) ;
 int VAR_19 ;
 int FUNC_23 (struct vb2_queue*) ;
 TYPE_3__* FUNC_24 () ;
 int FUNC_25 (TYPE_3__*) ;
 int FUNC_26 (TYPE_3__*,struct atmel_isi*) ;

__attribute__((used)) static int FUNC_27(struct platform_device *VAR_20)
{
 int VAR_21;
 struct atmel_isi *VAR_22;
 struct vb2_queue *VAR_23;
 struct resource *VAR_24;
 int VAR_25, VAR_26;

 VAR_22 = FUNC_7(&VAR_20->dev, sizeof(struct atmel_isi), VAR_1);
 if (!VAR_22)
  return -VAR_0;

 VAR_22->pclk = FUNC_5(&VAR_20->dev, "isi_clk");
 if (FUNC_1(VAR_22->pclk))
  return FUNC_2(VAR_22->pclk);

 VAR_25 = FUNC_3(VAR_22, VAR_20);
 if (VAR_25)
  return VAR_25;

 VAR_22->active = ((void*)0);
 VAR_22->dev = &VAR_20->dev;
 FUNC_13(&VAR_22->lock);
 FUNC_19(&VAR_22->irqlock);
 FUNC_0(&VAR_22->video_buffer_list);
 FUNC_0(&VAR_22->dma_desc_head);

 VAR_23 = &VAR_22->queue;


 VAR_25 = FUNC_21(&VAR_20->dev, &VAR_22->v4l2_dev);
 if (VAR_25)
  return VAR_25;

 VAR_22->vdev = FUNC_24();
 if (!VAR_22->vdev) {
  VAR_25 = -VAR_0;
  goto err_vdev_alloc;
 }


 VAR_22->vdev->fops = &VAR_15;
 VAR_22->vdev->v4l2_dev = &VAR_22->v4l2_dev;
 VAR_22->vdev->queue = &VAR_22->queue;
 FUNC_20(VAR_22->vdev->name, VAR_5, sizeof(VAR_22->vdev->name));
 VAR_22->vdev->release = FUNC_25;
 VAR_22->vdev->ioctl_ops = &VAR_17;
 VAR_22->vdev->lock = &VAR_22->lock;
 VAR_22->vdev->device_caps = VAR_10 | VAR_9 |
  VAR_8;
 FUNC_26(VAR_22->vdev, VAR_22);


 VAR_23->type = VAR_7;
 VAR_23->io_modes = VAR_12 | VAR_13 | VAR_11;
 VAR_23->lock = &VAR_22->lock;
 VAR_23->drv_priv = VAR_22;
 VAR_23->buf_struct_size = sizeof(struct frame_buffer);
 VAR_23->ops = &VAR_18;
 VAR_23->mem_ops = &VAR_19;
 VAR_23->timestamp_flags = VAR_6;
 VAR_23->min_buffers_needed = 2;
 VAR_23->dev = &VAR_20->dev;

 VAR_25 = FUNC_23(VAR_23);
 if (VAR_25 < 0) {
  FUNC_4(&VAR_20->dev, "failed to initialize VB2 queue\n");
  goto err_vb2_queue;
 }
 VAR_22->p_fb_descriptors = FUNC_9(&VAR_20->dev,
    sizeof(struct fbd) * VAR_14,
    &VAR_22->fb_descriptors_phys,
    VAR_1);
 if (!VAR_22->p_fb_descriptors) {
  FUNC_4(&VAR_20->dev, "Can't allocate descriptors!\n");
  VAR_25 = -VAR_0;
  goto err_dma_alloc;
 }

 for (VAR_26 = 0; VAR_26 < VAR_14; VAR_26++) {
  VAR_22->dma_desc[VAR_26].p_fbd = VAR_22->p_fb_descriptors + VAR_26;
  VAR_22->dma_desc[VAR_26].fbd_phys = VAR_22->fb_descriptors_phys +
     VAR_26 * sizeof(struct fbd);
  FUNC_12(&VAR_22->dma_desc[VAR_26].list, &VAR_22->dma_desc_head);
 }

 VAR_24 = FUNC_15(VAR_20, VAR_2, 0);
 VAR_22->regs = FUNC_6(&VAR_20->dev, VAR_24);
 if (FUNC_1(VAR_22->regs)) {
  VAR_25 = FUNC_2(VAR_22->regs);
  goto err_ioremap;
 }

 if (VAR_22->pdata.data_width_flags & VAR_4)
  VAR_22->width_flags = 1 << 7;
 if (VAR_22->pdata.data_width_flags & VAR_3)
  VAR_22->width_flags |= 1 << 9;

 VAR_21 = FUNC_14(VAR_20, 0);
 if (VAR_21 < 0) {
  VAR_25 = VAR_21;
  goto err_req_irq;
 }

 VAR_25 = FUNC_8(&VAR_20->dev, VAR_21, VAR_16, 0, "isi", VAR_22);
 if (VAR_25) {
  FUNC_4(&VAR_20->dev, "Unable to request irq %d\n", VAR_21);
  goto err_req_irq;
 }
 VAR_22->irq = VAR_21;

 VAR_25 = FUNC_11(VAR_22);
 if (VAR_25 < 0)
  goto err_req_irq;

 FUNC_18(&VAR_20->dev, 1);
 FUNC_17(&VAR_20->dev);
 FUNC_16(VAR_20, VAR_22);
 return 0;

err_req_irq:
err_ioremap:
 FUNC_10(&VAR_20->dev,
   sizeof(struct fbd) * VAR_14,
   VAR_22->p_fb_descriptors,
   VAR_22->fb_descriptors_phys);
err_dma_alloc:
err_vb2_queue:
 FUNC_25(VAR_22->vdev);
err_vdev_alloc:
 FUNC_22(&VAR_22->v4l2_dev);

 return VAR_25;
}
