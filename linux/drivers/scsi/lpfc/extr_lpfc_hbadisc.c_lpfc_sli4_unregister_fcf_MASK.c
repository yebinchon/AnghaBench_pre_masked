
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int fcfi; } ;
struct lpfc_hba {TYPE_2__* pport; TYPE_1__ fcf; int mbox_mem_pool; } ;
struct TYPE_9__ {int mbox_cmpl; TYPE_2__* vport; } ;
struct TYPE_8__ {int port_state; } ;
typedef TYPE_3__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct lpfc_hba*,int ,int,char*,int,...) ;
 int FUNC_1 (struct lpfc_hba*,TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int VAR_9 ;
 TYPE_3__* FUNC_3 (int ,int ) ;

int
FUNC_4(struct lpfc_hba *VAR_10)
{
 LPFC_MBOXQ_t *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_3(VAR_10->mbox_mem_pool, VAR_2);
 if (!VAR_11) {
  FUNC_0(VAR_10, VAR_3, VAR_4|VAR_5,
    "2551 UNREG_FCFI mbox allocation failed"
    "HBA state x%x\n", VAR_10->pport->port_state);
  return -VAR_1;
 }
 FUNC_2(VAR_11, VAR_10->fcf.fcfi);
 VAR_11->vport = VAR_10->pport;
 VAR_11->mbox_cmpl = VAR_9;
 VAR_12 = FUNC_1(VAR_10, VAR_11, VAR_8);

 if (VAR_12 == VAR_7) {
  FUNC_0(VAR_10, VAR_3, VAR_6,
    "2552 Unregister FCFI command failed rc x%x "
    "HBA state x%x\n",
    VAR_12, VAR_10->pport->port_state);
  return -VAR_0;
 }
 return 0;
}
