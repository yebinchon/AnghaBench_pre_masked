
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
struct TYPE_5__ {int UERRHIregaddr; int UERRLOregaddr; int UEMASKHIregaddr; int UEMASKLOregaddr; } ;
struct TYPE_7__ {TYPE_2__ if_type2; TYPE_1__ if_type0; } ;
struct TYPE_8__ {int ue_mask_lo; int ue_mask_hi; TYPE_3__ u; struct lpfc_register sli_intf; int PSMPHRregaddr; } ;
struct lpfc_hba {int* work_status; TYPE_4__ sli4_hba; } ;
typedef int reg_data ;
typedef int portsmphr_reg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;




 scalar_t__ FUNC_0 (int ,struct lpfc_register*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,int,int,int,int,...) ;
 scalar_t__ FUNC_2 (int ,int*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_3 (struct lpfc_register*,int ,int) ;
 int FUNC_4 (int) ;
 void* FUNC_5 (int ) ;

int
FUNC_6(struct lpfc_hba *VAR_21)
{
 struct lpfc_register VAR_22, VAR_23, VAR_24;
 struct lpfc_register VAR_25;
 int VAR_26, VAR_27 = 0;
 uint32_t VAR_28;

 FUNC_3(&VAR_22, 0, sizeof(VAR_22));
 FUNC_3(&VAR_25, 0, sizeof(VAR_25));
 if (!VAR_21->sli4_hba.PSMPHRregaddr)
  return -VAR_0;


 for (VAR_26 = 0; VAR_26 < 3000; VAR_26++) {
  if (FUNC_2(VAR_21->sli4_hba.PSMPHRregaddr,
   &VAR_22.word0) ||
   (FUNC_0(VAR_8, &VAR_22))) {

   VAR_27 = -VAR_0;
   break;
  }
  if (VAR_4 ==
      FUNC_0(VAR_9, &VAR_22))
   break;
  FUNC_4(10);
 }





 if (VAR_27) {
  FUNC_1(VAR_21, VAR_1, VAR_3,
   "1408 Port Failed POST - portsmphr=0x%x, "
   "perr=x%x, sfi=x%x, nip=x%x, ipc=x%x, scr1=x%x, "
   "scr2=x%x, hscratch=x%x, pstatus=x%x\n",
   VAR_22.word0,
   FUNC_0(VAR_8, &VAR_22),
   FUNC_0(VAR_12, &VAR_22),
   FUNC_0(VAR_7, &VAR_22),
   FUNC_0(VAR_6, &VAR_22),
   FUNC_0(VAR_10, &VAR_22),
   FUNC_0(VAR_11, &VAR_22),
   FUNC_0(VAR_5, &VAR_22),
   FUNC_0(VAR_9, &VAR_22));
 } else {
  FUNC_1(VAR_21, VAR_2, VAR_3,
    "2534 Device Info: SLIFamily=0x%x, "
    "SLIRev=0x%x, IFType=0x%x, SLIHint_1=0x%x, "
    "SLIHint_2=0x%x, FT=0x%x\n",
    FUNC_0(VAR_15,
           &VAR_21->sli4_hba.sli_intf),
    FUNC_0(VAR_18,
           &VAR_21->sli4_hba.sli_intf),
    FUNC_0(VAR_14,
           &VAR_21->sli4_hba.sli_intf),
    FUNC_0(VAR_16,
           &VAR_21->sli4_hba.sli_intf),
    FUNC_0(VAR_17,
           &VAR_21->sli4_hba.sli_intf),
    FUNC_0(VAR_13,
           &VAR_21->sli4_hba.sli_intf));





  VAR_28 = FUNC_0(VAR_14,
     &VAR_21->sli4_hba.sli_intf);
  switch (VAR_28) {
  case 131:
   VAR_21->sli4_hba.ue_mask_lo =
         FUNC_5(VAR_21->sli4_hba.u.if_type0.UEMASKLOregaddr);
   VAR_21->sli4_hba.ue_mask_hi =
         FUNC_5(VAR_21->sli4_hba.u.if_type0.UEMASKHIregaddr);
   VAR_23.word0 =
         FUNC_5(VAR_21->sli4_hba.u.if_type0.UERRLOregaddr);
   VAR_24.word0 =
    FUNC_5(VAR_21->sli4_hba.u.if_type0.UERRHIregaddr);
   if ((~VAR_21->sli4_hba.ue_mask_lo & VAR_23.word0) ||
       (~VAR_21->sli4_hba.ue_mask_hi & VAR_24.word0)) {
    FUNC_1(VAR_21, VAR_1, VAR_3,
      "1422 Unrecoverable Error "
      "Detected during POST "
      "uerr_lo_reg=0x%x, "
      "uerr_hi_reg=0x%x, "
      "ue_mask_lo_reg=0x%x, "
      "ue_mask_hi_reg=0x%x\n",
      VAR_23.word0,
      VAR_24.word0,
      VAR_21->sli4_hba.ue_mask_lo,
      VAR_21->sli4_hba.ue_mask_hi);
    VAR_27 = -VAR_0;
   }
   break;
  case 129:
  case 128:

   if (FUNC_2(VAR_21->sli4_hba.u.if_type2.STATUSregaddr,
    &VAR_25.word0) ||
    (FUNC_0(VAR_19, &VAR_25) &&
     !FUNC_0(VAR_20, &VAR_25))) {
    VAR_21->work_status[0] =
     FUNC_5(VAR_21->sli4_hba.u.if_type2.
           ERR1regaddr);
    VAR_21->work_status[1] =
     FUNC_5(VAR_21->sli4_hba.u.if_type2.
           ERR2regaddr);
    FUNC_1(VAR_21, VAR_1, VAR_3,
     "2888 Unrecoverable port error "
     "following POST: port status reg "
     "0x%x, port_smphr reg 0x%x, "
     "error 1=0x%x, error 2=0x%x\n",
     VAR_25.word0,
     VAR_22.word0,
     VAR_21->work_status[0],
     VAR_21->work_status[1]);
    VAR_27 = -VAR_0;
   }
   break;
  case 130:
  default:
   break;
  }
 }
 return VAR_27;
}
