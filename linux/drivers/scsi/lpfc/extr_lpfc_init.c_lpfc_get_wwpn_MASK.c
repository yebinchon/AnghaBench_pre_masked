
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
struct lpfc_hba {scalar_t__ sli_rev; int mbox_mem_pool; } ;
struct TYPE_10__ {scalar_t__ portname; } ;
struct TYPE_11__ {TYPE_2__ varRDnvp; } ;
struct TYPE_12__ {TYPE_3__ un; } ;
struct TYPE_9__ {TYPE_4__ mb; int mqe; } ;
struct TYPE_13__ {TYPE_1__ u; } ;
typedef TYPE_4__ MAILBOX_t ;
typedef TYPE_5__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct lpfc_hba*,int ,int ,char*,int ,int ) ;
 int FUNC_3 (struct lpfc_hba*,TYPE_5__*) ;
 int FUNC_4 (struct lpfc_hba*,TYPE_5__*,int ) ;
 int FUNC_5 (int *,char*,int) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_5__*,int ) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static uint64_t
FUNC_9(struct lpfc_hba *VAR_8)
{
 uint64_t VAR_9;
 int VAR_10;
 LPFC_MBOXQ_t *VAR_11;
 MAILBOX_t *VAR_12;

 VAR_11 = (LPFC_MBOXQ_t *) FUNC_6(VAR_8->mbox_mem_pool,
      VAR_0);
 if (!VAR_11)
  return (uint64_t)-1;


 FUNC_3(VAR_8, VAR_11);
 VAR_10 = FUNC_4(VAR_8, VAR_11, VAR_4);
 if (VAR_10 != VAR_5) {
  FUNC_2(VAR_8, VAR_1, VAR_2,
    "6019 Mailbox failed , mbxCmd x%x "
    "READ_NV, mbxStatus x%x\n",
    FUNC_1(VAR_6, &VAR_11->u.mqe),
    FUNC_1(VAR_7, &VAR_11->u.mqe));
  FUNC_7(VAR_11, VAR_8->mbox_mem_pool);
  return (uint64_t) -1;
 }
 VAR_12 = &VAR_11->u.mb;
 FUNC_5(&VAR_9, (char *)VAR_12->un.varRDnvp.portname, sizeof(uint64_t));

 FUNC_7(VAR_11, VAR_8->mbox_mem_pool);
 if (VAR_8->sli_rev == VAR_3)
  return FUNC_0(VAR_9);
 else
  return FUNC_8(VAR_9, 32);
}
