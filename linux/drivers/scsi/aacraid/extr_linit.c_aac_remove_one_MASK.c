
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct aac_dev {int entry; int fsa_dev; int fibs; int queues; int comm_phys; int comm_addr; int comm_size; TYPE_1__* pdev; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct aac_dev*) ;
 int FUNC_1 (struct aac_dev*,int ) ;
 int FUNC_2 (struct aac_dev*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct aac_dev*) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (struct pci_dev*) ;
 struct Scsi_Host* FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct Scsi_Host*) ;
 int FUNC_11 (struct Scsi_Host*) ;
 int FUNC_12 (int ,char*) ;

__attribute__((used)) static void FUNC_13(struct pci_dev *VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_9(VAR_3);
 struct aac_dev *VAR_5 = (struct aac_dev *)VAR_4->hostdata;

 FUNC_2(VAR_5);
 FUNC_11(VAR_4);

 FUNC_0(VAR_5);
 FUNC_3(VAR_5);
 FUNC_4(&VAR_5->pdev->dev, VAR_5->comm_size, VAR_5->comm_addr,
     VAR_5->comm_phys);
 FUNC_5(VAR_5->queues);

 FUNC_1(VAR_5, 0);

 FUNC_5(VAR_5->fibs);
 FUNC_5(VAR_5->fsa_dev);

 FUNC_6(&VAR_5->entry);
 FUNC_10(VAR_4);
 FUNC_8(VAR_3);
 if (FUNC_7(&VAR_2)) {
  FUNC_12(VAR_1, "aac");
  VAR_1 = VAR_0;
 }
}
