
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int device; int vendor; int dev; } ;
struct TYPE_6__ {struct brcmf_pciedev_info* pcie; } ;
struct brcmf_pciedev_info {scalar_t__ settings; TYPE_2__* ci; struct brcmf_pciedev_info* msgbuf; int * dev; struct pci_dev* pdev; int wowl_supported; int coreid; int chip; int proto_type; int * ops; TYPE_1__ bus_priv; struct brcmf_pciedev_info* bus; struct brcmf_pciedev_info* devinfo; } ;
struct brcmf_pciedev {scalar_t__ settings; TYPE_2__* ci; struct brcmf_pciedev* msgbuf; int * dev; struct pci_dev* pdev; int wowl_supported; int coreid; int chip; int proto_type; int * ops; TYPE_1__ bus_priv; struct brcmf_pciedev* bus; struct brcmf_pciedev* devinfo; } ;
struct brcmf_fw_request {scalar_t__ settings; TYPE_2__* ci; struct brcmf_fw_request* msgbuf; int * dev; struct pci_dev* pdev; int wowl_supported; int coreid; int chip; int proto_type; int * ops; TYPE_1__ bus_priv; struct brcmf_fw_request* bus; struct brcmf_fw_request* devinfo; } ;
struct brcmf_bus {scalar_t__ settings; TYPE_2__* ci; struct brcmf_bus* msgbuf; int * dev; struct pci_dev* pdev; int wowl_supported; int coreid; int chip; int proto_type; int * ops; TYPE_1__ bus_priv; struct brcmf_bus* bus; struct brcmf_bus* devinfo; } ;
struct TYPE_7__ {int chiprev; int chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,scalar_t__) ;
 TYPE_2__* FUNC_3 (struct brcmf_pciedev_info*,int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,char*,int ,int ) ;
 int FUNC_6 (int *,char*,int ,int ) ;
 int FUNC_7 (int *,struct brcmf_pciedev_info*,int ) ;
 scalar_t__ FUNC_8 (int *,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 struct brcmf_pciedev_info* FUNC_9 (struct brcmf_pciedev_info*) ;
 int FUNC_10 (struct brcmf_pciedev_info*) ;
 int VAR_8 ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int *,struct brcmf_pciedev_info*) ;
 int FUNC_13 (struct brcmf_pciedev_info*) ;
 void* FUNC_14 (int,int ) ;
 int FUNC_15 (struct pci_dev*,int ) ;

__attribute__((used)) static int
FUNC_16(struct pci_dev *VAR_9, const struct pci_device_id *VAR_10)
{
 int VAR_11;
 struct brcmf_fw_request *VAR_12;
 struct brcmf_pciedev_info *VAR_13;
 struct brcmf_pciedev *VAR_14;
 struct brcmf_bus *VAR_15;

 FUNC_5(VAR_4, "Enter %x:%x\n", VAR_9->vendor, VAR_9->device);

 VAR_11 = -VAR_2;
 VAR_13 = FUNC_14(sizeof(*VAR_13), VAR_3);
 if (VAR_13 == ((void*)0))
  return VAR_11;

 VAR_13->pdev = VAR_9;
 VAR_14 = ((void*)0);
 VAR_13->ci = FUNC_3(VAR_13, &VAR_7);
 if (FUNC_0(VAR_13->ci)) {
  VAR_11 = FUNC_1(VAR_13->ci);
  VAR_13->ci = ((void*)0);
  goto fail;
 }

 VAR_14 = FUNC_14(sizeof(*VAR_14), VAR_3);
 if (VAR_14 == ((void*)0)) {
  VAR_11 = -VAR_2;
  goto fail;
 }

 VAR_13->settings = FUNC_8(&VAR_13->pdev->dev,
         VAR_0,
         VAR_13->ci->chip,
         VAR_13->ci->chiprev);
 if (!VAR_13->settings) {
  VAR_11 = -VAR_2;
  goto fail;
 }

 VAR_15 = FUNC_14(sizeof(*VAR_15), VAR_3);
 if (!VAR_15) {
  VAR_11 = -VAR_2;
  goto fail;
 }
 VAR_15->msgbuf = FUNC_14(sizeof(*VAR_15->msgbuf), VAR_3);
 if (!VAR_15->msgbuf) {
  VAR_11 = -VAR_2;
  FUNC_13(VAR_15);
  goto fail;
 }


 VAR_14->devinfo = VAR_13;
 VAR_14->bus = VAR_15;
 VAR_15->dev = &VAR_9->dev;
 VAR_15->bus_priv.pcie = VAR_14;
 VAR_15->ops = &VAR_6;
 VAR_15->proto_type = VAR_1;
 VAR_15->chip = VAR_13->coreid;
 VAR_15->wowl_supported = FUNC_15(VAR_9, VAR_5);
 FUNC_12(&VAR_9->dev, VAR_15);

 VAR_11 = FUNC_2(&VAR_13->pdev->dev, VAR_13->settings);
 if (VAR_11)
  goto fail_bus;

 VAR_12 = FUNC_9(VAR_13);
 if (!VAR_12) {
  VAR_11 = -VAR_2;
  goto fail_bus;
 }

 VAR_11 = FUNC_7(VAR_15->dev, VAR_12, VAR_8);
 if (VAR_11 < 0) {
  FUNC_13(VAR_12);
  goto fail_bus;
 }
 return 0;

fail_bus:
 FUNC_13(VAR_15->msgbuf);
 FUNC_13(VAR_15);
fail:
 FUNC_6(((void*)0), "failed %x:%x\n", VAR_9->vendor, VAR_9->device);
 FUNC_10(VAR_13);
 if (VAR_13->ci)
  FUNC_4(VAR_13->ci);
 if (VAR_13->settings)
  FUNC_11(VAR_13->settings);
 FUNC_13(VAR_14);
 FUNC_13(VAR_13);
 return VAR_11;
}
