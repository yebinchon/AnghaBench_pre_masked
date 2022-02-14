
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_sli4_cfg_mhdr {int dummy; } ;
struct TYPE_17__ {int req; } ;
struct lpfc_mbx_set_link_diag_state {TYPE_5__ u; } ;
struct TYPE_15__ {int lnk_tp; int lnk_no; } ;
struct TYPE_16__ {TYPE_3__ lnk_info; } ;
struct lpfc_hba {int mbox_mem_pool; TYPE_4__ sli4_hba; } ;
struct TYPE_18__ {scalar_t__ mbxStatus; } ;
struct TYPE_13__ {struct lpfc_mbx_set_link_diag_state link_diag_state; } ;
struct TYPE_14__ {TYPE_1__ un; } ;
struct TYPE_19__ {TYPE_6__ mb; TYPE_2__ mqe; } ;
struct TYPE_20__ {TYPE_7__ u; } ;
typedef TYPE_8__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int *,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,int,int,int) ;
 int FUNC_2 (struct lpfc_hba*,TYPE_8__*,int ,int ,int,int ) ;
 int FUNC_3 (struct lpfc_hba*,TYPE_8__*,int ) ;
 TYPE_8__* FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_8__*,int ) ;

__attribute__((used)) static int
FUNC_6(struct lpfc_hba *VAR_16, uint32_t VAR_17)
{
 LPFC_MBOXQ_t *VAR_18;
 struct lpfc_mbx_set_link_diag_state *VAR_19;
 uint32_t VAR_20, VAR_21;
 int VAR_22 = VAR_10, VAR_23;

 VAR_18 = FUNC_4(VAR_16->mbox_mem_pool, VAR_2);
 if (!VAR_18)
  return -VAR_1;

 VAR_20 = (sizeof(struct lpfc_mbx_set_link_diag_state) -
     sizeof(struct lpfc_sli4_cfg_mhdr));
 VAR_21 = FUNC_2(VAR_16, VAR_18, VAR_7,
    VAR_6,
    VAR_20, VAR_9);
 if (VAR_21 != VAR_20) {
  VAR_23 = -VAR_1;
  goto link_diag_state_set_out;
 }
 FUNC_1(VAR_16, VAR_3, VAR_4,
   "3128 Set link to diagnostic state:x%x (x%x/x%x)\n",
   VAR_17, VAR_16->sli4_hba.lnk_info.lnk_tp,
   VAR_16->sli4_hba.lnk_info.lnk_no);

 VAR_19 = &VAR_18->u.mqe.un.link_diag_state;
 FUNC_0(VAR_13, &VAR_19->u.req,
        VAR_5);
 FUNC_0(VAR_14, &VAR_19->u.req,
        VAR_16->sli4_hba.lnk_info.lnk_no);
 FUNC_0(VAR_15, &VAR_19->u.req,
        VAR_16->sli4_hba.lnk_info.lnk_tp);
 if (VAR_17)
  FUNC_0(VAR_12,
         &VAR_19->u.req, 1);
 else
  FUNC_0(VAR_12,
         &VAR_19->u.req, 0);

 VAR_22 = FUNC_3(VAR_16, VAR_18, VAR_8);

 if ((VAR_22 == VAR_10) && (VAR_18->u.mb.mbxStatus == 0))
  VAR_23 = 0;
 else
  VAR_23 = -VAR_0;

link_diag_state_set_out:
 if (VAR_18 && (VAR_22 != VAR_11))
  FUNC_5(VAR_18, VAR_16->mbox_mem_pool);

 return VAR_23;
}
