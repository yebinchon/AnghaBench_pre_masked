
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct lpfc_vport {scalar_t__ port_type; int listentry; int fc_vport; int load_flag; struct lpfc_hba* phba; } ;
struct TYPE_4__ {int phys; int virt; } ;
struct TYPE_3__ {int phys; int virt; } ;
struct lpfc_hba {int max_vports; int slim_memmap_p; int ctrl_regs_memmap_p; TYPE_2__ slim2p; TYPE_1__ hbqslimp; scalar_t__ cfg_sriov_nr_virtfn; int port_list_lock; int vpi_ids; int vpi_bmask; int worker_thread; int hbalock; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct lpfc_vport*) ;
 struct lpfc_vport** FUNC_8 (struct lpfc_hba*) ;
 int FUNC_9 (struct lpfc_vport*) ;
 int FUNC_10 (struct lpfc_hba*,struct lpfc_vport**) ;
 int FUNC_11 (struct lpfc_hba*) ;
 int FUNC_12 (struct lpfc_vport*) ;
 int FUNC_13 (struct lpfc_hba*) ;
 int FUNC_14 (struct lpfc_hba*) ;
 int FUNC_15 (struct lpfc_hba*) ;
 int FUNC_16 (struct lpfc_hba*) ;
 int FUNC_17 (struct lpfc_hba*) ;
 int FUNC_18 (struct lpfc_hba*) ;
 int FUNC_19 () ;
 int FUNC_20 (struct lpfc_hba*) ;
 int FUNC_21 (struct pci_dev*) ;
 int FUNC_22 (struct pci_dev*) ;
 struct Scsi_Host* FUNC_23 (struct pci_dev*) ;
 int FUNC_24 (struct pci_dev*) ;
 int FUNC_25 (struct Scsi_Host*) ;
 int FUNC_26 (struct Scsi_Host*) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;

__attribute__((used)) static void
FUNC_29(struct pci_dev *VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_23(VAR_3);
 struct lpfc_vport *VAR_5 = (struct lpfc_vport *) VAR_4->hostdata;
 struct lpfc_vport **VAR_6;
 struct lpfc_hba *VAR_7 = VAR_5->phba;
 int VAR_8;

 FUNC_27(&VAR_7->hbalock);
 VAR_5->load_flag |= VAR_0;
 FUNC_28(&VAR_7->hbalock);

 FUNC_12(VAR_5);


 VAR_6 = FUNC_8(VAR_7);
 if (VAR_6 != ((void*)0))
  for (VAR_8 = 0; VAR_8 <= VAR_7->max_vports && VAR_6[VAR_8] != ((void*)0); VAR_8++) {
   if (VAR_6[VAR_8]->port_type == VAR_1)
    continue;
   FUNC_2(VAR_6[VAR_8]->fc_vport);
  }
 FUNC_10(VAR_7, VAR_6);


 FUNC_1(VAR_4);
 FUNC_26(VAR_4);

 FUNC_7(VAR_5);
 FUNC_18(VAR_7);

 FUNC_5(VAR_7->worker_thread);

 FUNC_16(VAR_7);

 FUNC_4(VAR_7->vpi_bmask);
 FUNC_4(VAR_7->vpi_ids);

 FUNC_20(VAR_7);
 FUNC_27(&VAR_7->port_list_lock);
 FUNC_6(&VAR_5->listentry);
 FUNC_28(&VAR_7->port_list_lock);

 FUNC_9(VAR_5);


 if (VAR_7->cfg_sriov_nr_virtfn)
  FUNC_22(VAR_3);


 FUNC_17(VAR_7);

 FUNC_25(VAR_4);





 FUNC_15(VAR_7);
 FUNC_11(VAR_7);

 FUNC_14(VAR_7);

 FUNC_0(&VAR_3->dev, FUNC_19(),
     VAR_7->hbqslimp.virt, VAR_7->hbqslimp.phys);


 FUNC_0(&VAR_3->dev, VAR_2,
     VAR_7->slim2p.virt, VAR_7->slim2p.phys);


 FUNC_3(VAR_7->ctrl_regs_memmap_p);
 FUNC_3(VAR_7->slim_memmap_p);

 FUNC_13(VAR_7);

 FUNC_24(VAR_3);
 FUNC_21(VAR_3);
}
