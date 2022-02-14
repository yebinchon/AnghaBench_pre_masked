
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wd719x {int base; struct pci_dev* pdev; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct Scsi_Host {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int ,int ) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*,char*) ;
 scalar_t__ FUNC_9 (struct pci_dev*,int ) ;
 int FUNC_10 (struct pci_dev*,struct Scsi_Host*) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct Scsi_Host*,int *) ;
 struct Scsi_Host* FUNC_13 (int *,int) ;
 int FUNC_14 (struct Scsi_Host*) ;
 int FUNC_15 (struct Scsi_Host*) ;
 struct wd719x* FUNC_16 (struct Scsi_Host*) ;
 int FUNC_17 (struct Scsi_Host*) ;
 int FUNC_18 (struct wd719x*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_19(struct pci_dev *VAR_3, const struct pci_device_id *VAR_4)
{
 int VAR_5;
 struct Scsi_Host *VAR_6;
 struct wd719x *VAR_7;

 VAR_5 = FUNC_4(VAR_3);
 if (VAR_5)
  goto fail;

 if (FUNC_2(&VAR_3->dev, FUNC_0(32))) {
  FUNC_1(&VAR_3->dev, "Unable to set 32-bit DMA mask\n");
  goto disable_device;
 }

 VAR_5 = FUNC_8(VAR_3, "wd719x");
 if (VAR_5)
  goto disable_device;
 FUNC_11(VAR_3);

 VAR_5 = -VAR_0;
 if (FUNC_9(VAR_3, 0) == 0)
  goto release_region;

 VAR_5 = -VAR_1;
 VAR_6 = FUNC_13(&VAR_2, sizeof(struct wd719x));
 if (!VAR_6)
  goto release_region;

 VAR_7 = FUNC_16(VAR_6);
 VAR_7->base = FUNC_5(VAR_3, 0, 0);
 if (!VAR_7->base)
  goto free_host;
 VAR_7->pdev = VAR_3;

 VAR_5 = FUNC_17(VAR_6);
 if (VAR_5)
  goto unmap;

 VAR_5 = FUNC_12(VAR_6, &VAR_7->pdev->dev);
 if (VAR_5)
  goto destroy;

 FUNC_15(VAR_6);

 FUNC_10(VAR_3, VAR_6);
 return 0;

destroy:
 FUNC_18(VAR_7);
unmap:
 FUNC_6(VAR_3, VAR_7->base);
free_host:
 FUNC_14(VAR_6);
release_region:
 FUNC_7(VAR_3);
disable_device:
 FUNC_3(VAR_3);
fail:
 return VAR_5;
}
