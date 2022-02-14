
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_hba {int cfg_poll; scalar_t__ cfg_hba_queue_depth; int pcidev; int ModelDesc; int ModelName; } ;
struct lpfc_adapter_event_header {int subcategory; int event_type; } ;
struct Scsi_Host {int host_lock; scalar_t__ can_queue; } ;
typedef int adapter_event ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (struct Scsi_Host*,int ,int,char*,int ) ;
 int FUNC_2 (struct lpfc_hba*,int ,int ) ;
 int FUNC_3 (struct Scsi_Host*) ;
 int FUNC_4 (struct lpfc_hba*) ;
 int FUNC_5 (struct lpfc_hba*,int ,int ,char*) ;
 struct Scsi_Host* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(struct lpfc_hba *VAR_6)
{
 struct Scsi_Host *VAR_7;
 struct lpfc_adapter_event_header VAR_8;


 FUNC_2(VAR_6, VAR_6->ModelName, VAR_6->ModelDesc);





 VAR_7 = FUNC_6(VAR_6->pcidev);
 VAR_7->can_queue = VAR_6->cfg_hba_queue_depth - 10;

 FUNC_3(VAR_7);

 if (VAR_6->cfg_poll & VAR_0) {
  FUNC_7(VAR_7->host_lock);
  FUNC_4(VAR_6);
  FUNC_8(VAR_7->host_lock);
 }

 FUNC_5(VAR_6, VAR_2, VAR_3,
   "0428 Perform SCSI scan\n");

 VAR_8.event_type = VAR_1;
 VAR_8.subcategory = VAR_4;
 FUNC_1(VAR_7, FUNC_0(),
      sizeof(VAR_8),
      (char *) &VAR_8,
      VAR_5);
 return;
}
