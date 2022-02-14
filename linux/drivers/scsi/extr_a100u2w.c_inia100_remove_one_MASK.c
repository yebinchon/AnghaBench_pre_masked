
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct orc_scb {int dummy; } ;
struct orc_host {int scb_phys; int scb_virt; int escb_phys; int escb_virt; } ;
struct orc_extended_scb {int dummy; } ;
struct Scsi_Host {int io_port; int irq; scalar_t__ hostdata; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ,int ) ;
 int FUNC_1 (int ,struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct Scsi_Host*) ;
 int FUNC_5 (struct Scsi_Host*) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_1)
{
 struct Scsi_Host *VAR_2 = FUNC_2(VAR_1);
 struct orc_host *VAR_3 = (struct orc_host *)VAR_2->hostdata;

 FUNC_5(VAR_2);

        FUNC_1(VAR_2->irq, VAR_2);
 FUNC_0(&VAR_1->dev,
   VAR_0 * sizeof(struct orc_extended_scb),
   VAR_3->escb_virt, VAR_3->escb_phys);
 FUNC_0(&VAR_1->dev,
   VAR_0 * sizeof(struct orc_scb),
   VAR_3->scb_virt, VAR_3->scb_phys);
        FUNC_3(VAR_2->io_port, 256);

 FUNC_4(VAR_2);
}
