
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


struct video_device {int name; int * v4l2_dev; int * lock; } ;
struct TYPE_16__ {int major; int minor; } ;
struct rockchip_rga {unsigned int* src_mmu_pages; unsigned int* dst_mmu_pages; TYPE_3__* dev; int v4l2_dev; struct video_device* vfd; int cmdbuf_phy; int cmdbuf_virt; TYPE_1__ version; int m2m_dev; int mutex; int regs; int ctrl_lock; } ;
struct resource {int dummy; } ;
struct TYPE_18__ {int of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct TYPE_17__ {int depth; } ;
struct TYPE_15__ {int stride; int width; int size; int height; TYPE_2__* fmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int,int) ;
 TYPE_14__ VAR_9 ;
 int FUNC_3 (TYPE_3__*,char*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,struct resource*) ;
 struct rockchip_rga* FUNC_6 (TYPE_3__*,int,int) ;
 int FUNC_7 (TYPE_3__*,int,int ,int ,int ,struct rockchip_rga*) ;
 int FUNC_8 (TYPE_3__*,int ,int *,int,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct platform_device*,int ) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct rockchip_rga*) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (TYPE_3__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_17 (struct rockchip_rga*) ;
 int FUNC_18 (struct rockchip_rga*,int ) ;
 struct video_device VAR_12 ;
 int FUNC_19 (int *) ;
 int FUNC_20 (TYPE_3__*,int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *,char*) ;
 int FUNC_23 (int *,char*,int,int) ;
 int FUNC_24 (int *) ;
 struct video_device* FUNC_25 () ;
 int FUNC_26 (struct video_device*) ;
 int FUNC_27 (struct video_device*) ;
 int FUNC_28 (struct video_device*,int ,int) ;
 int FUNC_29 (struct video_device*,struct rockchip_rga*) ;
 int FUNC_30 (struct video_device*) ;

__attribute__((used)) static int FUNC_31(struct platform_device *VAR_13)
{
 struct rockchip_rga *VAR_14;
 struct video_device *VAR_15;
 struct resource *VAR_16;
 int VAR_17 = 0;
 int VAR_18;

 if (!VAR_13->dev.of_node)
  return -VAR_1;

 VAR_14 = FUNC_6(&VAR_13->dev, sizeof(*VAR_14), VAR_3);
 if (!VAR_14)
  return -VAR_2;

 VAR_14->dev = &VAR_13->dev;
 FUNC_19(&VAR_14->ctrl_lock);
 FUNC_9(&VAR_14->mutex);

 VAR_17 = FUNC_17(VAR_14);
 if (VAR_17)
  FUNC_3(&VAR_13->dev, "Unable to parse OF data\n");

 FUNC_14(VAR_14->dev);

 VAR_16 = FUNC_11(VAR_13, VAR_4, 0);

 VAR_14->regs = FUNC_5(VAR_14->dev, VAR_16);
 if (FUNC_0(VAR_14->regs)) {
  VAR_17 = FUNC_1(VAR_14->regs);
  goto err_put_clk;
 }

 VAR_18 = FUNC_10(VAR_13, 0);
 if (VAR_18 < 0) {
  VAR_17 = VAR_18;
  goto err_put_clk;
 }

 VAR_17 = FUNC_7(VAR_14->dev, VAR_18, VAR_10, 0,
          FUNC_4(VAR_14->dev), VAR_14);
 if (VAR_17 < 0) {
  FUNC_3(VAR_14->dev, "failed to request irq\n");
  goto err_put_clk;
 }

 VAR_17 = FUNC_20(&VAR_13->dev, &VAR_14->v4l2_dev);
 if (VAR_17)
  goto err_put_clk;
 VAR_15 = FUNC_25();
 if (!VAR_15) {
  FUNC_22(&VAR_14->v4l2_dev, "Failed to allocate video device\n");
  VAR_17 = -VAR_2;
  goto unreg_v4l2_dev;
 }
 *VAR_15 = VAR_12;
 VAR_15->lock = &VAR_14->mutex;
 VAR_15->v4l2_dev = &VAR_14->v4l2_dev;

 FUNC_29(VAR_15, VAR_14);
 VAR_14->vfd = VAR_15;

 FUNC_12(VAR_13, VAR_14);
 VAR_14->m2m_dev = FUNC_24(&VAR_11);
 if (FUNC_0(VAR_14->m2m_dev)) {
  FUNC_22(&VAR_14->v4l2_dev, "Failed to init mem2mem device\n");
  VAR_17 = FUNC_1(VAR_14->m2m_dev);
  goto unreg_video_dev;
 }

 FUNC_15(VAR_14->dev);

 VAR_14->version.major = (FUNC_18(VAR_14, VAR_6) >> 24) & 0xFF;
 VAR_14->version.minor = (FUNC_18(VAR_14, VAR_6) >> 20) & 0x0F;

 FUNC_23(&VAR_14->v4l2_dev, "HW Version: 0x%02x.%02x\n",
    VAR_14->version.major, VAR_14->version.minor);

 FUNC_16(VAR_14->dev);


 VAR_14->cmdbuf_virt = FUNC_8(VAR_14->dev, VAR_5,
        &VAR_14->cmdbuf_phy, VAR_3,
        VAR_0);

 VAR_14->src_mmu_pages =
  (unsigned int *)FUNC_2(VAR_3 | VAR_8, 3);
 VAR_14->dst_mmu_pages =
  (unsigned int *)FUNC_2(VAR_3 | VAR_8, 3);

 VAR_9.stride = (VAR_9.width * VAR_9.fmt->depth) >> 3;
 VAR_9.size = VAR_9.stride * VAR_9.height;

 VAR_17 = FUNC_28(VAR_15, VAR_7, -1);
 if (VAR_17) {
  FUNC_22(&VAR_14->v4l2_dev, "Failed to register video device\n");
  goto rel_vdev;
 }

 FUNC_23(&VAR_14->v4l2_dev, "Registered %s as /dev/%s\n",
    VAR_15->name, FUNC_26(VAR_15));

 return 0;

rel_vdev:
 FUNC_27(VAR_15);
unreg_video_dev:
 FUNC_30(VAR_14->vfd);
unreg_v4l2_dev:
 FUNC_21(&VAR_14->v4l2_dev);
err_put_clk:
 FUNC_13(VAR_14->dev);

 return VAR_17;
}
