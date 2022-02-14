
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct nvmet_fc_target_port {struct lpfc_nvmet_tgtport* private; } ;
struct lpfc_nvmet_tgtport {struct lpfc_hba* phba; } ;
struct lpfc_hba {int pport; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,char*) ;

__attribute__((used)) static void
FUNC_2(struct nvmet_fc_target_port *VAR_2)
{
 struct lpfc_nvmet_tgtport *VAR_3;
 struct lpfc_hba *VAR_4;
 uint32_t VAR_5;

 VAR_3 = VAR_2->private;
 VAR_4 = VAR_3->phba;

 VAR_5 = FUNC_0(VAR_4->pport, 0);
 FUNC_1(VAR_4, VAR_0, VAR_1,
   "6420 NVMET subsystem change: Notification %s\n",
   (VAR_5) ? "Failed" : "Sent");
}
