
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * vfi_ids; } ;
struct TYPE_4__ {int fcfi; } ;
struct lpfc_hba {TYPE_3__* pport; int * vpi_ids; TYPE_2__ sli4_hba; TYPE_1__ fcf; } ;
struct TYPE_6__ {int fc_flag; size_t vfi; size_t vpi; int fc_myDID; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct lpfc_hba *VAR_4)
{
 int VAR_5;

 if (VAR_4->pport->fc_flag & VAR_1) {
  FUNC_1(VAR_4, VAR_2, VAR_3,
    "3136 Port still had vfi registered: "
    "mydid:x%x, fcfi:%d, vfi:%d, vpi:%d\n",
    VAR_4->pport->fc_myDID, VAR_4->fcf.fcfi,
    VAR_4->sli4_hba.vfi_ids[VAR_4->pport->vfi],
    VAR_4->vpi_ids[VAR_4->pport->vpi]);
  return -VAR_0;
 }
 VAR_5 = FUNC_0(VAR_4->pport);
 return VAR_5;
}
