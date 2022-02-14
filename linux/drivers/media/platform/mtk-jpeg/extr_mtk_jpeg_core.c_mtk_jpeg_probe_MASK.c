
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dev; int name; } ;
struct mtk_jpeg_dev {int v4l2_dev; int m2m_dev; TYPE_1__* dec_vdev; int lock; int dec_reg_base; int * dev; int hw_lock; } ;
struct TYPE_5__ {int minor; int device_caps; int num; int vfl_dir; int * v4l2_dev; int * lock; int (* release ) (TYPE_1__*) ;int * ioctl_ops; int * fops; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 char* VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,struct resource*) ;
 struct mtk_jpeg_dev* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int,int ,int ,int ,struct mtk_jpeg_dev*) ;
 int FUNC_6 (struct mtk_jpeg_dev*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct platform_device*,int ) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (struct platform_device*,struct mtk_jpeg_dev*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int,char*,char*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,char*) ;
 int FUNC_17 (int *,char*,int ,int ,int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ) ;
 TYPE_1__* FUNC_20 () ;
 int FUNC_21 (TYPE_1__*) ;
 int FUNC_22 (TYPE_1__*,int ,int) ;
 int FUNC_23 (TYPE_1__*,struct mtk_jpeg_dev*) ;

__attribute__((used)) static int FUNC_24(struct platform_device *VAR_15)
{
 struct mtk_jpeg_dev *VAR_16;
 struct resource *VAR_17;
 int VAR_18;
 int VAR_19;

 VAR_16 = FUNC_4(&VAR_15->dev, sizeof(*VAR_16), VAR_2);
 if (!VAR_16)
  return -VAR_1;

 FUNC_7(&VAR_16->lock);
 FUNC_13(&VAR_16->hw_lock);
 VAR_16->dev = &VAR_15->dev;

 VAR_17 = FUNC_9(VAR_15, VAR_4, 0);
 VAR_16->dec_reg_base = FUNC_3(&VAR_15->dev, VAR_17);
 if (FUNC_0(VAR_16->dec_reg_base)) {
  VAR_19 = FUNC_1(VAR_16->dec_reg_base);
  return VAR_19;
 }

 VAR_17 = FUNC_9(VAR_15, VAR_3, 0);
 VAR_18 = FUNC_8(VAR_15, 0);
 if (!VAR_17 || VAR_18 < 0) {
  FUNC_2(&VAR_15->dev, "Failed to get dec_irq %d.\n", VAR_18);
  VAR_19 = -VAR_0;
  return VAR_19;
 }

 VAR_19 = FUNC_5(&VAR_15->dev, VAR_18, VAR_11, 0,
          VAR_15->name, VAR_16);
 if (VAR_19) {
  FUNC_2(&VAR_15->dev, "Failed to request dec_irq %d (%d)\n",
   VAR_18, VAR_19);
  VAR_19 = -VAR_0;
  goto err_req_irq;
 }

 VAR_19 = FUNC_6(VAR_16);
 if (VAR_19) {
  FUNC_2(&VAR_15->dev, "Failed to init clk, err %d\n", VAR_19);
  goto err_clk_init;
 }

 VAR_19 = FUNC_14(&VAR_15->dev, &VAR_16->v4l2_dev);
 if (VAR_19) {
  FUNC_2(&VAR_15->dev, "Failed to register v4l2 device\n");
  VAR_19 = -VAR_0;
  goto err_dev_register;
 }

 VAR_16->m2m_dev = FUNC_18(&VAR_14);
 if (FUNC_0(VAR_16->m2m_dev)) {
  FUNC_16(&VAR_16->v4l2_dev, "Failed to init mem2mem device\n");
  VAR_19 = FUNC_1(VAR_16->m2m_dev);
  goto err_m2m_init;
 }

 VAR_16->dec_vdev = FUNC_20();
 if (!VAR_16->dec_vdev) {
  VAR_19 = -VAR_1;
  goto err_dec_vdev_alloc;
 }
 FUNC_12(VAR_16->dec_vdev->name, sizeof(VAR_16->dec_vdev->name),
   "%s-dec", VAR_5);
 VAR_16->dec_vdev->fops = &VAR_12;
 VAR_16->dec_vdev->ioctl_ops = &VAR_13;
 VAR_16->dec_vdev->minor = -1;
 VAR_16->dec_vdev->release = FUNC_21;
 VAR_16->dec_vdev->lock = &VAR_16->lock;
 VAR_16->dec_vdev->v4l2_dev = &VAR_16->v4l2_dev;
 VAR_16->dec_vdev->vfl_dir = VAR_8;
 VAR_16->dec_vdev->device_caps = VAR_6 |
          VAR_7;

 VAR_19 = FUNC_22(VAR_16->dec_vdev, VAR_9, 3);
 if (VAR_19) {
  FUNC_16(&VAR_16->v4l2_dev, "Failed to register video device\n");
  goto err_dec_vdev_register;
 }

 FUNC_23(VAR_16->dec_vdev, VAR_16);
 FUNC_17(&VAR_16->v4l2_dev,
    "decoder device registered as /dev/video%d (%d,%d)\n",
    VAR_16->dec_vdev->num, VAR_10, VAR_16->dec_vdev->minor);

 FUNC_10(VAR_15, VAR_16);

 FUNC_11(&VAR_15->dev);

 return 0;

err_dec_vdev_register:
 FUNC_21(VAR_16->dec_vdev);

err_dec_vdev_alloc:
 FUNC_19(VAR_16->m2m_dev);

err_m2m_init:
 FUNC_15(&VAR_16->v4l2_dev);

err_dev_register:

err_clk_init:

err_req_irq:

 return VAR_19;
}
