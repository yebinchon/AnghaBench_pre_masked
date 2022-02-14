
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ ushort ;
typedef scalar_t__ uchar ;
struct TYPE_13__ {int queue_full_or_busy; scalar_t__* max_dvc_qng; scalar_t__ cur_total_qng; scalar_t__* cur_dvc_qng; int unit_not_ready; int start_motor; int max_dma_count; int iop_base; } ;
struct TYPE_11__ {scalar_t__ done_stat; scalar_t__ host_stat; } ;
struct TYPE_10__ {unsigned long srb_tag; scalar_t__ target_ix; } ;
struct TYPE_12__ {scalar_t__ q_status; int cntl; scalar_t__ extra_bytes; TYPE_2__ d3; int remain_bytes; TYPE_1__ d2; } ;
typedef int PortAddr ;
typedef int ASC_SCSI_BIT_ID_TYPE ;
typedef TYPE_3__ ASC_QDONE_INFO ;
typedef TYPE_4__ ASC_DVC_VAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 void* FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_4__*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,scalar_t__,int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 void* VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 void* VAR_26 ;
 scalar_t__ FUNC_11 (int ,scalar_t__,TYPE_3__*,int ) ;
 int FUNC_12 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(ASC_DVC_VAR *VAR_27)
{
 uchar VAR_28;
 uchar VAR_29;
 uchar VAR_30;
 uchar VAR_31;
 uchar VAR_32;
 uchar VAR_33;
 uchar VAR_34;
 ASC_SCSI_BIT_ID_TYPE VAR_35;
 ASC_SCSI_BIT_ID_TYPE VAR_36;
 PortAddr VAR_37;
 ushort VAR_38;
 ushort VAR_39;
 uchar VAR_40;
 ASC_QDONE_INFO VAR_41;
 ASC_QDONE_INFO *VAR_42;
 bool VAR_43;

 VAR_37 = VAR_27->iop_base;
 VAR_29 = 1;
 VAR_42 = (ASC_QDONE_INFO *)&VAR_41;
 VAR_33 = (uchar)FUNC_3(VAR_37);
 VAR_38 = FUNC_0(VAR_33);
 VAR_28 = FUNC_5(VAR_37,
      (ushort)(VAR_38 + (ushort)VAR_6));
 if (VAR_28 != VAR_5) {
  FUNC_4(VAR_37, VAR_28);
  VAR_38 = FUNC_0(VAR_28);
  VAR_31 = FUNC_11(VAR_37, VAR_38, VAR_42,
           VAR_27->max_dma_count);
  FUNC_10(VAR_37,
     (ushort)(VAR_38 +
       (ushort)VAR_7),
     (uchar)(VAR_42->
      q_status & (uchar)~(VAR_25 |
            VAR_22)));
  VAR_34 = FUNC_2(VAR_42->d2.target_ix);
  VAR_36 = FUNC_1(VAR_42->d2.target_ix);
  if ((VAR_42->cntl & VAR_15) != 0) {
   VAR_39 = VAR_38;
   VAR_30 = VAR_28;
   for (VAR_32 = 0; VAR_32 < VAR_31; VAR_32++) {
    VAR_30 = FUNC_5(VAR_37,
            (ushort)(VAR_39
              + (ushort)
              VAR_6));
    VAR_39 = FUNC_0(VAR_30);
    if (VAR_30 == VAR_5) {
     FUNC_8(VAR_27,
          VAR_2);
     VAR_42->d3.done_stat = VAR_17;
     VAR_42->d3.host_stat =
         VAR_18;
     goto FATAL_ERR_QDONE;
    }
    FUNC_10(VAR_37,
       (ushort)(VAR_39 + (ushort)
         VAR_7),
       VAR_24);
   }
   VAR_29 = VAR_31 + 1;
   FUNC_4(VAR_37, VAR_30);
  }
  if (VAR_27->queue_full_or_busy & VAR_36) {
   VAR_40 = FUNC_5(VAR_37,
        (ushort)((ushort)
          VAR_4
          + (ushort)
          VAR_42->d2.
          target_ix));
   if (VAR_40 < VAR_27->max_dvc_qng[VAR_34]) {
    VAR_35 = FUNC_5(VAR_37, (ushort)
           VAR_3);
    VAR_35 &= ~VAR_36;
    FUNC_10(VAR_37,
       (ushort)VAR_3,
       VAR_35);
    VAR_27->queue_full_or_busy &= ~VAR_36;
   }
  }
  if (VAR_27->cur_total_qng >= VAR_29) {
   VAR_27->cur_total_qng -= VAR_29;
   if (VAR_27->cur_dvc_qng[VAR_34] != 0) {
    VAR_27->cur_dvc_qng[VAR_34]--;
   }
  } else {
   FUNC_8(VAR_27, VAR_0);
   VAR_42->d3.done_stat = VAR_17;
   goto FATAL_ERR_QDONE;
  }
  if ((VAR_42->d2.srb_tag == 0UL) ||
      ((VAR_42->q_status & VAR_22) != 0)) {
   return (0x11);
  } else if (VAR_42->q_status == VAR_23) {




   VAR_43 = 0;
   if (VAR_42->extra_bytes != 0) {
    VAR_42->remain_bytes += VAR_42->extra_bytes;
   }
   if (VAR_42->d3.done_stat == VAR_17) {
    if (VAR_42->d3.host_stat ==
        VAR_19) {
     if ((VAR_42->
          cntl & (VAR_12 | VAR_13))
         == 0) {
      VAR_42->d3.done_stat =
          VAR_16;
      VAR_42->d3.host_stat =
          VAR_21;
     } else if (VAR_43) {
      VAR_42->d3.done_stat =
          VAR_16;
      VAR_42->d3.host_stat =
          VAR_21;
     }
    } else if (VAR_42->d3.host_stat ==
        VAR_20) {
     FUNC_9(VAR_37);
     FUNC_6(VAR_37,
         (uchar)(VAR_10
          | VAR_9));
     FUNC_13(60);
     FUNC_6(VAR_37, VAR_9);
     FUNC_7(VAR_37,
        VAR_11);
     FUNC_7(VAR_37, 0);
     FUNC_6(VAR_37, 0);
    }
   }
   if ((VAR_42->cntl & VAR_14) == 0) {
    FUNC_12(VAR_27, VAR_42);
   } else {
    if ((FUNC_5(VAR_37,
           (ushort)(VAR_38 + (ushort)
             VAR_8))
         == VAR_26)) {
     VAR_27->unit_not_ready &= ~VAR_36;
     if (VAR_42->d3.done_stat != VAR_16) {
      VAR_27->start_motor &=
          ~VAR_36;
     }
    }
   }
   return (1);
  } else {
   FUNC_8(VAR_27, VAR_1);
 FATAL_ERR_QDONE:
   if ((VAR_42->cntl & VAR_14) == 0) {
    FUNC_12(VAR_27, VAR_42);
   }
   return (0x80);
  }
 }
 return (0);
}
