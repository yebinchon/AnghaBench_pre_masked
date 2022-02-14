
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ushort ;
typedef size_t uchar ;
struct asc_board {size_t* sdtr_data; int queue_full; size_t* queue_full_cnt; } ;
struct TYPE_7__ {int pci_fix_asyn_xfer; scalar_t__* sdtr_period_tbl; size_t min_sdtr_index; size_t max_sdtr_index; int init_sdtr; int sdtr_done; int pci_fix_asyn_xfer_always; scalar_t__* cur_dvc_qng; int queue_full_or_busy; size_t* max_dvc_qng; int iop_base; struct asc_board* drv_ptr; } ;
struct TYPE_6__ {scalar_t__ msg_type; scalar_t__ msg_req; scalar_t__ msg_len; scalar_t__ req_ack_offset; scalar_t__ xfer_period; scalar_t__ wdtr_width; } ;
typedef int PortAddr ;
typedef TYPE_1__ EXT_MSG ;
typedef int ASC_SCSI_BIT_ID_TYPE ;
typedef TYPE_2__ ASC_DVC_VAR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 size_t VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_0 (size_t) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 scalar_t__ FUNC_1 (size_t) ;
 size_t FUNC_2 (size_t) ;
 size_t VAR_22 ;
 size_t FUNC_3 (TYPE_2__*,scalar_t__,scalar_t__) ;
 size_t FUNC_4 (int ,size_t) ;
 int FUNC_5 (int ,int ,size_t*,int) ;
 int FUNC_6 (int ,int ,size_t*,int) ;
 int FUNC_7 (TYPE_2__*,scalar_t__,size_t) ;
 void* FUNC_8 (int ,scalar_t__) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,size_t,size_t) ;
 int FUNC_11 (int ,scalar_t__,size_t) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int) ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 size_t VAR_29 ;
 size_t VAR_30 ;
 size_t VAR_31 ;
 size_t VAR_32 ;
 size_t VAR_33 ;

