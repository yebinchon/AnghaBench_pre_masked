
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct video_device {int num; int name; int * v4l2_dev; int * lock; } ;
struct resource {int dummy; } ;
struct TYPE_14__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct fdp1_dev {int irq; int v4l2_dev; struct clk* m2m_dev; TYPE_1__* dev; int dev_mutex; struct video_device vfd; int clk_rate; struct clk* fcp; struct clk* regs; int device_process_lock; int irqlock; int free_job_list; TYPE_12__* jobs; int hw_job_list; int queued_job_list; } ;
struct device_node {int dummy; } ;
struct clk {int dummy; } ;
struct TYPE_13__ {int list; } ;


 unsigned int FUNC_0 (TYPE_12__*) ;
 int VAR_0 ;



 int VAR_1 ;


 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct clk*) ;
 int FUNC_3 (struct clk*) ;
 int VAR_4 ;
 struct clk* FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (struct clk*) ;
 int FUNC_6 (struct clk*) ;
 int FUNC_7 (TYPE_1__*,char*,int) ;
 int FUNC_8 (TYPE_1__*,char*,...) ;
 int FUNC_9 (TYPE_1__*) ;
 struct clk* FUNC_10 (TYPE_1__*,struct resource*) ;
 struct fdp1_dev* FUNC_11 (TYPE_1__*,int,int ) ;
 int FUNC_12 (TYPE_1__*,int,int ,int ,int ,struct fdp1_dev*) ;
 int FUNC_13 (struct fdp1_dev*,char*) ;
 int VAR_5 ;
 int FUNC_14 (struct fdp1_dev*,int ) ;
 struct video_device VAR_6 ;
 int FUNC_15 (int *,int *) ;
 int VAR_7 ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct device_node*) ;
 struct device_node* FUNC_18 (int ,char*,int ) ;
 int FUNC_19 (struct platform_device*,int ) ;
 struct resource* FUNC_20 (struct platform_device*,int ,int ) ;
 int FUNC_21 (struct platform_device*,struct fdp1_dev*) ;
 int FUNC_22 (TYPE_1__*) ;
 int FUNC_23 (TYPE_1__*) ;
 int FUNC_24 (TYPE_1__*) ;
 struct clk* FUNC_25 (struct device_node*) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int ,int ,int) ;
 int FUNC_28 (TYPE_1__*,int *) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int *,char*) ;
 int FUNC_31 (int *,char*,int ) ;
 struct clk* FUNC_32 (int *) ;
 int FUNC_33 (struct clk*) ;
 int FUNC_34 (struct video_device*,int ,int ) ;
 int FUNC_35 (struct video_device*,struct fdp1_dev*) ;

__attribute__((used)) static int FUNC_36(struct platform_device *VAR_8)
{
 struct fdp1_dev *VAR_9;
 struct video_device *VAR_10;
 struct device_node *VAR_11;
 struct resource *VAR_12;
 struct clk *VAR_13;
 unsigned int VAR_14;

 int VAR_15;
 int VAR_16;

 VAR_9 = FUNC_11(&VAR_8->dev, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_0;

 FUNC_1(&VAR_9->free_job_list);
 FUNC_1(&VAR_9->queued_job_list);
 FUNC_1(&VAR_9->hw_job_list);


 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_9->jobs); VAR_14++)
  FUNC_15(&VAR_9->jobs[VAR_14].list, &VAR_9->free_job_list);

 FUNC_16(&VAR_9->dev_mutex);

 FUNC_26(&VAR_9->irqlock);
 FUNC_26(&VAR_9->device_process_lock);
 VAR_9->dev = &VAR_8->dev;
 FUNC_21(VAR_8, VAR_9);


 VAR_12 = FUNC_20(VAR_8, VAR_3, 0);
 VAR_9->regs = FUNC_10(&VAR_8->dev, VAR_12);
 if (FUNC_2(VAR_9->regs))
  return FUNC_3(VAR_9->regs);


 VAR_9->irq = VAR_15 = FUNC_19(VAR_8, 0);
 if (VAR_15 < 0) {
  FUNC_8(&VAR_8->dev, "cannot find IRQ\n");
  return VAR_15;
 }

 VAR_15 = FUNC_12(&VAR_8->dev, VAR_9->irq, VAR_5, 0,
          FUNC_9(&VAR_8->dev), VAR_9);
 if (VAR_15) {
  FUNC_8(&VAR_8->dev, "cannot claim IRQ %d\n", VAR_9->irq);
  return VAR_15;
 }


 VAR_11 = FUNC_18(VAR_8->dev.of_node, "renesas,fcp", 0);
 if (VAR_11) {
  VAR_9->fcp = FUNC_25(VAR_11);
  FUNC_17(VAR_11);
  if (FUNC_2(VAR_9->fcp)) {
   FUNC_7(&VAR_8->dev, "FCP not found (%ld)\n",
    FUNC_3(VAR_9->fcp));
   return FUNC_3(VAR_9->fcp);
  }
 }


 VAR_13 = FUNC_4(&VAR_8->dev, ((void*)0));
 if (FUNC_2(VAR_13))
  return FUNC_3(VAR_13);

 VAR_9->clk_rate = FUNC_5(VAR_13);
 FUNC_6(VAR_13);


 VAR_15 = FUNC_28(&VAR_8->dev, &VAR_9->v4l2_dev);
 if (VAR_15) {
  FUNC_30(&VAR_9->v4l2_dev, "Failed to register video device\n");
  return VAR_15;
 }


 VAR_9->m2m_dev = FUNC_32(&VAR_7);
 if (FUNC_2(VAR_9->m2m_dev)) {
  FUNC_30(&VAR_9->v4l2_dev, "Failed to init mem2mem device\n");
  VAR_15 = FUNC_3(VAR_9->m2m_dev);
  goto unreg_dev;
 }


 VAR_9->vfd = VAR_6;
 VAR_10 = &VAR_9->vfd;
 VAR_10->lock = &VAR_9->dev_mutex;
 VAR_10->v4l2_dev = &VAR_9->v4l2_dev;
 FUNC_35(VAR_10, VAR_9);
 FUNC_27(VAR_10->name, VAR_6.name, sizeof(VAR_10->name));

 VAR_15 = FUNC_34(VAR_10, VAR_4, 0);
 if (VAR_15) {
  FUNC_30(&VAR_9->v4l2_dev, "Failed to register video device\n");
  goto release_m2m;
 }

 FUNC_31(&VAR_9->v4l2_dev, "Device registered as /dev/video%d\n",
    VAR_10->num);


 FUNC_22(&VAR_8->dev);
 FUNC_23(VAR_9->dev);

 VAR_16 = FUNC_14(VAR_9, VAR_1);
 switch (VAR_16) {
 case 130:
  FUNC_13(VAR_9, "FDP1 Version R-Car H3 ES1\n");
  break;
 case 128:
  FUNC_13(VAR_9, "FDP1 Version R-Car M3-W\n");
  break;
 case 131:
  FUNC_13(VAR_9, "FDP1 Version R-Car H3\n");
  break;
 case 129:
  FUNC_13(VAR_9, "FDP1 Version R-Car M3N\n");
  break;
 case 132:
  FUNC_13(VAR_9, "FDP1 Version R-Car E3\n");
  break;
 default:
  FUNC_8(VAR_9->dev, "FDP1 Unidentifiable (0x%08x)\n",
   VAR_16);
 }


 FUNC_24(VAR_9->dev);

 return 0;

release_m2m:
 FUNC_33(VAR_9->m2m_dev);

unreg_dev:
 FUNC_29(&VAR_9->v4l2_dev);

 return VAR_15;
}
