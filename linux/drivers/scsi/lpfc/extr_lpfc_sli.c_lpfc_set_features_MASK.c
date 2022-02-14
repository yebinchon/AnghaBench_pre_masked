
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_sli4_cfg_mhdr {int dummy; } ;
struct lpfc_mbx_set_feature {int dummy; } ;
struct lpfc_hba {int dummy; } ;
struct TYPE_12__ {int feature; int param_len; } ;
struct TYPE_8__ {TYPE_7__ set_feature; } ;
struct TYPE_9__ {TYPE_1__ un; } ;
struct TYPE_10__ {TYPE_2__ mqe; } ;
struct TYPE_11__ {TYPE_3__ u; } ;
typedef TYPE_4__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int ,TYPE_7__*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct lpfc_hba*,TYPE_4__*,int ,int ,int,int ) ;

__attribute__((used)) static void
FUNC_2(struct lpfc_hba *VAR_6, LPFC_MBOXQ_t *VAR_7,
    uint32_t VAR_8)
{
 uint32_t VAR_9;

 VAR_9 = sizeof(struct lpfc_mbx_set_feature) -
  sizeof(struct lpfc_sli4_cfg_mhdr);
 FUNC_1(VAR_6, VAR_7, VAR_1,
    VAR_0, VAR_9,
    VAR_2);

 switch (VAR_8) {
 case 128:
  FUNC_0(VAR_3,
         &VAR_7->u.mqe.un.set_feature, 1);
  VAR_7->u.mqe.un.set_feature.feature = 128;
  VAR_7->u.mqe.un.set_feature.param_len = 8;
  break;
 case 129:
  FUNC_0(VAR_4,
         &VAR_7->u.mqe.un.set_feature, 1);
  FUNC_0(VAR_5,
         &VAR_7->u.mqe.un.set_feature, 1);
  VAR_7->u.mqe.un.set_feature.feature = 129;
  VAR_7->u.mqe.un.set_feature.param_len = 8;
  break;
 }

 return;
}
