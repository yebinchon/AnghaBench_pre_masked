
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_register {int word0; } ;
struct TYPE_6__ {int ERR2regaddr; int ERR1regaddr; int STATUSregaddr; } ;
struct TYPE_5__ {int UERRHIregaddr; int UERRLOregaddr; } ;
struct TYPE_7__ {TYPE_2__ if_type2; TYPE_1__ if_type0; } ;
struct TYPE_8__ {int ue_mask_lo; int ue_mask_hi; TYPE_3__ u; int PSMPHRregaddr; struct lpfc_register sli_intf; } ;
struct lpfc_hba {int* work_status; int hba_flag; int work_ha; TYPE_4__ sli4_hba; int work_hs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int FUNC_0 (int ,struct lpfc_register*) ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,int,...) ;
 int FUNC_2 (int ,int*) ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct lpfc_hba *VAR_7)
{
 uint32_t VAR_8, VAR_9;
 uint32_t VAR_10, VAR_11;
 struct lpfc_register VAR_12;





 VAR_10 = FUNC_0(VAR_5, &VAR_7->sli4_hba.sli_intf);
 switch (VAR_10) {
 case 131:
  if (FUNC_2(VAR_7->sli4_hba.u.if_type0.UERRLOregaddr,
   &VAR_9) ||
   FUNC_2(VAR_7->sli4_hba.u.if_type0.UERRHIregaddr,
   &VAR_8)) {
   VAR_7->work_hs |= VAR_4;
   VAR_7->work_ha |= VAR_0;
   VAR_7->hba_flag |= VAR_1;
   return 1;
  }
  if ((~VAR_7->sli4_hba.ue_mask_lo & VAR_9) ||
      (~VAR_7->sli4_hba.ue_mask_hi & VAR_8)) {
   FUNC_1(VAR_7, VAR_2, VAR_3,
     "1423 HBA Unrecoverable error: "
     "uerr_lo_reg=0x%x, uerr_hi_reg=0x%x, "
     "ue_mask_lo_reg=0x%x, "
     "ue_mask_hi_reg=0x%x\n",
     VAR_9, VAR_8,
     VAR_7->sli4_hba.ue_mask_lo,
     VAR_7->sli4_hba.ue_mask_hi);
   VAR_7->work_status[0] = VAR_9;
   VAR_7->work_status[1] = VAR_8;
   VAR_7->work_ha |= VAR_0;
   VAR_7->hba_flag |= VAR_1;
   return 1;
  }
  break;
 case 129:
 case 128:
  if (FUNC_2(VAR_7->sli4_hba.u.if_type2.STATUSregaddr,
   &VAR_12.word0) ||
   FUNC_2(VAR_7->sli4_hba.PSMPHRregaddr,
   &VAR_11)){
   VAR_7->work_hs |= VAR_4;
   VAR_7->work_ha |= VAR_0;
   VAR_7->hba_flag |= VAR_1;
   return 1;
  }
  if (FUNC_0(VAR_6, &VAR_12)) {
   VAR_7->work_status[0] =
    FUNC_3(VAR_7->sli4_hba.u.if_type2.ERR1regaddr);
   VAR_7->work_status[1] =
    FUNC_3(VAR_7->sli4_hba.u.if_type2.ERR2regaddr);
   FUNC_1(VAR_7, VAR_2, VAR_3,
     "2885 Port Status Event: "
     "port status reg 0x%x, "
     "port smphr reg 0x%x, "
     "error 1=0x%x, error 2=0x%x\n",
     VAR_12.word0,
     VAR_11,
     VAR_7->work_status[0],
     VAR_7->work_status[1]);
   VAR_7->work_ha |= VAR_0;
   VAR_7->hba_flag |= VAR_1;
   return 1;
  }
  break;
 case 130:
 default:
  FUNC_1(VAR_7, VAR_2, VAR_3,
    "2886 HBA Error Attention on unsupported "
    "if type %d.", VAR_10);
  return 1;
 }

 return 0;
}
