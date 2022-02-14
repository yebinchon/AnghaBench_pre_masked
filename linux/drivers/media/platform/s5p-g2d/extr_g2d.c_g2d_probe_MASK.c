
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct video_device {int device_caps; int num; int * v4l2_dev; int * lock; int flags; } ;
struct resource {int start; } ;
struct TYPE_11__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; int name; } ;
struct of_device_id {scalar_t__ data; } ;
struct g2d_variant {int dummy; } ;
struct g2d_dev {void* clk; void* gate; int v4l2_dev; struct video_device* vfd; struct g2d_variant* variant; void* m2m_dev; int mutex; int irq; void* regs; int num_inst; int ctrl_lock; } ;
struct TYPE_12__ {int stride; int width; TYPE_1__* fmt; } ;
struct TYPE_10__ {int depth; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int *,int ) ;
 void* FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*) ;
 TYPE_8__ VAR_10 ;
 int FUNC_8 (TYPE_2__*,char*) ;
 void* FUNC_9 (TYPE_2__*,struct resource*) ;
 struct g2d_dev* FUNC_10 (TYPE_2__*,int,int ) ;
 int FUNC_11 (TYPE_2__*,int ,int ,int ,int ,struct g2d_dev*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct video_device VAR_14 ;
 int FUNC_12 (int *) ;
 struct of_device_id* FUNC_13 (int ,int ) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;
 int FUNC_15 (struct platform_device*,struct g2d_dev*) ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (TYPE_2__*,int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,char*) ;
 int FUNC_21 (int *,char*,int ) ;
 void* FUNC_22 (int *) ;
 int FUNC_23 (TYPE_2__*,int ) ;
 struct video_device* FUNC_24 () ;
 int FUNC_25 (struct video_device*) ;
 int FUNC_26 (struct video_device*,int ,int ) ;
 int FUNC_27 (struct video_device*,struct g2d_dev*) ;
 int FUNC_28 (struct video_device*) ;

__attribute__((used)) static int FUNC_29(struct platform_device *VAR_15)
{
 struct g2d_dev *VAR_16;
 struct video_device *VAR_17;
 struct resource *VAR_18;
 const struct of_device_id *VAR_19;
 int VAR_20 = 0;

 VAR_16 = FUNC_10(&VAR_15->dev, sizeof(*VAR_16), VAR_3);
 if (!VAR_16)
  return -VAR_1;

 FUNC_17(&VAR_16->ctrl_lock);
 FUNC_12(&VAR_16->mutex);
 FUNC_3(&VAR_16->num_inst, 0);

 VAR_18 = FUNC_14(VAR_15, VAR_5, 0);

 VAR_16->regs = FUNC_9(&VAR_15->dev, VAR_18);
 if (FUNC_1(VAR_16->regs))
  return FUNC_2(VAR_16->regs);

 VAR_16->clk = FUNC_4(&VAR_15->dev, "sclk_fimg2d");
 if (FUNC_1(VAR_16->clk)) {
  FUNC_8(&VAR_15->dev, "failed to get g2d clock\n");
  return -VAR_2;
 }

 VAR_20 = FUNC_5(VAR_16->clk);
 if (VAR_20) {
  FUNC_8(&VAR_15->dev, "failed to prepare g2d clock\n");
  goto put_clk;
 }

 VAR_16->gate = FUNC_4(&VAR_15->dev, "fimg2d");
 if (FUNC_1(VAR_16->gate)) {
  FUNC_8(&VAR_15->dev, "failed to get g2d clock gate\n");
  VAR_20 = -VAR_2;
  goto unprep_clk;
 }

 VAR_20 = FUNC_5(VAR_16->gate);
 if (VAR_20) {
  FUNC_8(&VAR_15->dev, "failed to prepare g2d clock gate\n");
  goto put_clk_gate;
 }

 VAR_18 = FUNC_14(VAR_15, VAR_4, 0);
 if (!VAR_18) {
  FUNC_8(&VAR_15->dev, "failed to find IRQ\n");
  VAR_20 = -VAR_2;
  goto unprep_clk_gate;
 }

 VAR_16->irq = VAR_18->start;

 VAR_20 = FUNC_11(&VAR_15->dev, VAR_16->irq, VAR_12,
      0, VAR_15->name, VAR_16);
 if (VAR_20) {
  FUNC_8(&VAR_15->dev, "failed to install IRQ\n");
  goto unprep_clk_gate;
 }

 FUNC_23(&VAR_15->dev, FUNC_0(32));

 VAR_20 = FUNC_18(&VAR_15->dev, &VAR_16->v4l2_dev);
 if (VAR_20)
  goto unprep_clk_gate;
 VAR_17 = FUNC_24();
 if (!VAR_17) {
  FUNC_20(&VAR_16->v4l2_dev, "Failed to allocate video device\n");
  VAR_20 = -VAR_1;
  goto unreg_v4l2_dev;
 }
 *VAR_17 = VAR_14;
 FUNC_16(VAR_8, &VAR_17->flags);
 VAR_17->lock = &VAR_16->mutex;
 VAR_17->v4l2_dev = &VAR_16->v4l2_dev;
 VAR_17->device_caps = VAR_7 | VAR_6;
 VAR_20 = FUNC_26(VAR_17, VAR_9, 0);
 if (VAR_20) {
  FUNC_20(&VAR_16->v4l2_dev, "Failed to register video device\n");
  goto rel_vdev;
 }
 FUNC_27(VAR_17, VAR_16);
 VAR_16->vfd = VAR_17;
 FUNC_21(&VAR_16->v4l2_dev, "device registered as /dev/video%d\n",
        VAR_17->num);
 FUNC_15(VAR_15, VAR_16);
 VAR_16->m2m_dev = FUNC_22(&VAR_13);
 if (FUNC_1(VAR_16->m2m_dev)) {
  FUNC_20(&VAR_16->v4l2_dev, "Failed to init mem2mem device\n");
  VAR_20 = FUNC_2(VAR_16->m2m_dev);
  goto unreg_video_dev;
 }

 VAR_10.stride = (VAR_10.width * VAR_10.fmt->depth) >> 3;

 VAR_19 = FUNC_13(VAR_11, VAR_15->dev.of_node);
 if (!VAR_19) {
  VAR_20 = -VAR_0;
  goto unreg_video_dev;
 }
 VAR_16->variant = (struct g2d_variant *)VAR_19->data;

 return 0;

unreg_video_dev:
 FUNC_28(VAR_16->vfd);
rel_vdev:
 FUNC_25(VAR_17);
unreg_v4l2_dev:
 FUNC_19(&VAR_16->v4l2_dev);
unprep_clk_gate:
 FUNC_7(VAR_16->gate);
put_clk_gate:
 FUNC_6(VAR_16->gate);
unprep_clk:
 FUNC_7(VAR_16->clk);
put_clk:
 FUNC_6(VAR_16->clk);

 return VAR_20;
}
