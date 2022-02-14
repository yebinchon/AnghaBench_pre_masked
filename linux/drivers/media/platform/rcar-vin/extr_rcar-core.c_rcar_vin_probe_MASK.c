
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct soc_device_attribute {TYPE_4__* data; } ;
struct rvin_dev {int alpha; TYPE_1__* group; int v4l2_dev; TYPE_4__* info; int ctrl_handler; int base; int * dev; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct TYPE_7__ {scalar_t__ use_mc; } ;
struct TYPE_6__ {int * v4l2_dev; } ;
struct TYPE_5__ {int lock; TYPE_2__ notifier; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct resource*) ;
 struct rvin_dev* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_4__* FUNC_6 (int *) ;
 int FUNC_7 (struct platform_device*,int ) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct platform_device*,struct rvin_dev*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;
 int VAR_4 ;
 int FUNC_12 (struct rvin_dev*,int) ;
 int FUNC_13 (struct rvin_dev*) ;
 int FUNC_14 (struct rvin_dev*) ;
 int FUNC_15 (struct rvin_dev*) ;
 int FUNC_16 (struct rvin_dev*) ;
 struct soc_device_attribute* FUNC_17 (int ) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_5)
{
 const struct soc_device_attribute *VAR_6;
 struct rvin_dev *VAR_7;
 struct resource *VAR_8;
 int VAR_9, VAR_10;

 VAR_7 = FUNC_3(&VAR_5->dev, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->dev = &VAR_5->dev;
 VAR_7->info = FUNC_6(&VAR_5->dev);
 VAR_7->alpha = 0xff;





 VAR_6 = FUNC_17(VAR_4);
 if (VAR_6)
  VAR_7->info = VAR_6->data;

 VAR_8 = FUNC_8(VAR_5, VAR_3, 0);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 VAR_7->base = FUNC_2(VAR_7->dev, VAR_8);
 if (FUNC_0(VAR_7->base))
  return FUNC_1(VAR_7->base);

 VAR_9 = FUNC_7(VAR_5, 0);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_10 = FUNC_12(VAR_7, VAR_9);
 if (VAR_10)
  return VAR_10;

 FUNC_9(VAR_5, VAR_7);

 if (VAR_7->info->use_mc) {
  VAR_10 = FUNC_15(VAR_7);
  if (VAR_10)
   goto error_dma_unregister;
 }

 VAR_10 = FUNC_16(VAR_7);
 if (VAR_10)
  goto error_group_unregister;

 FUNC_11(&VAR_5->dev, 1);
 FUNC_10(&VAR_5->dev);

 return 0;

error_group_unregister:
 FUNC_20(&VAR_7->ctrl_handler);

 if (VAR_7->info->use_mc) {
  FUNC_4(&VAR_7->group->lock);
  if (&VAR_7->v4l2_dev == VAR_7->group->notifier.v4l2_dev) {
   FUNC_19(&VAR_7->group->notifier);
   FUNC_18(&VAR_7->group->notifier);
  }
  FUNC_5(&VAR_7->group->lock);
  FUNC_14(VAR_7);
 }

error_dma_unregister:
 FUNC_13(VAR_7);

 return VAR_10;
}
