
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int sli_intf; } ;
struct lpfc_hba {int mbox_mem_pool; TYPE_1__ sli4_hba; } ;
typedef int endian_mb_data ;
struct TYPE_8__ {int mqe; } ;
struct TYPE_9__ {TYPE_2__ u; } ;
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
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,...) ;
 int VAR_9 ;
 int FUNC_2 (struct lpfc_hba*,TYPE_3__*,int ) ;
 int FUNC_3 (int *,int**,int) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_3__*,int ,int) ;

__attribute__((used)) static int
FUNC_7(struct lpfc_hba *VAR_10)
{
 LPFC_MBOXQ_t *VAR_11;
 uint32_t VAR_12, VAR_13 = 0;
 uint32_t VAR_14[2] = {VAR_4,
          VAR_3};

 VAR_12 = FUNC_0(VAR_9, &VAR_10->sli4_hba.sli_intf);
 switch (VAR_12) {
 case 131:
  VAR_11 = (LPFC_MBOXQ_t *) FUNC_4(VAR_10->mbox_mem_pool,
             VAR_2);
  if (!VAR_11) {
   FUNC_1(VAR_10, VAR_5, VAR_6,
     "0492 Unable to allocate memory for "
     "issuing SLI_CONFIG_SPECIAL mailbox "
     "command\n");
   return -VAR_1;
  }





  FUNC_6(VAR_11, 0, sizeof(LPFC_MBOXQ_t));
  FUNC_3(&VAR_11->u.mqe, &VAR_14, sizeof(VAR_14));
  VAR_13 = FUNC_2(VAR_10, VAR_11, VAR_7);
  if (VAR_13 != VAR_8) {
   FUNC_1(VAR_10, VAR_5, VAR_6,
     "0493 SLI_CONFIG_SPECIAL mailbox "
     "failed with status x%x\n",
     VAR_13);
   VAR_13 = -VAR_0;
  }
  FUNC_5(VAR_11, VAR_10->mbox_mem_pool);
  break;
 case 128:
 case 129:
 case 130:
 default:
  break;
 }
 return VAR_13;
}
