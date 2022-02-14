
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct venus_core {scalar_t__ irq; int v4l2_dev; int work; int lock; int instances; TYPE_1__* res; int base; struct device* dev; } ;
struct resource {int dummy; } ;
struct device {int of_node; void* dma_parms; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {int dma_mask; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct device*,struct resource*) ;
 void* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct device*,int,int ,int ,int,char*,struct venus_core*) ;
 int FUNC_8 (struct device*,int ) ;
 int FUNC_9 (struct device*,int ) ;
 int FUNC_10 (struct venus_core*,int) ;
 int FUNC_11 (struct venus_core*) ;
 int FUNC_12 (struct venus_core*,int) ;
 int FUNC_13 (struct venus_core*,int *) ;
 int FUNC_14 (struct venus_core*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_15 (int *) ;
 TYPE_1__* FUNC_16 (struct device*) ;
 int FUNC_17 (int ,int *,int *,struct device*) ;
 scalar_t__ FUNC_18 (struct platform_device*,int ) ;
 struct resource* FUNC_19 (struct platform_device*,int ,int ) ;
 int FUNC_20 (struct platform_device*,struct venus_core*) ;
 int FUNC_21 (struct device*) ;
 int FUNC_22 (struct device*) ;
 int FUNC_23 (struct device*) ;
 int FUNC_24 (struct device*) ;
 int FUNC_25 (struct device*) ;
 int FUNC_26 (struct device*,int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (struct venus_core*) ;
 int FUNC_29 (struct venus_core*) ;
 int VAR_10 ;
 int FUNC_30 (struct venus_core*,int ) ;
 int FUNC_31 (struct venus_core*) ;
 int FUNC_32 (struct venus_core*) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_33(struct platform_device *VAR_12)
{
 struct device *VAR_13 = &VAR_12->dev;
 struct venus_core *VAR_14;
 struct resource *VAR_15;
 int VAR_16;

 VAR_14 = FUNC_6(VAR_13, sizeof(*VAR_14), VAR_2);
 if (!VAR_14)
  return -VAR_1;

 VAR_14->dev = VAR_13;
 FUNC_20(VAR_12, VAR_14);

 VAR_15 = FUNC_19(VAR_12, VAR_3, 0);
 VAR_14->base = FUNC_5(VAR_13, VAR_15);
 if (FUNC_3(VAR_14->base))
  return FUNC_4(VAR_14->base);

 VAR_14->irq = FUNC_18(VAR_12, 0);
 if (VAR_14->irq < 0)
  return VAR_14->irq;

 VAR_14->res = FUNC_16(VAR_13);
 if (!VAR_14->res)
  return -VAR_0;

 VAR_16 = FUNC_29(VAR_14);
 if (VAR_16)
  return VAR_16;

 VAR_16 = FUNC_8(VAR_13, VAR_14->res->dma_mask);
 if (VAR_16)
  return VAR_16;

 if (!VAR_13->dma_parms) {
  VAR_13->dma_parms = FUNC_6(VAR_13, sizeof(*VAR_13->dma_parms),
           VAR_2);
  if (!VAR_13->dma_parms)
   return -VAR_1;
 }
 FUNC_9(VAR_13, FUNC_0(32));

 FUNC_2(&VAR_14->instances);
 FUNC_15(&VAR_14->lock);
 FUNC_1(&VAR_14->work, VAR_11);

 VAR_16 = FUNC_7(VAR_13, VAR_14->irq, VAR_8, VAR_9,
     VAR_5 | VAR_4,
     "venus", VAR_14);
 if (VAR_16)
  return VAR_16;

 VAR_16 = FUNC_13(VAR_14, &VAR_10);
 if (VAR_16)
  return VAR_16;

 FUNC_22(VAR_13);

 VAR_16 = FUNC_23(VAR_13);
 if (VAR_16 < 0)
  goto err_runtime_disable;

 VAR_16 = FUNC_17(VAR_13->of_node, ((void*)0), ((void*)0), VAR_13);
 if (VAR_16)
  goto err_runtime_disable;

 VAR_16 = FUNC_31(VAR_14);
 if (VAR_16)
  goto err_runtime_disable;

 VAR_16 = FUNC_28(VAR_14);
 if (VAR_16)
  goto err_runtime_disable;

 VAR_16 = FUNC_12(VAR_14, 1);
 if (VAR_16)
  goto err_venus_shutdown;

 VAR_16 = FUNC_11(VAR_14);
 if (VAR_16)
  goto err_venus_shutdown;

 VAR_16 = FUNC_30(VAR_14, VAR_6);
 if (VAR_16)
  goto err_venus_shutdown;

 VAR_16 = FUNC_30(VAR_14, VAR_7);
 if (VAR_16)
  goto err_venus_shutdown;

 VAR_16 = FUNC_26(VAR_13, &VAR_14->v4l2_dev);
 if (VAR_16)
  goto err_core_deinit;

 VAR_16 = FUNC_24(VAR_13);
 if (VAR_16)
  goto err_dev_unregister;

 return 0;

err_dev_unregister:
 FUNC_27(&VAR_14->v4l2_dev);
err_core_deinit:
 FUNC_10(VAR_14, 0);
err_venus_shutdown:
 FUNC_32(VAR_14);
err_runtime_disable:
 FUNC_25(VAR_13);
 FUNC_21(VAR_13);
 FUNC_14(VAR_14);
 return VAR_16;
}
