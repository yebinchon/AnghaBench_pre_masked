
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct pci_dev {scalar_t__ is_busmaster; } ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {scalar_t__ intr_mode; int worker_thread; int brd_no; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct lpfc_hba*,char*,int ) ;
 int VAR_6 ;
 int FUNC_3 (struct lpfc_hba*,scalar_t__) ;
 int FUNC_4 (struct lpfc_hba*) ;
 int FUNC_5 (struct lpfc_hba*,int ,int ,char*,...) ;
 scalar_t__ FUNC_6 (struct lpfc_hba*,scalar_t__) ;
 int FUNC_7 (struct lpfc_hba*) ;
 struct Scsi_Host* FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*,int ) ;

__attribute__((used)) static int
FUNC_13(struct pci_dev *VAR_7)
{
 struct Scsi_Host *VAR_8 = FUNC_8(VAR_7);
 struct lpfc_hba *VAR_9 = ((struct lpfc_vport *)VAR_8->hostdata)->phba;
 uint32_t VAR_10;
 int VAR_11;

 FUNC_5(VAR_9, VAR_2, VAR_3,
   "0292 PCI device Power Management resume.\n");


 FUNC_12(VAR_7, VAR_5);
 FUNC_9(VAR_7);





 FUNC_10(VAR_7);

 if (VAR_7->is_busmaster)
  FUNC_11(VAR_7);


 VAR_9->worker_thread = FUNC_2(VAR_6, VAR_9,
     "lpfc_worker_%d", VAR_9->brd_no);
 if (FUNC_0(VAR_9->worker_thread)) {
  VAR_11 = FUNC_1(VAR_9->worker_thread);
  FUNC_5(VAR_9, VAR_1, VAR_3,
    "0293 PM resume failed to start worker "
    "thread: error=x%x.\n", VAR_11);
  return VAR_11;
 }


 VAR_10 = FUNC_6(VAR_9, VAR_9->intr_mode);
 if (VAR_10 == VAR_4) {
  FUNC_5(VAR_9, VAR_1, VAR_3,
    "0294 PM resume Failed to enable interrupt\n");
  return -VAR_0;
 } else
  VAR_9->intr_mode = VAR_10;


 FUNC_7(VAR_9);
 FUNC_4(VAR_9);


 FUNC_3(VAR_9, VAR_9->intr_mode);

 return 0;
}
