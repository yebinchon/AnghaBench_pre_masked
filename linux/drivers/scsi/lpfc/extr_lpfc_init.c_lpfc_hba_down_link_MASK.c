
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_hba {int mbox_mem_pool; int link_state; } ;
struct TYPE_6__ {int mbox_cmpl; } ;
typedef TYPE_1__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct lpfc_hba*,TYPE_1__*) ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,...) ;
 int VAR_9 ;
 int FUNC_2 (struct lpfc_hba*,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_5(struct lpfc_hba *VAR_10, uint32_t VAR_11)
{
 LPFC_MBOXQ_t *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_3(VAR_10->mbox_mem_pool, VAR_2);
 if (!VAR_12) {
  VAR_10->link_state = VAR_5;
  return -VAR_1;
 }

 FUNC_1(VAR_10,
  VAR_3, VAR_4,
  "0491 Adapter Link is disabled.\n");
 FUNC_0(VAR_10, VAR_12);
 VAR_12->mbox_cmpl = VAR_9;
 VAR_13 = FUNC_2(VAR_10, VAR_12, VAR_11);
 if ((VAR_13 != VAR_8) && (VAR_13 != VAR_6)) {
  FUNC_1(VAR_10,
  VAR_3, VAR_4,
  "2522 Adapter failed to issue DOWN_LINK"
  " mbox command rc 0x%x\n", VAR_13);

  FUNC_4(VAR_12, VAR_10->mbox_mem_pool);
  return -VAR_0;
 }
 if (VAR_11 == VAR_7)
  FUNC_4(VAR_12, VAR_10->mbox_mem_pool);

 return 0;
}
