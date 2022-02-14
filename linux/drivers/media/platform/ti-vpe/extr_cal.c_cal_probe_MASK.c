
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_4__ {int name; } ;
struct cal_dev {struct cal_ctx** ctx; void** cc; void* cm; TYPE_2__* res; void* base; struct platform_device* pdev; TYPE_1__ v4l2_dev; } ;
struct cal_ctx {int v4l2_dev; int ctrl_handler; int notifier; } ;
struct TYPE_5__ {int end; int start; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (struct cal_dev*,int) ;
 int FUNC_3 (int,struct cal_dev*,char*,int,...) ;
 int FUNC_4 (struct cal_dev*,char*) ;
 int FUNC_5 (struct cal_dev*) ;
 int VAR_6 ;
 int FUNC_6 (struct cal_dev*) ;
 int FUNC_7 (struct cal_dev*) ;
 void* FUNC_8 (struct cal_dev*,int) ;
 void* FUNC_9 (struct cal_dev*) ;
 void* FUNC_10 (int *,TYPE_2__*) ;
 struct cal_dev* FUNC_11 (int *,int,int ) ;
 int FUNC_12 (int *,int,int ,int ,int ,struct cal_dev*) ;
 int FUNC_13 (struct platform_device*,int ) ;
 TYPE_2__* FUNC_14 (struct platform_device*,int ,char*) ;
 int FUNC_15 (struct platform_device*,struct cal_dev*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ,int ,int) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;

__attribute__((used)) static int FUNC_23(struct platform_device *VAR_7)
{
 struct cal_dev *VAR_8;
 struct cal_ctx *VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_8 = FUNC_11(&VAR_7->dev, sizeof(*VAR_8), VAR_4);
 if (!VAR_8)
  return -VAR_3;


 FUNC_18(VAR_8->v4l2_dev.name, VAR_0,
  sizeof(VAR_8->v4l2_dev.name));


 VAR_8->pdev = VAR_7;

 VAR_8->res = FUNC_14(VAR_7, VAR_5,
      "cal_top");
 VAR_8->base = FUNC_10(&VAR_7->dev, VAR_8->res);
 if (FUNC_0(VAR_8->base))
  return FUNC_1(VAR_8->base);

 FUNC_3(1, VAR_8, "ioresource %s at %pa - %pa\n",
  VAR_8->res->name, &VAR_8->res->start, &VAR_8->res->end);

 VAR_11 = FUNC_13(VAR_7, 0);
 FUNC_3(1, VAR_8, "got irq# %d\n", VAR_11);
 VAR_10 = FUNC_12(&VAR_7->dev, VAR_11, VAR_6, 0, VAR_0,
          VAR_8);
 if (VAR_10)
  return VAR_10;

 FUNC_15(VAR_7, VAR_8);

 VAR_8->cm = FUNC_9(VAR_8);
 if (FUNC_0(VAR_8->cm))
  return FUNC_1(VAR_8->cm);

 VAR_8->cc[0] = FUNC_8(VAR_8, 0);
 if (FUNC_0(VAR_8->cc[0]))
  return FUNC_1(VAR_8->cc[0]);

 VAR_8->cc[1] = FUNC_8(VAR_8, 1);
 if (FUNC_0(VAR_8->cc[1]))
  return FUNC_1(VAR_8->cc[1]);

 VAR_8->ctx[0] = ((void*)0);
 VAR_8->ctx[1] = ((void*)0);

 VAR_8->ctx[0] = FUNC_2(VAR_8, 0);
 VAR_8->ctx[1] = FUNC_2(VAR_8, 1);
 if (!VAR_8->ctx[0] && !VAR_8->ctx[1]) {
  FUNC_4(VAR_8, "Neither port is configured, no point in staying up\n");
  return -VAR_2;
 }

 FUNC_17(&VAR_7->dev);

 VAR_10 = FUNC_6(VAR_8);
 if (VAR_10)
  goto runtime_disable;


 FUNC_5(VAR_8);

 FUNC_7(VAR_8);

 return 0;

runtime_disable:
 FUNC_16(&VAR_7->dev);
 for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
  VAR_9 = VAR_8->ctx[VAR_12];
  if (VAR_9) {
   FUNC_20(&VAR_9->notifier);
   FUNC_19(&VAR_9->notifier);
   FUNC_21(&VAR_9->ctrl_handler);
   FUNC_22(&VAR_9->v4l2_dev);
  }
 }

 return VAR_10;
}
