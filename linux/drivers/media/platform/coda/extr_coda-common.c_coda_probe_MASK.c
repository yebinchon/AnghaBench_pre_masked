
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


struct platform_device_id {size_t driver_data; scalar_t__ product; int iram_size; scalar_t__ tempbuf_size; scalar_t__ workbuf_size; } ;
struct TYPE_17__ {struct device_node* of_node; struct coda_platform_data* platform_data; } ;
struct platform_device {TYPE_2__ dev; } ;
struct of_device_id {struct platform_device_id* data; } ;
struct gen_pool {int dummy; } ;
struct device_node {int dummy; } ;
struct coda_platform_data {int iram_dev; } ;
struct TYPE_15__ {int size; scalar_t__ data; } ;
struct TYPE_16__ {TYPE_14__ blob; int dentry; int size; scalar_t__ vaddr; int paddr; } ;
struct coda_dev {int v4l2_dev; int workqueue; TYPE_1__ iram; int debugfs_root; struct gen_pool* iram_pool; struct platform_device_id* devtype; int tempbuf; int workbuf; int ida; int coda_mutex; int dev_mutex; void* vdoa; void* rstc; void* regs_base; void* clk_ahb; void* clk_per; TYPE_2__* dev; int irqlock; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (struct coda_dev*,int *,scalar_t__,char*,int ) ;
 struct platform_device_id* VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct coda_dev*) ;
 void* FUNC_5 () ;
 int VAR_9 ;
 int FUNC_6 (char*,int,int ,TYPE_14__*) ;
 int FUNC_7 (char*,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*,char*,...) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,char*) ;
 void* FUNC_12 (TYPE_2__*,char*) ;
 struct coda_dev* FUNC_13 (TYPE_2__*,int,int ) ;
 void* FUNC_14 (struct platform_device*,int ) ;
 int FUNC_15 (TYPE_2__*,int,int ,int ,int ,struct coda_dev*) ;
 void* FUNC_16 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_17 (struct gen_pool*,int ,int *) ;
 struct gen_pool* FUNC_18 (int ,int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (scalar_t__,int ,int ) ;
 int FUNC_21 (int *) ;
 struct gen_pool* FUNC_22 (struct device_node*,char*,int ) ;
 struct of_device_id* FUNC_23 (int ,TYPE_2__*) ;
 int FUNC_24 (int ) ;
 struct platform_device_id* FUNC_25 (struct platform_device*) ;
 int FUNC_26 (struct platform_device*,int ) ;
 int FUNC_27 (struct platform_device*,char*) ;
 int FUNC_28 (struct platform_device*,struct coda_dev*) ;
 int FUNC_29 (TYPE_2__*) ;
 int FUNC_30 (TYPE_2__*) ;
 int FUNC_31 (TYPE_2__*) ;
 int FUNC_32 (int *) ;
 int FUNC_33 (TYPE_2__*,int *) ;
 int FUNC_34 (int *) ;

__attribute__((used)) static int FUNC_35(struct platform_device *VAR_10)
{
 const struct of_device_id *VAR_11 =
   FUNC_23(FUNC_24(VAR_8), &VAR_10->dev);
 const struct platform_device_id *VAR_12;
 struct coda_platform_data *VAR_13 = VAR_10->dev.platform_data;
 struct device_node *VAR_14 = VAR_10->dev.of_node;
 struct gen_pool *VAR_15;
 struct coda_dev *VAR_16;
 int VAR_17, VAR_18;

 VAR_16 = FUNC_13(&VAR_10->dev, sizeof(*VAR_16), VAR_4);
 if (!VAR_16)
  return -VAR_2;

 VAR_12 = VAR_11 ? VAR_11->data : FUNC_25(VAR_10);

 if (VAR_11)
  VAR_16->devtype = VAR_11->data;
 else if (VAR_12)
  VAR_16->devtype = &VAR_7[VAR_12->driver_data];
 else
  return -VAR_1;

 FUNC_32(&VAR_16->irqlock);

 VAR_16->dev = &VAR_10->dev;
 VAR_16->clk_per = FUNC_12(&VAR_10->dev, "per");
 if (FUNC_0(VAR_16->clk_per)) {
  FUNC_9(&VAR_10->dev, "Could not get per clock\n");
  return FUNC_1(VAR_16->clk_per);
 }

 VAR_16->clk_ahb = FUNC_12(&VAR_10->dev, "ahb");
 if (FUNC_0(VAR_16->clk_ahb)) {
  FUNC_9(&VAR_10->dev, "Could not get ahb clock\n");
  return FUNC_1(VAR_16->clk_ahb);
 }


 VAR_16->regs_base = FUNC_14(VAR_10, 0);
 if (FUNC_0(VAR_16->regs_base))
  return FUNC_1(VAR_16->regs_base);


 VAR_18 = FUNC_27(VAR_10, "bit");
 if (VAR_18 < 0)
  VAR_18 = FUNC_26(VAR_10, 0);
 if (VAR_18 < 0) {
  FUNC_9(&VAR_10->dev, "failed to get irq resource\n");
  return VAR_18;
 }

 VAR_17 = FUNC_15(&VAR_10->dev, VAR_18, VAR_9, 0,
          FUNC_10(&VAR_10->dev), VAR_16);
 if (VAR_17 < 0) {
  FUNC_9(&VAR_10->dev, "failed to request irq: %d\n", VAR_17);
  return VAR_17;
 }

 VAR_16->rstc = FUNC_16(&VAR_10->dev,
             ((void*)0));
 if (FUNC_0(VAR_16->rstc)) {
  VAR_17 = FUNC_1(VAR_16->rstc);
  FUNC_9(&VAR_10->dev, "failed get reset control: %d\n", VAR_17);
  return VAR_17;
 }


 VAR_15 = FUNC_22(VAR_14, "iram", 0);
 if (!VAR_15 && VAR_13)
  VAR_15 = FUNC_18(VAR_13->iram_dev, ((void*)0));
 if (!VAR_15) {
  FUNC_9(&VAR_10->dev, "iram pool not available\n");
  return -VAR_2;
 }
 VAR_16->iram_pool = VAR_15;


 VAR_16->vdoa = FUNC_5();
 if (FUNC_1(VAR_16->vdoa) == -VAR_3)
  return -VAR_3;

 VAR_17 = FUNC_33(&VAR_10->dev, &VAR_16->v4l2_dev);
 if (VAR_17)
  return VAR_17;

 FUNC_21(&VAR_16->dev_mutex);
 FUNC_21(&VAR_16->coda_mutex);
 FUNC_19(&VAR_16->ida);

 VAR_16->debugfs_root = FUNC_7("coda", ((void*)0));
 if (!VAR_16->debugfs_root)
  FUNC_11(&VAR_10->dev, "failed to create debugfs root\n");


 if (VAR_16->devtype->product == VAR_0) {
  VAR_17 = FUNC_3(VAR_16, &VAR_16->workbuf,
      VAR_16->devtype->workbuf_size, "workbuf",
      VAR_16->debugfs_root);
  if (VAR_17 < 0)
   goto err_v4l2_register;
 }

 if (VAR_16->devtype->tempbuf_size) {
  VAR_17 = FUNC_3(VAR_16, &VAR_16->tempbuf,
      VAR_16->devtype->tempbuf_size, "tempbuf",
      VAR_16->debugfs_root);
  if (VAR_17 < 0)
   goto err_v4l2_register;
 }

 VAR_16->iram.size = VAR_16->devtype->iram_size;
 VAR_16->iram.vaddr = FUNC_17(VAR_16->iram_pool, VAR_16->iram.size,
          &VAR_16->iram.paddr);
 if (!VAR_16->iram.vaddr) {
  FUNC_11(&VAR_10->dev, "unable to alloc iram\n");
 } else {
  FUNC_20(VAR_16->iram.vaddr, 0, VAR_16->iram.size);
  VAR_16->iram.blob.data = VAR_16->iram.vaddr;
  VAR_16->iram.blob.size = VAR_16->iram.size;
  VAR_16->iram.dentry = FUNC_6("iram", 0644,
             VAR_16->debugfs_root,
             &VAR_16->iram.blob);
 }

 VAR_16->workqueue = FUNC_2("coda", VAR_6 | VAR_5, 1);
 if (!VAR_16->workqueue) {
  FUNC_9(&VAR_10->dev, "unable to alloc workqueue\n");
  VAR_17 = -VAR_2;
  goto err_v4l2_register;
 }

 FUNC_28(VAR_10, VAR_16);






 FUNC_30(&VAR_10->dev);
 FUNC_31(&VAR_10->dev);
 FUNC_29(&VAR_10->dev);

 VAR_17 = FUNC_4(VAR_16);
 if (VAR_17)
  goto err_alloc_workqueue;
 return 0;

err_alloc_workqueue:
 FUNC_8(VAR_16->workqueue);
err_v4l2_register:
 FUNC_34(&VAR_16->v4l2_dev);
 return VAR_17;
}
