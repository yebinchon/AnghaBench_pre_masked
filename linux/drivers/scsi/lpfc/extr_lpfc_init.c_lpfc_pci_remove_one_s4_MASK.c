
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct lpfc_vport {scalar_t__ port_type; int listentry; int fc_vport; int load_flag; struct lpfc_hba* phba; } ;
struct lpfc_hba {int max_vports; int port_list_lock; scalar_t__ cfg_xri_rebalancing; int hbalock; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct lpfc_vport*) ;
 struct lpfc_vport** FUNC_4 (struct lpfc_hba*) ;
 int FUNC_5 (struct lpfc_vport*) ;
 int FUNC_6 (struct lpfc_hba*) ;
 int FUNC_7 (struct lpfc_hba*,struct lpfc_vport**) ;
 int FUNC_8 (struct lpfc_hba*) ;
 int FUNC_9 (struct lpfc_hba*) ;
 int FUNC_10 (struct lpfc_vport*) ;
 int FUNC_11 (struct lpfc_hba*) ;
 int FUNC_12 (struct lpfc_hba*) ;
 int FUNC_13 (struct lpfc_vport*) ;
 int FUNC_14 (struct lpfc_hba*) ;
 int FUNC_15 (struct lpfc_hba*) ;
 int FUNC_16 (struct lpfc_hba*) ;
 int FUNC_17 (struct lpfc_hba*) ;
 int FUNC_18 (struct lpfc_hba*) ;
 int FUNC_19 (struct lpfc_hba*) ;
 struct Scsi_Host* FUNC_20 (struct pci_dev*) ;
 int FUNC_21 (struct Scsi_Host*) ;
 int FUNC_22 (struct Scsi_Host*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;

__attribute__((used)) static void
FUNC_25(struct pci_dev *VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_20(VAR_2);
 struct lpfc_vport *VAR_4 = (struct lpfc_vport *) VAR_3->hostdata;
 struct lpfc_vport **VAR_5;
 struct lpfc_hba *VAR_6 = VAR_4->phba;
 int VAR_7;


 FUNC_23(&VAR_6->hbalock);
 VAR_4->load_flag |= VAR_0;
 FUNC_24(&VAR_6->hbalock);


 FUNC_10(VAR_4);


 VAR_5 = FUNC_4(VAR_6);
 if (VAR_5 != ((void*)0))
  for (VAR_7 = 0; VAR_7 <= VAR_6->max_vports && VAR_5[VAR_7] != ((void*)0); VAR_7++) {
   if (VAR_5[VAR_7]->port_type == VAR_1)
    continue;
   FUNC_1(VAR_5[VAR_7]->fc_vport);
  }
 FUNC_7(VAR_6, VAR_5);


 FUNC_0(VAR_3);
 FUNC_22(VAR_3);




 FUNC_3(VAR_4);
 FUNC_14(VAR_6);
 FUNC_13(VAR_4);


 if (VAR_6->cfg_xri_rebalancing)
  FUNC_6(VAR_6);






 FUNC_5(VAR_4);

 FUNC_18(VAR_6);
 FUNC_23(&VAR_6->port_list_lock);
 FUNC_2(&VAR_4->listentry);
 FUNC_24(&VAR_6->port_list_lock);




 FUNC_12(VAR_6);
 FUNC_9(VAR_6);
 FUNC_16(VAR_6);

 FUNC_19(VAR_6);
 FUNC_15(VAR_6);


 FUNC_17(VAR_6);


 FUNC_21(VAR_3);
 FUNC_8(VAR_6);


 FUNC_11(VAR_6);

 return;
}
