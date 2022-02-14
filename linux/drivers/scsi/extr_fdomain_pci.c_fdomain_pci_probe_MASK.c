
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; int irq; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 struct Scsi_Host* FUNC_0 (int ,int ,int,int *) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,char*) ;
 scalar_t__ FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (struct pci_dev*,struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_8(struct pci_dev *VAR_1,
        const struct pci_device_id *VAR_2)
{
 int VAR_3;
 struct Scsi_Host *VAR_4;

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3)
  goto fail;

 VAR_3 = FUNC_4(VAR_1, "fdomain_pci");
 if (VAR_3)
  goto disable_device;

 VAR_3 = -VAR_0;
 if (FUNC_5(VAR_1, 0) == 0)
  goto release_region;

 VAR_4 = FUNC_0(FUNC_6(VAR_1, 0), VAR_1->irq, 7,
       &VAR_1->dev);
 if (!VAR_4)
  goto release_region;

 FUNC_7(VAR_1, VAR_4);
 return 0;

release_region:
 FUNC_3(VAR_1);
disable_device:
 FUNC_1(VAR_1);
fail:
 return VAR_3;
}
