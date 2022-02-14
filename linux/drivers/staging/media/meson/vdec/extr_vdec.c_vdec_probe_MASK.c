
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int device_caps; int * lock; int * v4l2_dev; int vfl_dir; int * ioctl_ops; int * fops; int (* release ) (struct video_device*) ;int name; } ;
struct resource {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct of_device_id {int data; } ;
struct amvdec_core {int lock; int v4l2_dev; struct device* dev_dec; struct video_device* vdev_dec; int platform; struct device* dev; void* vdec_hevc_clk; void* vdec_1_clk; void* dos_clk; void* dos_parser_clk; void* canvas; void* regmap_ao; void* esparser_base; void* dos_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct device*,char*) ;
 void* FUNC_3 (struct device*,char*) ;
 void* FUNC_4 (struct device*,struct resource*) ;
 struct amvdec_core* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,int,int ,int ,int ,char*,struct amvdec_core*) ;
 int FUNC_7 (struct platform_device*,struct amvdec_core*) ;
 void* FUNC_8 (struct device*) ;
 int FUNC_9 (int *) ;
 struct of_device_id* FUNC_10 (int ,int ) ;
 int FUNC_11 (struct platform_device*,char*) ;
 struct resource* FUNC_12 (struct platform_device*,int ,char*) ;
 int FUNC_13 (struct platform_device*,struct amvdec_core*) ;
 int FUNC_14 (int ,char*,int) ;
 void* FUNC_15 (int ,char*) ;
 int FUNC_16 (struct device*,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct video_device* FUNC_17 () ;
 int FUNC_18 (struct video_device*) ;
 int FUNC_19 (struct video_device*,int ,int) ;
 int FUNC_20 (struct video_device*,struct amvdec_core*) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_14)
{
 struct device *VAR_15 = &VAR_14->dev;
 struct video_device *VAR_16;
 struct amvdec_core *VAR_17;
 struct resource *VAR_18;
 const struct of_device_id *VAR_19;
 int VAR_20;
 int VAR_21;

 VAR_17 = FUNC_5(VAR_15, sizeof(*VAR_17), VAR_2);
 if (!VAR_17)
  return -VAR_0;

 VAR_17->dev = VAR_15;
 FUNC_13(VAR_14, VAR_17);

 VAR_18 = FUNC_12(VAR_14, VAR_3, "dos");
 VAR_17->dos_base = FUNC_4(VAR_15, VAR_18);
 if (FUNC_0(VAR_17->dos_base)) {
  FUNC_2(VAR_15, "Couldn't remap DOS memory\n");
  return FUNC_1(VAR_17->dos_base);
 }

 VAR_18 = FUNC_12(VAR_14, VAR_3, "esparser");
 VAR_17->esparser_base = FUNC_4(VAR_15, VAR_18);
 if (FUNC_0(VAR_17->esparser_base)) {
  FUNC_2(VAR_15, "Couldn't remap ESPARSER memory\n");
  return FUNC_1(VAR_17->esparser_base);
 }

 VAR_17->regmap_ao =
  FUNC_15(VAR_15->of_node,
      "amlogic,ao-sysctrl");
 if (FUNC_0(VAR_17->regmap_ao)) {
  FUNC_2(VAR_15, "Couldn't regmap AO sysctrl\n");
  return FUNC_1(VAR_17->regmap_ao);
 }

 VAR_17->canvas = FUNC_8(VAR_15);
 if (FUNC_0(VAR_17->canvas))
  return FUNC_1(VAR_17->canvas);

 VAR_17->dos_parser_clk = FUNC_3(VAR_15, "dos_parser");
 if (FUNC_0(VAR_17->dos_parser_clk))
  return -VAR_1;

 VAR_17->dos_clk = FUNC_3(VAR_15, "dos");
 if (FUNC_0(VAR_17->dos_clk))
  return -VAR_1;

 VAR_17->vdec_1_clk = FUNC_3(VAR_15, "vdec_1");
 if (FUNC_0(VAR_17->vdec_1_clk))
  return -VAR_1;

 VAR_17->vdec_hevc_clk = FUNC_3(VAR_15, "vdec_hevc");
 if (FUNC_0(VAR_17->vdec_hevc_clk))
  return -VAR_1;

 VAR_20 = FUNC_11(VAR_14, "vdec");
 if (VAR_20 < 0)
  return VAR_20;

 VAR_21 = FUNC_6(VAR_17->dev, VAR_20, VAR_12,
     VAR_13, VAR_4,
     "vdec", VAR_17);
 if (VAR_21)
  return VAR_21;

 VAR_21 = FUNC_7(VAR_14, VAR_17);
 if (VAR_21)
  return VAR_21;

 VAR_21 = FUNC_16(VAR_15, &VAR_17->v4l2_dev);
 if (VAR_21) {
  FUNC_2(VAR_15, "Couldn't register v4l2 device\n");
  return -VAR_0;
 }

 VAR_16 = FUNC_17();
 if (!VAR_16) {
  VAR_21 = -VAR_0;
  goto err_vdev_release;
 }

 VAR_19 = FUNC_10(VAR_9, VAR_15->of_node);
 VAR_17->platform = VAR_19->data;
 VAR_17->vdev_dec = VAR_16;
 VAR_17->dev_dec = VAR_15;
 FUNC_9(&VAR_17->lock);

 FUNC_14(VAR_16->name, "meson-video-decoder", sizeof(VAR_16->name));
 VAR_16->release = FUNC_18;
 VAR_16->fops = &VAR_10;
 VAR_16->ioctl_ops = &VAR_11;
 VAR_16->vfl_dir = VAR_7;
 VAR_16->v4l2_dev = &VAR_17->v4l2_dev;
 VAR_16->lock = &VAR_17->lock;
 VAR_16->device_caps = VAR_6 | VAR_5;

 FUNC_20(VAR_16, VAR_17);

 VAR_21 = FUNC_19(VAR_16, VAR_8, -1);
 if (VAR_21) {
  FUNC_2(VAR_15, "Failed registering video device\n");
  goto err_vdev_release;
 }

 return 0;

err_vdev_release:
 FUNC_18(VAR_16);
 return VAR_21;
}
