
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct v4l2_fwnode_bus_parallel {int flags; } ;
struct sun4i_csi_format {int output; int input; } ;
struct TYPE_8__ {int paddr; int vaddr; scalar_t__ size; } ;
struct TYPE_7__ {int entity; int pipe; } ;
struct TYPE_6__ {unsigned int num_planes; int width; TYPE_1__* plane_fmt; int height; int pixelformat; } ;
struct sun4i_csi {int qlock; TYPE_4__ scratch; int dev; TYPE_3__ vdev; int src_subdev; scalar_t__ regs; TYPE_2__ fmt; scalar_t__ sequence; struct v4l2_fwnode_bus_parallel bus; } ;
struct TYPE_5__ {int bytesperline; scalar_t__ sizeimage; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (unsigned long) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,scalar_t__,int *,int ) ;
 int FUNC_10 (int ,scalar_t__,int ,int ) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct sun4i_csi*,int ) ;
 int VAR_16 ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (struct sun4i_csi*) ;
 int FUNC_17 (struct sun4i_csi*) ;
 int FUNC_18 (struct sun4i_csi*) ;
 struct sun4i_csi_format* FUNC_19 (int *,int *) ;
 int FUNC_20 (int ,int ,int ,int) ;
 struct sun4i_csi* FUNC_21 (struct vb2_queue*) ;
 int VAR_17 ;
 int FUNC_22 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_23(struct vb2_queue *VAR_18, unsigned int VAR_19)
{
 struct sun4i_csi *VAR_20 = FUNC_21(VAR_18);
 struct v4l2_fwnode_bus_parallel *VAR_21 = &VAR_20->bus;
 const struct sun4i_csi_format *VAR_22;
 unsigned long VAR_23, VAR_24, VAR_25;
 unsigned long VAR_26;
 unsigned int VAR_27;
 int VAR_28;

 VAR_22 = FUNC_19(&VAR_20->fmt.pixelformat, ((void*)0));
 if (!VAR_22)
  return -VAR_8;

 FUNC_7(VAR_20->dev, "Starting capture\n");

 VAR_20->sequence = 0;
 VAR_20->scratch.size = 0;
 for (VAR_27 = 0; VAR_27 < VAR_20->fmt.num_planes; VAR_27++)
  VAR_20->scratch.size += VAR_20->fmt.plane_fmt[VAR_27].sizeimage;

 VAR_20->scratch.vaddr = FUNC_9(VAR_20->dev,
      VAR_20->scratch.size,
      &VAR_20->scratch.paddr,
      VAR_11);
 if (!VAR_20->scratch.vaddr) {
  FUNC_8(VAR_20->dev, "Failed to allocate scratch buffer\n");
  VAR_28 = -VAR_10;
  goto err_clear_dma_queue;
 }

 VAR_28 = FUNC_11(&VAR_20->vdev.entity, &VAR_20->vdev.pipe);
 if (VAR_28 < 0)
  goto err_free_scratch_buffer;

 FUNC_14(&VAR_20->qlock, VAR_26);


 FUNC_22(FUNC_6(VAR_20->fmt.width * 2),
        VAR_20->regs + VAR_7);
 FUNC_22(FUNC_5(VAR_20->fmt.height),
        VAR_20->regs + VAR_6);

 VAR_23 = !!(VAR_21->flags & VAR_13);
 VAR_24 = !!(VAR_21->flags & VAR_12);
 VAR_25 = !!(VAR_21->flags & VAR_14);
 FUNC_22(FUNC_1(VAR_22->input) |
        FUNC_2(VAR_22->output) |
        FUNC_4(VAR_25) |
        FUNC_0(VAR_23) |
        FUNC_3(VAR_24),
        VAR_20->regs + VAR_3);


 FUNC_22(VAR_20->fmt.plane_fmt[0].bytesperline,
        VAR_20->regs + VAR_2);


 VAR_28 = FUNC_16(VAR_20);
 if (VAR_28) {
  FUNC_15(&VAR_20->qlock, VAR_26);
  goto err_disable_pipeline;
 }


 FUNC_22(VAR_0, VAR_20->regs + VAR_1);


 FUNC_22(VAR_5, VAR_20->regs + 0x34);


 FUNC_22(VAR_5, VAR_20->regs + VAR_4);

 FUNC_17(VAR_20);

 FUNC_15(&VAR_20->qlock, VAR_26);

 VAR_28 = FUNC_20(VAR_20->src_subdev, VAR_17, VAR_16, 1);
 if (VAR_28 < 0 && VAR_28 != -VAR_9)
  goto err_disable_device;

 return 0;

err_disable_device:
 FUNC_18(VAR_20);

err_disable_pipeline:
 FUNC_12(&VAR_20->vdev.entity);

err_free_scratch_buffer:
 FUNC_10(VAR_20->dev, VAR_20->scratch.size, VAR_20->scratch.vaddr,
     VAR_20->scratch.paddr);

err_clear_dma_queue:
 FUNC_14(&VAR_20->qlock, VAR_26);
 FUNC_13(VAR_20, VAR_15);
 FUNC_15(&VAR_20->qlock, VAR_26);

 return VAR_28;
}
