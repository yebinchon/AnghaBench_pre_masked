
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int ushort ;
typedef int uint ;
typedef int uchar ;
typedef unsigned long u32 ;
struct TYPE_19__ {scalar_t__ err_code; int init_sdtr; int sdtr_done; int max_sdtr_index; scalar_t__ in_critical_cnt; int pci_fix_asyn_xfer; int pci_fix_asyn_xfer_always; int bug_fix_cntl; int * sdtr_period_tbl; int iop_base; } ;
struct TYPE_16__ {int extra_bytes; int target_id; int cntl; unsigned long data_addr; unsigned long data_cnt; scalar_t__ q_no; } ;
struct TYPE_14__ {int tag_code; int target_ix; } ;
struct TYPE_18__ {scalar_t__* cdbptr; TYPE_3__ q1; TYPE_1__ q2; TYPE_4__* sg_head; } ;
struct TYPE_17__ {int entry_cnt; int entry_to_copy; TYPE_2__* sg_list; } ;
struct TYPE_15__ {unsigned long addr; unsigned long bytes; } ;
typedef int PortAddr ;
typedef TYPE_4__ ASC_SG_HEAD ;
typedef TYPE_5__ ASC_SCSI_Q ;
typedef TYPE_6__ ASC_DVC_VAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_6__*,int,int) ;
 int FUNC_3 (TYPE_6__*,int ,int) ;
 int FUNC_4 (TYPE_6__*,TYPE_5__*,int) ;
 int FUNC_5 (TYPE_6__*,int ) ;
 int FUNC_6 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int* VAR_17 ;
 void* FUNC_7 (unsigned long) ;
 unsigned long FUNC_8 (unsigned long) ;

