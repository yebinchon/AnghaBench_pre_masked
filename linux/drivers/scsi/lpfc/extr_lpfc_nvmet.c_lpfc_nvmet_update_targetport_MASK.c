
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_vport {int fc_myDID; } ;
struct lpfc_hba {TYPE_1__* targetport; struct lpfc_vport* pport; } ;
struct TYPE_2__ {int port_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lpfc_vport*,int ,int ,char*,TYPE_1__*,int ) ;

int
FUNC_1(struct lpfc_hba *VAR_2)
{
 struct lpfc_vport *VAR_3 = VAR_2->pport;

 if (!VAR_2->targetport)
  return 0;

 FUNC_0(VAR_3, VAR_0, VAR_1,
    "6007 Update NVMET port x%px did x%x\n",
    VAR_2->targetport, VAR_3->fc_myDID);

 VAR_2->targetport->port_id = VAR_3->fc_myDID;
 return 0;
}
