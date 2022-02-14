
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct resource {int dummy; } ;
struct map_info {int bankwidth; int copy_from; int copy_to; int write; int read; struct device_node* device_node; int name; int virt; int size; } ;
struct hyperbus_ops {int (* calibrate ) (struct hyperbus_device*) ;scalar_t__ copy_from; scalar_t__ copy_to; scalar_t__ write16; scalar_t__ read16; } ;
struct hyperbus_device {TYPE_2__* mtd; struct map_info map; int memtype; struct hyperbus_ctlr* ctlr; struct device_node* np; } ;
struct hyperbus_ctlr {int calibrated; struct hyperbus_ops* ops; struct device* dev; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_6__ {struct device* parent; } ;
struct TYPE_7__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,struct resource*) ;
 TYPE_2__* FUNC_5 (char*,struct map_info*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int *,int ) ;
 int FUNC_8 (TYPE_2__*,struct device_node*) ;
 int FUNC_9 (struct device_node*,int ,struct resource*) ;
 int FUNC_10 (struct device_node*,char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (struct resource*) ;
 int FUNC_13 (struct map_info*) ;
 int FUNC_14 (struct hyperbus_device*) ;

int FUNC_15(struct hyperbus_device *VAR_7)
{
 const struct hyperbus_ops *VAR_8;
 struct hyperbus_ctlr *VAR_9;
 struct device_node *VAR_10;
 struct map_info *VAR_11;
 struct resource VAR_12;
 struct device *VAR_13;
 int VAR_14;

 if (!VAR_7 || !VAR_7->np || !VAR_7->ctlr || !VAR_7->ctlr->dev) {
  FUNC_11("hyperbus: please fill all the necessary fields!\n");
  return -VAR_0;
 }

 VAR_10 = VAR_7->np;
 VAR_9 = VAR_7->ctlr;
 if (!FUNC_10(VAR_10, "cypress,hyperflash"))
  return -VAR_1;

 VAR_7->memtype = VAR_2;

 VAR_14 = FUNC_9(VAR_10, 0, &VAR_12);
 if (VAR_14)
  return VAR_14;

 VAR_13 = VAR_9->dev;
 VAR_11 = &VAR_7->map;
 VAR_11->size = FUNC_12(&VAR_12);
 VAR_11->virt = FUNC_4(VAR_13, &VAR_12);
 if (FUNC_0(VAR_11->virt))
  return FUNC_1(VAR_11->virt);

 VAR_11->name = FUNC_3(VAR_13);
 VAR_11->bankwidth = 2;
 VAR_11->device_node = VAR_10;

 FUNC_13(VAR_11);
 VAR_8 = VAR_9->ops;
 if (VAR_8) {
  if (VAR_8->read16)
   VAR_11->read = VAR_5;
  if (VAR_8->write16)
   VAR_11->write = VAR_6;
  if (VAR_8->copy_to)
   VAR_11->copy_to = VAR_4;
  if (VAR_8->copy_from)
   VAR_11->copy_from = VAR_3;

  if (VAR_8->calibrate && !VAR_9->calibrated) {
   VAR_14 = VAR_8->calibrate(VAR_7);
   if (!VAR_14) {
    FUNC_2(VAR_13, "Calibration failed\n");
    return -VAR_1;
   }
   VAR_9->calibrated = 1;
  }
 }

 VAR_7->mtd = FUNC_5("cfi_probe", VAR_11);
 if (!VAR_7->mtd) {
  FUNC_2(VAR_13, "probing of hyperbus device failed\n");
  return -VAR_1;
 }

 VAR_7->mtd->dev.parent = VAR_13;
 FUNC_8(VAR_7->mtd, VAR_10);

 VAR_14 = FUNC_7(VAR_7->mtd, ((void*)0), 0);
 if (VAR_14) {
  FUNC_2(VAR_13, "failed to register mtd device\n");
  FUNC_6(VAR_7->mtd);
  return VAR_14;
 }

 return 0;
}
