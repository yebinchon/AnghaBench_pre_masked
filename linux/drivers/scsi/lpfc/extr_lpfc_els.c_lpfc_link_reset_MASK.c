
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct TYPE_7__ {int sli_flag; } ;
struct lpfc_hba {scalar_t__ sli_rev; int mbox_mem_pool; int cfg_link_speed; int cfg_topology; int hbalock; int HCregaddr; TYPE_1__ sli; } ;
struct TYPE_8__ {struct lpfc_vport* vport; int mbox_cmpl; } ;
typedef TYPE_2__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct lpfc_hba*,TYPE_2__*,int ,int ) ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,...) ;
 int FUNC_2 (struct lpfc_vport*,int ,int ,char*) ;
 int VAR_10 ;
 int FUNC_3 (struct lpfc_hba*,TYPE_2__*,int ) ;
 TYPE_2__* FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ) ;

int
FUNC_10(struct lpfc_vport *VAR_11)
{
 struct lpfc_hba *VAR_12 = VAR_11->phba;
 LPFC_MBOXQ_t *VAR_13;
 uint32_t VAR_14;
 int VAR_15;

 FUNC_2(VAR_11, VAR_2, VAR_3,
    "2851 Attempt link reset\n");
 VAR_13 = FUNC_4(VAR_12->mbox_mem_pool, VAR_0);
 if (!VAR_13) {
  FUNC_1(VAR_12, VAR_2, VAR_4,
    "2852 Failed to allocate mbox memory");
  return 1;
 }


 if (VAR_12->sli_rev <= VAR_6) {
  FUNC_7(&VAR_12->hbalock);
  VAR_12->sli.sli_flag |= VAR_5;
  VAR_14 = FUNC_6(VAR_12->HCregaddr);
  VAR_14 |= VAR_1;
  FUNC_9(VAR_14, VAR_12->HCregaddr);
  FUNC_6(VAR_12->HCregaddr);
  FUNC_8(&VAR_12->hbalock);
 }

 FUNC_0(VAR_12, VAR_13, VAR_12->cfg_topology,
         VAR_12->cfg_link_speed);
 VAR_13->mbox_cmpl = VAR_10;
 VAR_13->vport = VAR_11;
 VAR_15 = FUNC_3(VAR_12, VAR_13, VAR_8);
 if ((VAR_15 != VAR_7) && (VAR_15 != VAR_9)) {
  FUNC_1(VAR_12, VAR_2, VAR_4,
    "2853 Failed to issue INIT_LINK "
    "mbox command, rc:x%x\n", VAR_15);
  FUNC_5(VAR_13, VAR_12->mbox_mem_pool);
  return 1;
 }

 return 0;
}