__attribute__((used)) static void FUNC_14(ASC_DVC_VAR *VAR_34)
{
 EXT_MSG VAR_35;
 EXT_MSG VAR_36;
 ushort VAR_37;
 bool VAR_38;
 ushort VAR_39;
 ASC_SCSI_BIT_ID_TYPE VAR_40;
 ASC_SCSI_BIT_ID_TYPE VAR_41;
 PortAddr VAR_42;
 uchar VAR_43;
 uchar VAR_44;
 uchar VAR_45;
 uchar VAR_46;
 uchar VAR_47;
 uchar VAR_48, VAR_49;
 uchar VAR_50;
 uchar VAR_51;
 uchar VAR_52;
 struct asc_board *VAR_53;

 FUNC_13(!VAR_34->drv_ptr);
 VAR_53 = VAR_34->drv_ptr;

 VAR_42 = VAR_34->iop_base;
 VAR_39 = FUNC_9(VAR_42, VAR_1);

 VAR_45 = FUNC_8(VAR_42, VAR_0);
 VAR_37 = FUNC_0(VAR_45);
 VAR_47 = FUNC_8(VAR_42,
        (ushort)(VAR_37 +
          (ushort)VAR_17));
 VAR_48 = FUNC_8(VAR_42,
       (ushort)(VAR_37 + (ushort)VAR_14));
 VAR_49 = FUNC_2(VAR_47);
 VAR_41 = (uchar)FUNC_1(VAR_49);
 if (VAR_34->pci_fix_asyn_xfer & VAR_41) {
  VAR_51 = VAR_22;
 } else {
  VAR_51 = 0;
 }
 if (VAR_39 == VAR_7) {
  if (VAR_34->pci_fix_asyn_xfer & VAR_41) {
   FUNC_10(VAR_42, 0, VAR_49);
   VAR_53->sdtr_data[VAR_49] = 0;
  }
  FUNC_12(VAR_42, VAR_1, 0);
  return;
 } else if (VAR_39 == VAR_8) {
  if (VAR_34->pci_fix_asyn_xfer & VAR_41) {
   FUNC_10(VAR_42, VAR_51, VAR_49);
   VAR_53->sdtr_data[VAR_49] = VAR_51;
  }
  FUNC_12(VAR_42, VAR_1, 0);
  return;
 } else if (VAR_39 == VAR_9) {
  FUNC_5(VAR_42,
       VAR_3,
       (uchar *)&VAR_35,
       sizeof(EXT_MSG) >> 1);

  if (VAR_35.msg_type == VAR_23 &&
      VAR_35.msg_req == VAR_24 &&
      VAR_35.msg_len == VAR_27) {
   VAR_38 = 1;
   if ((VAR_35.req_ack_offset > VAR_19)) {

    VAR_38 = 0;
    VAR_35.req_ack_offset = VAR_19;
   }
   if ((VAR_35.xfer_period <
        VAR_34->sdtr_period_tbl[VAR_34->min_sdtr_index])
       || (VAR_35.xfer_period >
    VAR_34->sdtr_period_tbl[VAR_34->
        max_sdtr_index])) {
    VAR_38 = 0;
    VAR_35.xfer_period =
        VAR_34->sdtr_period_tbl[VAR_34->
            min_sdtr_index];
   }
   if (VAR_38) {
    VAR_46 =
        FUNC_3(VAR_34, VAR_35.xfer_period,
         VAR_35.req_ack_offset);
    if (VAR_46 == 0xFF) {

     VAR_48 |= VAR_29;
     VAR_34->init_sdtr &= ~VAR_41;
     VAR_34->sdtr_done &= ~VAR_41;
     FUNC_10(VAR_42, VAR_51,
             VAR_49);
     VAR_53->sdtr_data[VAR_49] = VAR_51;
    }
   }
   if (VAR_35.req_ack_offset == 0) {

    VAR_48 &= ~VAR_29;
    VAR_34->init_sdtr &= ~VAR_41;
    VAR_34->sdtr_done &= ~VAR_41;
    FUNC_10(VAR_42, VAR_51, VAR_49);
   } else {
    if (VAR_38 && (VAR_48 & VAR_29)) {
     VAR_48 &= ~VAR_29;
     VAR_34->sdtr_done |= VAR_41;
     VAR_34->init_sdtr |= VAR_41;
     VAR_34->pci_fix_asyn_xfer &=
         ~VAR_41;
     VAR_46 =
         FUNC_3(VAR_34,
          VAR_35.xfer_period,
          VAR_35.
          req_ack_offset);
     FUNC_10(VAR_42, VAR_46,
             VAR_49);
     VAR_53->sdtr_data[VAR_49] = VAR_46;
    } else {
     VAR_48 |= VAR_29;
     FUNC_7(VAR_34,
            VAR_35.xfer_period,
            VAR_35.req_ack_offset);
     VAR_34->pci_fix_asyn_xfer &=
         ~VAR_41;
     VAR_46 =
         FUNC_3(VAR_34,
          VAR_35.xfer_period,
          VAR_35.
          req_ack_offset);
     FUNC_10(VAR_42, VAR_46,
             VAR_49);
     VAR_53->sdtr_data[VAR_49] = VAR_46;
     VAR_34->sdtr_done |= VAR_41;
     VAR_34->init_sdtr |= VAR_41;
    }
   }

   FUNC_11(VAR_42,
      (ushort)(VAR_37 +
        (ushort)VAR_14),
      VAR_48);
   FUNC_12(VAR_42, VAR_1, 0);
   return;
  } else if (VAR_35.msg_type == VAR_23 &&
      VAR_35.msg_req == VAR_25 &&
      VAR_35.msg_len == VAR_28) {

   VAR_35.wdtr_width = 0;
   FUNC_6(VAR_42,
      VAR_4,
      (uchar *)&VAR_35,
      sizeof(EXT_MSG) >> 1);
   VAR_48 |= VAR_29;
   FUNC_11(VAR_42,
      (ushort)(VAR_37 +
        (ushort)VAR_14),
      VAR_48);
   FUNC_12(VAR_42, VAR_1, 0);
   return;
  } else {

   VAR_35.msg_type = VAR_26;
   FUNC_6(VAR_42,
      VAR_4,
      (uchar *)&VAR_35,
      sizeof(EXT_MSG) >> 1);
   VAR_48 |= VAR_29;
   FUNC_11(VAR_42,
      (ushort)(VAR_37 +
        (ushort)VAR_14),
      VAR_48);
   FUNC_12(VAR_42, VAR_1, 0);
   return;
  }
 } else if (VAR_39 == VAR_6) {

  VAR_48 |= VAR_30;

  if ((VAR_34->init_sdtr & VAR_41) != 0) {

   VAR_34->sdtr_done &= ~VAR_41;

   VAR_46 = FUNC_4(VAR_42, VAR_49);
   VAR_48 |= VAR_29;
   FUNC_7(VAR_34,
          VAR_34->
          sdtr_period_tbl[(VAR_46 >> 4) &
            (uchar)(VAR_34->
             max_sdtr_index -
             1)],
          (uchar)(VAR_46 & (uchar)
           VAR_19));
  }

  FUNC_11(VAR_42,
     (ushort)(VAR_37 +
       (ushort)VAR_14), VAR_48);

  VAR_43 = FUNC_8(VAR_42,
        (ushort)(VAR_37 + (ushort)
          VAR_16));
  VAR_43 &= 0xDC;
  if ((VAR_34->pci_fix_asyn_xfer & VAR_41)
      && !(VAR_34->pci_fix_asyn_xfer_always & VAR_41)
      ) {

   VAR_43 |= (VAR_21
         | VAR_20);

  }
  FUNC_11(VAR_42,
     (ushort)(VAR_37 +
       (ushort)VAR_16),
     VAR_43);

  VAR_44 = FUNC_8(VAR_42,
        (ushort)(VAR_37 + (ushort)
          VAR_15));
  VAR_44 |= (VAR_32 | VAR_31);
  FUNC_11(VAR_42,
     (ushort)(VAR_37 +
       (ushort)VAR_15),
     VAR_44);

  VAR_40 = FUNC_8(VAR_42, (ushort)VAR_5);
  VAR_40 &= ~VAR_41;
  FUNC_11(VAR_42, (ushort)VAR_5, VAR_40);

  FUNC_12(VAR_42, VAR_1, 0);
  return;
 } else if (VAR_39 == VAR_10) {

  FUNC_5(VAR_42,
       VAR_4,
       (uchar *)&VAR_36,
       sizeof(EXT_MSG) >> 1);

  if ((VAR_36.msg_type == VAR_23) &&
      (VAR_36.msg_len == VAR_27) &&
      (VAR_36.msg_req == VAR_24)) {

   VAR_34->init_sdtr &= ~VAR_41;
   VAR_34->sdtr_done &= ~VAR_41;
   FUNC_10(VAR_42, VAR_51, VAR_49);
   VAR_53->sdtr_data[VAR_49] = VAR_51;
  }
  VAR_48 &= ~VAR_29;
  FUNC_11(VAR_42,
     (ushort)(VAR_37 +
       (ushort)VAR_14), VAR_48);
  FUNC_12(VAR_42, VAR_1, 0);
  return;
 } else if (VAR_39 == VAR_11) {

  VAR_52 = FUNC_8(VAR_42,
           (ushort)((ushort)VAR_37 +
             (ushort)
             VAR_18));
  VAR_50 =
      FUNC_8(VAR_42,
        (ushort)((ushort)VAR_13 +
          (ushort)VAR_47));
  if ((VAR_50 > 0) && (VAR_34->cur_dvc_qng[VAR_49] > 0)) {

   VAR_40 = FUNC_8(VAR_42,
          (ushort)VAR_5);
   VAR_40 |= VAR_41;
   FUNC_11(VAR_42,
      (ushort)VAR_5, VAR_40);
   VAR_34->queue_full_or_busy |= VAR_41;

   if (VAR_52 == VAR_33) {
    if (VAR_50 > VAR_12) {
     VAR_50 -= 1;
     VAR_34->max_dvc_qng[VAR_49] =
         VAR_50;

     FUNC_11(VAR_42,
        (ushort)((ushort)
          VAR_2
          + (ushort)
          VAR_49),
        VAR_50);






     VAR_53->queue_full |= VAR_41;
     VAR_53->queue_full_cnt[VAR_49] =
         VAR_50;
    }
   }
  }
  FUNC_12(VAR_42, VAR_1, 0);
  return;
 }
 return;
}
