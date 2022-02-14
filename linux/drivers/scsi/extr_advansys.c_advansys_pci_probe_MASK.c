
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {scalar_t__ device; int dev; int irq; } ;
struct asc_board {int flags; struct Scsi_Host* shost; int * dev; int irq; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct Scsi_Host*,int,int ) ;
 int FUNC_1 (struct pci_dev*) ;
 int VAR_8 ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (struct pci_dev*,int ) ;
 int FUNC_8 (struct pci_dev*,struct Scsi_Host*) ;
 int FUNC_9 (struct pci_dev*) ;
 struct Scsi_Host* FUNC_10 (int *,int) ;
 int FUNC_11 (struct Scsi_Host*) ;
 struct asc_board* FUNC_12 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_13(struct pci_dev *VAR_9,
         const struct pci_device_id *VAR_10)
{
 int VAR_11, VAR_12;
 struct Scsi_Host *VAR_13;
 struct asc_board *VAR_14;

 VAR_11 = FUNC_3(VAR_9);
 if (VAR_11)
  goto fail;
 VAR_11 = FUNC_5(VAR_9, VAR_2);
 if (VAR_11)
  goto disable_device;
 FUNC_9(VAR_9);
 FUNC_1(VAR_9);

 VAR_11 = -VAR_3;
 if (FUNC_6(VAR_9, 0) == 0)
  goto release_region;

 VAR_12 = FUNC_7(VAR_9, 0);

 VAR_11 = -VAR_4;
 VAR_13 = FUNC_10(&VAR_8, sizeof(*VAR_14));
 if (!VAR_13)
  goto release_region;

 VAR_14 = FUNC_12(VAR_13);
 VAR_14->irq = VAR_9->irq;
 VAR_14->dev = &VAR_9->dev;
 VAR_14->shost = VAR_13;

 if (VAR_9->device == VAR_7 ||
     VAR_9->device == VAR_5 ||
     VAR_9->device == VAR_6) {
  VAR_14->flags |= VAR_1;
 }

 VAR_11 = FUNC_0(VAR_13, VAR_12, VAR_0);
 if (VAR_11)
  goto free_host;

 FUNC_8(VAR_9, VAR_13);
 return 0;

 free_host:
 FUNC_11(VAR_13);
 release_region:
 FUNC_4(VAR_9);
 disable_device:
 FUNC_2(VAR_9);
 fail:
 return VAR_11;
}
