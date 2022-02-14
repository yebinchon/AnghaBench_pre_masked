
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct softing_priv {int index; } ;
struct softing_platform_data {int nbus; int name; int freq; } ;
struct TYPE_10__ {int * chip; int freq; } ;
struct TYPE_9__ {int nr; } ;
struct TYPE_8__ {int lock; } ;
struct softing {int dpram; struct net_device** net; struct softing_platform_data const* pdat; struct platform_device* pdev; TYPE_3__ id; TYPE_2__ irq; int dpram_size; int dpram_phys; int spin; TYPE_1__ fw; } ;
struct resource {int start; } ;
struct TYPE_11__ {int kobj; } ;
struct platform_device {TYPE_4__ dev; } ;
struct net_device {int dev_id; } ;


 int FUNC_0 (struct net_device**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_4__*,char*,...) ;
 struct softing_platform_data* FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,char*,int ) ;
 int FUNC_4 (TYPE_4__*,char*,...) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct softing*) ;
 struct softing* FUNC_9 (int,int ) ;
 int FUNC_10 (int *) ;
 struct softing_priv* FUNC_11 (struct net_device*) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (struct platform_device*,struct softing*) ;
 int FUNC_14 (struct resource*) ;
 int FUNC_15 (struct softing*) ;
 int FUNC_16 (struct softing*) ;
 int FUNC_17 (struct net_device*) ;
 struct net_device* FUNC_18 (struct softing*,int ) ;
 int FUNC_19 (struct net_device*) ;
 int VAR_5 ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,int *) ;
 int FUNC_22 (int *,int *) ;

__attribute__((used)) static int FUNC_23(struct platform_device *VAR_6)
{
 const struct softing_platform_data *VAR_7 = FUNC_2(&VAR_6->dev);
 struct softing *VAR_8;
 struct net_device *VAR_9;
 struct softing_priv *VAR_10;
 struct resource *VAR_11;
 int VAR_12;
 int VAR_13;

 if (!VAR_7) {
  FUNC_4(&VAR_6->dev, "no platform data\n");
  return -VAR_0;
 }
 if (VAR_7->nbus > FUNC_0(VAR_8->net)) {
  FUNC_4(&VAR_6->dev, "%u nets??\n", VAR_7->nbus);
  return -VAR_0;
 }

 VAR_8 = FUNC_9(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;
 VAR_8->pdat = VAR_7;
 VAR_8->pdev = VAR_6;
 FUNC_13(VAR_6, VAR_8);
 FUNC_10(&VAR_8->fw.lock);
 FUNC_20(&VAR_8->spin);

 VAR_12 = -VAR_0;
 VAR_11 = FUNC_12(VAR_6, VAR_4, 0);
 if (!VAR_11)
  goto platform_resource_failed;
 VAR_8->dpram_phys = VAR_11->start;
 VAR_8->dpram_size = FUNC_14(VAR_11);
 VAR_8->dpram = FUNC_6(VAR_8->dpram_phys, VAR_8->dpram_size);
 if (!VAR_8->dpram) {
  FUNC_1(&VAR_8->pdev->dev, "dpram ioremap failed\n");
  goto ioremap_failed;
 }

 VAR_11 = FUNC_12(VAR_6, VAR_3, 0);
 if (VAR_11)
  VAR_8->irq.nr = VAR_11->start;


 VAR_12 = FUNC_15(VAR_8);
 if (VAR_12 < 0) {
  FUNC_1(&VAR_6->dev, "failed to boot\n");
  goto boot_failed;
 }


 VAR_8->id.freq = VAR_8->pdat->freq;

 VAR_12 = FUNC_21(&VAR_6->dev.kobj, &VAR_5);
 if (VAR_12 < 0) {
  FUNC_1(&VAR_8->pdev->dev, "sysfs failed\n");
  goto sysfs_failed;
 }

 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_8->net); ++VAR_13) {
  VAR_8->net[VAR_13] = VAR_9 =
   FUNC_18(VAR_8, VAR_8->id.chip[VAR_13]);
  if (!VAR_9) {
   FUNC_1(&VAR_6->dev, "failed to make can[%i]", VAR_13);
   VAR_12 = -VAR_1;
   goto netdev_failed;
  }
  VAR_9->dev_id = VAR_13;
  VAR_10 = FUNC_11(VAR_8->net[VAR_13]);
  VAR_10->index = VAR_13;
  VAR_12 = FUNC_19(VAR_9);
  if (VAR_12) {
   FUNC_5(VAR_9);
   VAR_8->net[VAR_13] = ((void*)0);
   FUNC_1(&VAR_8->pdev->dev,
     "failed to register can[%i]\n", VAR_13);
   goto netdev_failed;
  }
 }
 FUNC_3(&VAR_8->pdev->dev, "%s ready.\n", VAR_8->pdat->name);
 return 0;

netdev_failed:
 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_8->net); ++VAR_13) {
  if (!VAR_8->net[VAR_13])
   continue;
  FUNC_17(VAR_8->net[VAR_13]);
 }
 FUNC_22(&VAR_6->dev.kobj, &VAR_5);
sysfs_failed:
 FUNC_16(VAR_8);
boot_failed:
 FUNC_7(VAR_8->dpram);
ioremap_failed:
platform_resource_failed:
 FUNC_8(VAR_8);
 return VAR_12;
}
