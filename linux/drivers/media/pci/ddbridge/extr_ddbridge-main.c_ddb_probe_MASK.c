
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_device_id {int vendor; int device; int subvendor; } ;
struct pci_dev {int dev; int subsystem_device; } ;
struct ddb {int has_dma; TYPE_2__* link; int regs; struct pci_dev* pdev; int regs_len; int * dev; int mutex; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_4__ {int vendor; int device; int devid; int hwid; int regmapid; int subdevice; int subvendor; } ;
struct TYPE_5__ {TYPE_1__ ids; TYPE_3__* info; struct ddb* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct ddb*) ;
 int FUNC_2 (struct ddb*) ;
 int FUNC_3 (struct ddb*) ;
 int FUNC_4 (struct ddb*) ;
 int FUNC_5 (struct ddb*) ;
 int FUNC_6 (struct ddb*,int) ;
 int FUNC_7 (struct ddb*,int ,int ) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,char*,int,...) ;
 TYPE_3__* FUNC_10 (int,int,int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct pci_dev*) ;
 scalar_t__ FUNC_14 (struct pci_dev*) ;
 int FUNC_15 (struct pci_dev*,int ) ;
 int FUNC_16 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_17 (struct pci_dev*,int ) ;
 int FUNC_18 (struct pci_dev*,struct ddb*) ;
 int FUNC_19 (struct pci_dev*) ;
 struct ddb* FUNC_20 (int) ;

__attribute__((used)) static int FUNC_21(struct pci_dev *VAR_4,
       const struct pci_device_id *VAR_5)
{
 struct ddb *VAR_6;
 int VAR_7 = 0;

 if (FUNC_14(VAR_4) < 0)
  return -VAR_2;

 FUNC_19(VAR_4);

 if (FUNC_17(VAR_4, FUNC_0(64)))
  if (FUNC_17(VAR_4, FUNC_0(32)))
   return -VAR_2;

 VAR_6 = FUNC_20(sizeof(*VAR_6));
 if (!VAR_6)
  return -VAR_3;

 FUNC_12(&VAR_6->mutex);
 VAR_6->has_dma = 1;
 VAR_6->pdev = VAR_4;
 VAR_6->dev = &VAR_4->dev;
 FUNC_18(VAR_4, VAR_6);

 VAR_6->link[0].ids.vendor = VAR_5->vendor;
 VAR_6->link[0].ids.device = VAR_5->device;
 VAR_6->link[0].ids.subvendor = VAR_5->subvendor;
 VAR_6->link[0].ids.subdevice = VAR_4->subsystem_device;
 VAR_6->link[0].ids.devid = (VAR_5->device << 16) | VAR_5->vendor;

 VAR_6->link[0].dev = VAR_6;
 VAR_6->link[0].info = FUNC_10(VAR_5->vendor, VAR_5->device,
      VAR_5->subvendor, VAR_4->subsystem_device);

 FUNC_9(&VAR_4->dev, "detected %s\n", VAR_6->link[0].info->name);

 VAR_6->regs_len = FUNC_15(VAR_6->pdev, 0);
 VAR_6->regs = FUNC_11(FUNC_16(VAR_6->pdev, 0),
       FUNC_15(VAR_6->pdev, 0));

 if (!VAR_6->regs) {
  FUNC_8(&VAR_4->dev, "not enough memory for register map\n");
  VAR_7 = -VAR_3;
  goto fail;
 }
 if (FUNC_6(VAR_6, 0) == 0xffffffff) {
  FUNC_8(&VAR_4->dev, "cannot read registers\n");
  VAR_7 = -VAR_2;
  goto fail;
 }

 VAR_6->link[0].ids.hwid = FUNC_6(VAR_6, 0);
 VAR_6->link[0].ids.regmapid = FUNC_6(VAR_6, 4);

 FUNC_9(&VAR_4->dev, "HW %08x REGMAP %08x\n",
   VAR_6->link[0].ids.hwid, VAR_6->link[0].ids.regmapid);

 FUNC_7(VAR_6, 0, VAR_0);
 FUNC_7(VAR_6, 0, VAR_1);

 VAR_7 = FUNC_3(VAR_6);
 if (VAR_7 < 0)
  goto fail0;

 if (FUNC_1(VAR_6) == 0)
  return 0;

 FUNC_2(VAR_6);
fail0:
 FUNC_8(&VAR_4->dev, "fail0\n");
 FUNC_4(VAR_6);
fail:
 FUNC_8(&VAR_4->dev, "fail\n");

 FUNC_5(VAR_6);
 FUNC_18(VAR_4, ((void*)0));
 FUNC_13(VAR_4);
 return -1;
}
