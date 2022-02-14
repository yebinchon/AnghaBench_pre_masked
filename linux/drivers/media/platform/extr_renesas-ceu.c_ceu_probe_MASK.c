
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {scalar_t__ platform_data; scalar_t__ of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_5__ {int * ops; int * v4l2_dev; } ;
struct ceu_device {int v4l2_dev; TYPE_1__ notifier; int irq_mask; int base; int mlock; int lock; int capture; struct device* dev; } ;
struct ceu_data {int irq_mask; } ;
struct TYPE_6__ {struct ceu_data* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct ceu_data VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct ceu_device*) ;
 int FUNC_5 (struct ceu_device*,scalar_t__) ;
 int FUNC_6 (struct device*,char*) ;
 int FUNC_7 (struct device*,char*,int ) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*,struct resource*) ;
 int FUNC_10 (struct device*,unsigned int,int ,int ,int ,struct ceu_device*) ;
 int FUNC_11 (struct ceu_device*) ;
 struct ceu_device* FUNC_12 (int,int ) ;
 int FUNC_13 (int *) ;
 TYPE_4__* FUNC_14 (int ,struct device*) ;
 int FUNC_15 (struct platform_device*,int ) ;
 struct resource* FUNC_16 (struct platform_device*,int ,int ) ;
 int FUNC_17 (struct platform_device*,struct ceu_device*) ;
 int FUNC_18 (struct device*) ;
 int FUNC_19 (struct device*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (TYPE_1__*) ;
 int FUNC_22 (TYPE_1__*) ;
 int FUNC_23 (int *,TYPE_1__*) ;
 int FUNC_24 (struct device*,int *) ;
 int FUNC_25 (int *) ;

__attribute__((used)) static int FUNC_26(struct platform_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 const struct ceu_data *VAR_11;
 struct ceu_device *VAR_12;
 struct resource *VAR_13;
 unsigned int VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_12 = FUNC_12(sizeof(*VAR_12), VAR_3);
 if (!VAR_12)
  return -VAR_2;

 FUNC_17(VAR_9, VAR_12);
 VAR_12->dev = VAR_10;

 FUNC_0(&VAR_12->capture);
 FUNC_20(&VAR_12->lock);
 FUNC_13(&VAR_12->mlock);

 VAR_13 = FUNC_16(VAR_9, VAR_4, 0);
 VAR_12->base = FUNC_9(VAR_10, VAR_13);
 if (FUNC_2(VAR_12->base)) {
  VAR_16 = FUNC_3(VAR_12->base);
  goto error_free_ceudev;
 }

 VAR_16 = FUNC_15(VAR_9, 0);
 if (VAR_16 < 0)
  goto error_free_ceudev;
 VAR_14 = VAR_16;

 VAR_16 = FUNC_10(VAR_10, VAR_14, VAR_6,
          0, FUNC_8(VAR_10), VAR_12);
 if (VAR_16) {
  FUNC_6(&VAR_9->dev, "Unable to request CEU interrupt.\n");
  goto error_free_ceudev;
 }

 FUNC_19(VAR_10);

 VAR_16 = FUNC_24(VAR_10, &VAR_12->v4l2_dev);
 if (VAR_16)
  goto error_pm_disable;

 FUNC_22(&VAR_12->notifier);

 if (FUNC_1(VAR_0) && VAR_10->of_node) {
  VAR_11 = FUNC_14(VAR_8, VAR_10)->data;
  VAR_15 = FUNC_4(VAR_12);
 } else if (VAR_10->platform_data) {

  VAR_11 = &VAR_5;
  VAR_15 = FUNC_5(VAR_12,
            VAR_10->platform_data);
 } else {
  VAR_15 = -VAR_1;
 }

 if (VAR_15 < 0) {
  VAR_16 = VAR_15;
  goto error_v4l2_unregister;
 }
 VAR_12->irq_mask = VAR_11->irq_mask;

 VAR_12->notifier.v4l2_dev = &VAR_12->v4l2_dev;
 VAR_12->notifier.ops = &VAR_7;
 VAR_16 = FUNC_23(&VAR_12->v4l2_dev,
        &VAR_12->notifier);
 if (VAR_16)
  goto error_cleanup;

 FUNC_7(VAR_10, "Renesas Capture Engine Unit %s\n", FUNC_8(VAR_10));

 return 0;

error_cleanup:
 FUNC_21(&VAR_12->notifier);
error_v4l2_unregister:
 FUNC_25(&VAR_12->v4l2_dev);
error_pm_disable:
 FUNC_18(VAR_10);
error_free_ceudev:
 FUNC_11(VAR_12);

 return VAR_16;
}
