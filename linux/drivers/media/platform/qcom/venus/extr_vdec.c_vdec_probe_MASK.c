
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int device_caps; int * v4l2_dev; int vfl_dir; int * ioctl_ops; int * fops; int (* release ) (struct video_device*) ;int name; } ;
struct venus_core {struct device* dev_dec; struct video_device* vdev_dec; int v4l2_dev; void* core0_bus_clk; void* core0_clk; } ;
struct device {int parent; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (struct venus_core*) ;
 scalar_t__ FUNC_2 (struct venus_core*) ;
 int FUNC_3 (void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct venus_core* FUNC_4 (int ) ;
 void* FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct platform_device*,struct venus_core*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (int ,char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 struct video_device* FUNC_9 () ;
 int FUNC_10 (struct video_device*) ;
 int FUNC_11 (struct video_device*,int ,int) ;
 int FUNC_12 (struct video_device*,struct venus_core*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_8)
{
 struct device *VAR_9 = &VAR_8->dev;
 struct video_device *VAR_10;
 struct venus_core *VAR_11;
 int VAR_12;

 if (!VAR_9->parent)
  return -VAR_1;

 VAR_11 = FUNC_4(VAR_9->parent);
 if (!VAR_11)
  return -VAR_1;

 if (FUNC_1(VAR_11) || FUNC_2(VAR_11)) {
  VAR_11->core0_clk = FUNC_5(VAR_9, "core");
  if (FUNC_0(VAR_11->core0_clk))
   return FUNC_3(VAR_11->core0_clk);
 }

 if (FUNC_2(VAR_11)) {
  VAR_11->core0_bus_clk = FUNC_5(VAR_9, "bus");
  if (FUNC_0(VAR_11->core0_bus_clk))
   return FUNC_3(VAR_11->core0_bus_clk);
 }

 FUNC_6(VAR_8, VAR_11);

 VAR_10 = FUNC_9();
 if (!VAR_10)
  return -VAR_0;

 FUNC_8(VAR_10->name, "qcom-venus-decoder", sizeof(VAR_10->name));
 VAR_10->release = FUNC_10;
 VAR_10->fops = &VAR_6;
 VAR_10->ioctl_ops = &VAR_7;
 VAR_10->vfl_dir = VAR_4;
 VAR_10->v4l2_dev = &VAR_11->v4l2_dev;
 VAR_10->device_caps = VAR_3 | VAR_2;

 VAR_12 = FUNC_11(VAR_10, VAR_5, -1);
 if (VAR_12)
  goto err_vdev_release;

 VAR_11->vdev_dec = VAR_10;
 VAR_11->dev_dec = VAR_9;

 FUNC_12(VAR_10, VAR_11);
 FUNC_7(VAR_9);

 return 0;

err_vdev_release:
 FUNC_10(VAR_10);
 return VAR_12;
}
