
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_status_iu_header {int status; int flags; int pkt_failures_length; int sense_length; } ;
struct scsi_sense {int byte2; int control; int length; int * unused; int opcode; } ;
struct scb {int flags; int sg_count; struct ahd_dma_seg* sg_list; scalar_t__ sense_data; struct hardware_scb* hscb; } ;
struct TYPE_5__ {scalar_t__ cdb; } ;
struct TYPE_4__ {int scsi_status; } ;
struct TYPE_6__ {TYPE_2__ idata; TYPE_1__ istatus; } ;
struct hardware_scb {int cdb_len; int control; TYPE_3__ shared_data; } ;
struct ahd_transinfo {int protocol_version; } ;
struct ahd_tmode_tstate {int auto_negotiate; } ;
struct ahd_softc {int qfreeze_cnt; } ;
struct ahd_initiator_tinfo {struct ahd_transinfo curr; } ;
struct ahd_dma_seg {int dummy; } ;
struct ahd_devinfo {int target_mask; int target; int our_scsiid; int channel; } ;


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
 int VAR_12 ;
 int FUNC_0 (struct ahd_softc*,struct scb*) ;
 int FUNC_1 (struct scb*) ;
 int FUNC_2 (struct scb*) ;
 int FUNC_3 (struct scb*) ;
 int FUNC_4 (struct ahd_softc*,struct scb*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_5 (struct scsi_status_iu_header*) ;
 int VAR_17 ;
 int VAR_18 ;

 int VAR_19 ;
 int FUNC_6 (struct ahd_devinfo*,int ,int ,int,int ,int ) ;
 int VAR_20 ;
 int FUNC_7 (struct ahd_softc*,struct scb*) ;
 struct ahd_initiator_tinfo* FUNC_8 (struct ahd_softc*,int ,int ,int ,struct ahd_tmode_tstate**) ;
 int FUNC_9 (struct ahd_softc*,struct scb*) ;
 int FUNC_10 (struct scb*) ;
 int FUNC_11 (struct scb*) ;
 int FUNC_12 (struct ahd_softc*,struct scb*) ;
 int FUNC_13 (struct ahd_softc*,struct scb*) ;
 int FUNC_14 (struct scb*) ;
 scalar_t__ FUNC_15 (struct ahd_softc*) ;
 int FUNC_16 (struct ahd_softc*) ;
 int FUNC_17 (struct ahd_softc*,int ,int ) ;
 int FUNC_18 (struct ahd_softc*) ;
 int FUNC_19 (struct scb*) ;
 int FUNC_20 (struct ahd_softc*,struct scb*) ;
 int FUNC_21 (struct ahd_softc*,struct scb*) ;
 int FUNC_22 (struct scb*,int) ;
 int FUNC_23 (struct scb*,int ) ;
 int FUNC_24 (struct ahd_softc*,struct scb*) ;
 struct ahd_dma_seg* FUNC_25 (struct ahd_softc*,struct scb*,struct ahd_dma_seg*,int ,int ,int ) ;
 int FUNC_26 (struct ahd_softc*,struct scb*,int ) ;
 int FUNC_27 (struct ahd_softc*) ;
 int FUNC_28 (struct ahd_softc*,struct ahd_devinfo*,struct ahd_tmode_tstate*,struct ahd_initiator_tinfo*,int ) ;
 int FUNC_29 (struct ahd_softc*,struct scb*) ;
 int FUNC_30 (char*,...) ;
 int FUNC_31 (int ) ;

__attribute__((used)) static void
FUNC_32(struct ahd_softc *VAR_21, struct scb *VAR_22)
{
 struct hardware_scb *VAR_23;
 int VAR_24;
 VAR_23 = VAR_22->hscb;

 if (FUNC_15(VAR_21)) {
  VAR_24 = 1;
 } else {
  VAR_24 = 0;
  FUNC_18(VAR_21);
 }


 FUNC_9(VAR_21, VAR_22);
 FUNC_10(VAR_22);
 VAR_21->qfreeze_cnt++;
 FUNC_17(VAR_21, VAR_6, VAR_21->qfreeze_cnt);

 if (VAR_24 == 0)
  FUNC_27(VAR_21);


 if ((VAR_22->flags & VAR_15) != 0) {




  VAR_22->flags &= ~VAR_15;
  FUNC_23(VAR_22, VAR_3);
  FUNC_7(VAR_21, VAR_22);
  return;
 }
 FUNC_23(VAR_22, VAR_5);
 FUNC_22(VAR_22, VAR_23->shared_data.istatus.scsi_status);
 switch (VAR_23->shared_data.istatus.scsi_status) {
 case 128:
 {
  struct scsi_status_iu_header *VAR_25;

  FUNC_26(VAR_21, VAR_22, VAR_2);
  VAR_25 = (struct scsi_status_iu_header *)VAR_22->sense_data;
  FUNC_22(VAR_22, VAR_25->status);
  if ((VAR_25->flags & VAR_17) != 0) {
   FUNC_20(VAR_21, VAR_22);
   if (FUNC_31(VAR_25->pkt_failures_length) < 4) {
    FUNC_30("Unable to parse pkt_failures\n");
   } else {

    switch (FUNC_5(VAR_25)) {
    case 131:
     FUNC_30("No packet failure found\n");
     break;
    case 134:
     FUNC_30("Invalid Command IU Field\n");
     break;
    case 129:
     FUNC_30("TMF not supported\n");
     break;
    case 130:
     FUNC_30("TMF failed\n");
     break;
    case 132:
     FUNC_30("Invalid L_Q Type code\n");
     break;
    case 133:
     FUNC_30("Illegal request\n");
    default:
     break;
    }
   }
   if (VAR_25->status == 135)
    FUNC_23(VAR_22,
          VAR_4);
  }
  if ((VAR_25->flags & VAR_18) != 0) {
   VAR_22->flags |= VAR_14;




  }
  FUNC_7(VAR_21, VAR_22);
  break;
 }
 case 136:
 case 137:
 {
  struct ahd_devinfo VAR_26;
  struct ahd_dma_seg *VAR_27;
  struct scsi_sense *VAR_28;
  struct ahd_initiator_tinfo *VAR_29;
  struct ahd_tmode_tstate *VAR_30;
  struct ahd_transinfo *VAR_31;
  if (FUNC_19(VAR_22) == 0)
   break;

  FUNC_6(&VAR_26, FUNC_2(VAR_22),
        FUNC_4(VAR_21, VAR_22),
        FUNC_1(VAR_22),
        FUNC_0(VAR_21, VAR_22),
        VAR_9);
  VAR_29 = FUNC_8(VAR_21,
      VAR_26.channel,
      VAR_26.our_scsiid,
      VAR_26.target,
      &VAR_30);
  VAR_31 = &VAR_29->curr;
  VAR_27 = VAR_22->sg_list;
  VAR_28 = (struct scsi_sense *)VAR_23->shared_data.idata.cdb;



  FUNC_29(VAR_21, VAR_22);






  VAR_22->sg_count = 0;
  VAR_27 = FUNC_25(VAR_21, VAR_22, VAR_27, FUNC_12(VAR_21, VAR_22),
      FUNC_13(VAR_21, VAR_22),
              VAR_19);
  VAR_28->opcode = VAR_8;
  VAR_28->byte2 = 0;
  if (VAR_31->protocol_version <= VAR_16
   && FUNC_1(VAR_22) < 8)
   VAR_28->byte2 = FUNC_1(VAR_22) << 5;
  VAR_28->unused[0] = 0;
  VAR_28->unused[1] = 0;
  VAR_28->length = FUNC_13(VAR_21, VAR_22);
  VAR_28->control = 0;
  VAR_23->control = 0;
  if (FUNC_11(VAR_22) == FUNC_14(VAR_22)) {
   FUNC_28(VAR_21, &VAR_26,
            VAR_30, VAR_29,
            VAR_0);
  }
  if (VAR_30->auto_negotiate & VAR_26.target_mask) {
   VAR_23->control |= VAR_7;
   VAR_22->flags &=
       ~(VAR_13|VAR_10|VAR_12);
   VAR_22->flags |= VAR_11;
  }
  VAR_23->cdb_len = sizeof(*VAR_28);
  FUNC_24(VAR_21, VAR_22);
  VAR_22->flags |= VAR_15;
  FUNC_21(VAR_21, VAR_22);
  break;
 }
 case 135:
  FUNC_30("%s: Interrupted for status of 0???\n",
         FUNC_16(VAR_21));

 default:
  FUNC_7(VAR_21, VAR_22);
  break;
 }
}