__attribute__((used)) static int FUNC_9(ASC_DVC_VAR *VAR_18, ASC_SCSI_Q *VAR_19)
{
 PortAddr VAR_20;
 int VAR_21;
 int VAR_22;
 bool VAR_23;
 int VAR_24;
 u32 VAR_25;
 ushort VAR_26 = 0;
 ushort VAR_27 = 0;
 uchar VAR_28;
 uchar VAR_29;
 uchar VAR_30;
 uchar VAR_31;
 uchar VAR_32;
 uchar VAR_33;
 ASC_SG_HEAD *VAR_34;
 unsigned long VAR_35;

 VAR_20 = VAR_18->iop_base;
 VAR_34 = VAR_19->sg_head;
 if (VAR_18->err_code != 0)
  return VAR_2;
 VAR_19->q1.q_no = 0;
 if ((VAR_19->q2.tag_code & VAR_8) == 0) {
  VAR_19->q1.extra_bytes = 0;
 }
 VAR_21 = 0;
 VAR_28 = VAR_19->q2.target_ix;
 VAR_29 = FUNC_0(VAR_28);
 VAR_22 = 1;
 if (VAR_19->cdbptr[0] == VAR_15) {
  if ((VAR_18->init_sdtr & VAR_19->q1.target_id) != 0) {
   VAR_18->sdtr_done &= ~VAR_19->q1.target_id;
   VAR_30 = FUNC_1(VAR_20, VAR_29);
   FUNC_3(VAR_18,
          VAR_18->
          sdtr_period_tbl[(VAR_30 >> 4) &
            (uchar)(VAR_18->
             max_sdtr_index -
             1)],
          (uchar)(VAR_30 & (uchar)
           VAR_4));
   VAR_19->q1.cntl |= (VAR_9 | VAR_12);
  }
 }
 if (VAR_18->in_critical_cnt != 0) {
  FUNC_5(VAR_18, VAR_0);
  return VAR_2;
 }
 VAR_18->in_critical_cnt++;
 if ((VAR_19->q1.cntl & VAR_10) != 0) {
  if ((VAR_26 = VAR_34->entry_cnt) == 0) {
   VAR_18->in_critical_cnt--;
   return VAR_2;
  }
  if (VAR_26 > VAR_3) {
   VAR_18->in_critical_cnt--;
   return VAR_2;
  }
  if (VAR_26 == 1) {
   VAR_19->q1.data_addr = FUNC_7(VAR_34->sg_list[0].addr);
   VAR_19->q1.data_cnt = FUNC_7(VAR_34->sg_list[0].bytes);
   VAR_19->q1.cntl &= ~(VAR_10 | VAR_11);
  }
  VAR_27 = VAR_26 - 1;
 }
 VAR_32 = VAR_19->cdbptr[0];
 VAR_23 = 0;
 if ((VAR_18->pci_fix_asyn_xfer & VAR_19->q1.target_id) &&
     !(VAR_18->pci_fix_asyn_xfer_always & VAR_19->q1.target_id)) {
  if (VAR_19->q1.cntl & VAR_10) {
   VAR_35 = 0;
   for (VAR_24 = 0; VAR_24 < VAR_26; VAR_24++) {
    VAR_35 += FUNC_8(VAR_34->sg_list[VAR_24].
       bytes);
   }
  } else {
   VAR_35 = FUNC_8(VAR_19->q1.data_cnt);
  }
  if (VAR_35 != 0UL) {
   if (VAR_35 < 512UL) {
    VAR_23 = 1;
   } else {
    for (VAR_24 = 0; VAR_24 < VAR_5;
         VAR_24++) {
     VAR_33 =
         VAR_17[VAR_24];
     if (VAR_33 == 0xFF) {
      break;
     }
     if (VAR_32 == VAR_33) {
      VAR_23 =
          1;
      break;
     }
    }
   }
  }
 }
 if (VAR_23) {
  VAR_19->q2.tag_code &= ~VAR_16;
  VAR_19->q2.tag_code |= (VAR_6 |
           VAR_7);
 } else {
  VAR_19->q2.tag_code &= 0x27;
 }
 if ((VAR_19->q1.cntl & VAR_10) != 0) {
  if (VAR_18->bug_fix_cntl) {
   if (VAR_18->bug_fix_cntl & VAR_1) {
    if ((VAR_32 == VAR_14) ||
        (VAR_32 == VAR_13)) {
     VAR_25 = FUNC_8(VAR_34->
           sg_list
           [VAR_27].
           addr) +
      FUNC_8(VAR_34->
          sg_list
          [VAR_27].
          bytes);
     VAR_31 =
         (uchar)((ushort)VAR_25 & 0x0003);
     if ((VAR_31 != 0)
         &&
         ((VAR_19->q2.
           tag_code &
           VAR_8)
          == 0)) {
      VAR_19->q2.tag_code |=
          VAR_8;
      VAR_19->q1.extra_bytes =
          VAR_31;
      VAR_35 =
          FUNC_8(VAR_34->
        sg_list
        [VAR_27].
        bytes);
      VAR_35 -= VAR_31;
      VAR_34->
          sg_list
          [VAR_27].
          bytes =
          FUNC_7(VAR_35);
     }
    }
   }
  }
  VAR_34->entry_to_copy = VAR_34->entry_cnt;
  VAR_22 = FUNC_6(VAR_26);
  if ((FUNC_2(VAR_18, VAR_28, VAR_22) >=
       (uint) VAR_22)
      || ((VAR_19->q1.cntl & VAR_12) != 0)) {
   if ((VAR_21 =
        FUNC_4(VAR_18, VAR_19,
           VAR_22)) == 1) {
    VAR_18->in_critical_cnt--;
    return (VAR_21);
   }
  }
 } else {
  if (VAR_18->bug_fix_cntl) {
   if (VAR_18->bug_fix_cntl & VAR_1) {
    if ((VAR_32 == VAR_14) ||
        (VAR_32 == VAR_13)) {
     VAR_25 =
         FUNC_8(VAR_19->q1.data_addr) +
         FUNC_8(VAR_19->q1.data_cnt);
     VAR_31 =
         (uchar)((ushort)VAR_25 & 0x0003);
     if ((VAR_31 != 0)
         &&
         ((VAR_19->q2.
           tag_code &
           VAR_8)
          == 0)) {
      VAR_35 =
          FUNC_8(VAR_19->q1.
        data_cnt);
      if (((ushort)VAR_35 & 0x01FF)
          == 0) {
       VAR_19->q2.tag_code |=
           VAR_8;
       VAR_35 -= VAR_31;
       VAR_19->q1.data_cnt =
           FUNC_7
           (VAR_35);
       VAR_19->q1.extra_bytes =
           VAR_31;
      }
     }
    }
   }
  }
  VAR_22 = 1;
  if ((FUNC_2(VAR_18, VAR_28, 1) >= 1) ||
      ((VAR_19->q1.cntl & VAR_12) != 0)) {
   if ((VAR_21 = FUNC_4(VAR_18, VAR_19,
          VAR_22)) == 1) {
    VAR_18->in_critical_cnt--;
    return (VAR_21);
   }
  }
 }
 VAR_18->in_critical_cnt--;
 return (VAR_21);
}
