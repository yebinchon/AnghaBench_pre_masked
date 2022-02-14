
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
struct scsi_sense {int byte2; int length; int control; int * unused; int opcode; } ;
struct scb {int flags; int sg_list_phys; int sg_count; struct hardware_scb* hscb; struct ahc_dma_seg* sg_list; } ;
struct TYPE_6__ {int scsi_status; } ;
struct TYPE_7__ {int cdb; TYPE_1__ status; } ;
struct hardware_scb {int tag; int cdb_len; int dataptr; int datacnt; int sgptr; int control; TYPE_2__ shared_data; } ;
struct ahc_transinfo {int protocol_version; } ;
struct ahc_tmode_tstate {int auto_negotiate; } ;
struct ahc_softc {int msgout_len; int features; int flags; TYPE_4__* scb_data; int msgin_index; int msg_type; int msgout_index; int * msgout_buf; } ;
struct ahc_initiator_tinfo {struct ahc_transinfo curr; } ;
struct ahc_dma_seg {int addr; int len; } ;
struct ahc_devinfo {int target_mask; int lun; int target; int channel; int role; int our_scsiid; } ;
struct TYPE_10__ {int phase; int phasemsg; } ;
struct TYPE_9__ {TYPE_3__* hscbs; } ;
struct TYPE_8__ {int tag; } ;


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
 int FUNC_0 (int,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;


 int VAR_27 ;


 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;





 int VAR_36 ;

 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int FUNC_1 (struct ahc_softc*,struct scb*) ;
 int FUNC_2 (struct scb*) ;
 int FUNC_3 (struct ahc_softc*,struct scb*) ;
 int VAR_47 ;

 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;



 int VAR_62 ;

 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int FUNC_4 (struct ahc_softc*) ;
 int FUNC_5 (struct ahc_softc*) ;
 int VAR_74 ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct ahc_softc*) ;
 int FUNC_8 (struct ahc_softc*,struct ahc_devinfo*) ;
 struct ahc_initiator_tinfo* FUNC_9 (struct ahc_softc*,int ,int ,int ,struct ahc_tmode_tstate**) ;
 int FUNC_10 (struct ahc_softc*,struct scb*) ;
 int FUNC_11 (struct scb*) ;
 int FUNC_12 (struct scb*) ;
 int FUNC_13 (struct ahc_softc*,struct scb*) ;
 int FUNC_14 (struct ahc_softc*,struct scb*) ;
 int FUNC_15 (struct scb*) ;
 int FUNC_16 (struct ahc_softc*,struct ahc_devinfo*) ;
 int FUNC_17 (struct ahc_softc*) ;
 int FUNC_18 (struct ahc_softc*) ;
 void* FUNC_19 (int) ;
 int FUNC_20 (struct ahc_softc*,int ) ;
 int FUNC_21 (struct ahc_softc*,int ) ;
 int FUNC_22 (int) ;
 struct scb* FUNC_23 (struct ahc_softc*,int) ;
 int FUNC_24 (struct ahc_softc*) ;
 int FUNC_25 (struct ahc_softc*,int ,int) ;
 int FUNC_26 (struct scb*) ;
 TYPE_5__* VAR_75 ;
 int FUNC_27 (struct ahc_softc*,struct ahc_devinfo*) ;
 int FUNC_28 (struct ahc_softc*,struct scb*) ;
 int FUNC_29 (struct ahc_softc*,struct scb*) ;
 int FUNC_30 (struct ahc_softc*) ;
 int FUNC_31 (struct ahc_softc*,int ,int ) ;
 int FUNC_32 (struct ahc_softc*) ;
 int FUNC_33 (struct scb*,int) ;
 int FUNC_34 (struct ahc_softc*,int ,int ,int,int,int ,int ,int ) ;
 int FUNC_35 (struct scb*,int ) ;
 int FUNC_36 (struct scb*,int ) ;
 int FUNC_37 (struct ahc_softc*,struct ahc_devinfo*,struct scb*) ;
 int FUNC_38 (struct ahc_softc*,struct ahc_devinfo*,struct scb*) ;
 int FUNC_39 (struct ahc_softc*) ;
 int FUNC_40 (struct ahc_softc*,struct ahc_devinfo*,struct ahc_tmode_tstate*,struct ahc_initiator_tinfo*,int ) ;
 int FUNC_41 (struct ahc_softc*,struct scb*) ;
 int VAR_76 ;
 int FUNC_42 (char*,...) ;
 int FUNC_43 (char*,...) ;

__attribute__((used)) static void
FUNC_44(struct ahc_softc *VAR_77, u_int VAR_78)
{
 struct scb *VAR_79;
 struct ahc_devinfo VAR_80;

 FUNC_8(VAR_77, &VAR_80);







 FUNC_25(VAR_77, VAR_16, VAR_17);
 switch (VAR_78 & VAR_65) {
 case 144:
 {
  u_int VAR_81;
  struct hardware_scb *VAR_82;






  FUNC_25(VAR_77, VAR_40, 0);
  VAR_81 = FUNC_20(VAR_77, VAR_52);
  VAR_79 = FUNC_23(VAR_77, VAR_81);
  if (VAR_79 == ((void*)0)) {
   FUNC_27(VAR_77, &VAR_80);
   FUNC_43("ahc_intr - referenced scb "
          "not valid during seqint 0x%x scb(%d)\n",
          VAR_78, VAR_81);
   FUNC_7(VAR_77);
   FUNC_42("for safety");
   goto unpause;
  }

  VAR_82 = VAR_79->hscb;


  if ((VAR_79->flags & VAR_51) != 0) {





   VAR_79->flags &= ~VAR_51;
   FUNC_36(VAR_79, VAR_10);
   break;
  }
  FUNC_36(VAR_79, VAR_12);

  FUNC_10(VAR_77, VAR_79);
  FUNC_11(VAR_79);
  FUNC_35(VAR_79, VAR_82->shared_data.status.scsi_status);
  switch (VAR_82->shared_data.status.scsi_status) {
  case 129:
   FUNC_43("%s: Interrupted for status of 0???\n",
          FUNC_24(VAR_77));
   break;
  case 130:
  case 131:
  {
   struct ahc_dma_seg *VAR_83;
   struct scsi_sense *VAR_84;
   struct ahc_initiator_tinfo *VAR_85;
   struct ahc_tmode_tstate *VAR_86;
   struct ahc_transinfo *VAR_87;
   if (FUNC_26(VAR_79) == 0)
    break;

   VAR_85 = FUNC_9(VAR_77,
       VAR_80.channel,
       VAR_80.our_scsiid,
       VAR_80.target,
       &VAR_86);
   VAR_87 = &VAR_85->curr;
   VAR_83 = VAR_79->sg_list;
   VAR_84 = (struct scsi_sense *)(&VAR_82->shared_data.cdb);



   FUNC_41(VAR_77, VAR_79);






   VAR_83->addr = FUNC_13(VAR_77, VAR_79);
   VAR_83->len = FUNC_14(VAR_77, VAR_79);
   VAR_83->len |= VAR_2;


   VAR_83->addr = FUNC_19(VAR_83->addr);
   VAR_83->len = FUNC_19(VAR_83->len);

   VAR_84->opcode = VAR_39;
   VAR_84->byte2 = 0;
   if (VAR_87->protocol_version <= VAR_61
    && FUNC_2(VAR_79) < 8)
    VAR_84->byte2 = FUNC_2(VAR_79) << 5;
   VAR_84->unused[0] = 0;
   VAR_84->unused[1] = 0;
   VAR_84->length = VAR_83->len;
   VAR_84->control = 0;
   VAR_82->control = 0;
   if (FUNC_12(VAR_79)
    == FUNC_15(VAR_79)) {
    FUNC_40(VAR_77, &VAR_80,
             VAR_86, VAR_85,
             VAR_4);
   }
   if (VAR_86->auto_negotiate & VAR_80.target_mask) {
    VAR_82->control |= VAR_28;
    VAR_79->flags &= ~VAR_48;
    VAR_79->flags |= VAR_45;
   }
   VAR_82->cdb_len = sizeof(*VAR_84);
   VAR_82->dataptr = VAR_83->addr;
   VAR_82->datacnt = VAR_83->len;
   VAR_82->sgptr = VAR_79->sg_list_phys | VAR_67;
   VAR_82->sgptr = FUNC_19(VAR_82->sgptr);
   VAR_79->sg_count = 1;
   VAR_79->flags |= VAR_51;
   FUNC_29(VAR_77, VAR_79);
   FUNC_25(VAR_77, VAR_40, VAR_63);




   FUNC_33(VAR_79, 5 * 1000000);
   break;
  }
  default:
   break;
  }
  break;
 }
 case 137:
 {

  FUNC_25(VAR_77, VAR_58,
    FUNC_20(VAR_77, VAR_58) & (VAR_23|VAR_22|VAR_21));

  FUNC_43("%s:%c:%d: no active SCB for reconnecting "
         "target - issuing BUS DEVICE RESET\n",
         FUNC_24(VAR_77), VAR_80.channel, VAR_80.target);
  FUNC_43("SAVED_SCSIID == 0x%x, SAVED_LUN == 0x%x, "
         "ARG_1 == 0x%x ACCUM = 0x%x\n",
         FUNC_20(VAR_77, VAR_43), FUNC_20(VAR_77, VAR_42),
         FUNC_20(VAR_77, VAR_8), FUNC_20(VAR_77, VAR_0));
  FUNC_43("SEQ_FLAGS == 0x%x, SCBPTR == 0x%x, BTT == 0x%x, "
         "SINDEX == 0x%x\n",
         FUNC_20(VAR_77, VAR_66), FUNC_20(VAR_77, VAR_44),
         FUNC_21(VAR_77,
       FUNC_0(FUNC_20(VAR_77, VAR_43),
          FUNC_20(VAR_77, VAR_42))),
         FUNC_20(VAR_77, VAR_69));
  FUNC_43("SCSIID == 0x%x, SCB_SCSIID == 0x%x, SCB_LUN == 0x%x, "
         "SCB_TAG == 0x%x, SCB_CONTROL == 0x%x\n",
         FUNC_20(VAR_77, VAR_55), FUNC_20(VAR_77, VAR_50),
         FUNC_20(VAR_77, VAR_47), FUNC_20(VAR_77, VAR_52),
         FUNC_20(VAR_77, VAR_46));
  FUNC_43("SCSIBUSL == 0x%x, SCSISIGI == 0x%x\n",
         FUNC_20(VAR_77, VAR_53), FUNC_20(VAR_77, VAR_59));
  FUNC_43("SXFRCTL0 == 0x%x\n", FUNC_20(VAR_77, VAR_71));
  FUNC_43("SEQCTL == 0x%x\n", FUNC_20(VAR_77, VAR_64));
  FUNC_7(VAR_77);
  VAR_77->msgout_buf[0] = VAR_30;
  VAR_77->msgout_len = 1;
  VAR_77->msgout_index = 0;
  VAR_77->msg_type = VAR_33;
  FUNC_25(VAR_77, VAR_31, VAR_26);
  FUNC_4(VAR_77);
  break;
 }
 case 128:
 {
  u_int VAR_88 = FUNC_20(VAR_77, VAR_0);
  FUNC_43("%s:%c:%d: Warning - unknown message received from "
         "target (0x%x).  Rejecting\n",
         FUNC_24(VAR_77), VAR_80.channel, VAR_80.target, VAR_88);
  break;
 }
 case 133:
 {
  FUNC_18(VAR_77);
  break;
 }
 case 141:
  FUNC_16(VAR_77, &VAR_80);
  break;
 case 135:
  FUNC_30(VAR_77);
  break;
 case 145:
 {
  u_int VAR_89;

  VAR_89 = FUNC_20(VAR_77, VAR_27);
  FUNC_43("%s:%c:%d: unknown scsi bus phase %x, "
         "lastphase = 0x%x.  Attempting to continue\n",
         FUNC_24(VAR_77), VAR_80.channel, VAR_80.target,
         VAR_89, FUNC_20(VAR_77, VAR_59));
  break;
 }
 case 140:
 {
  u_int VAR_90;

  VAR_90 = FUNC_20(VAR_77, VAR_27);
  FUNC_43("%s:%c:%d: Missed busfree. "
         "Lastphase = 0x%x, Curphase = 0x%x\n",
         FUNC_24(VAR_77), VAR_80.channel, VAR_80.target,
         VAR_90, FUNC_20(VAR_77, VAR_59));
  FUNC_32(VAR_77);
  return;
 }
 case 142:
 {
  if (VAR_77->msg_type == VAR_34) {
   struct scb *VAR_91;
   u_int VAR_92;
   u_int VAR_93;

   VAR_93 = FUNC_20(VAR_77, VAR_59) & VAR_36;
   if (VAR_93 != VAR_37
    && VAR_93 != VAR_38) {
    FUNC_43("ahc_intr: HOST_MSG_LOOP bad "
           "phase 0x%x\n",
          VAR_93);




    FUNC_5(VAR_77);
    FUNC_32(VAR_77);
    return;
   }

   VAR_92 = FUNC_20(VAR_77, VAR_52);
   VAR_91 = FUNC_23(VAR_77, VAR_92);
   if (VAR_80.role == VAR_41) {
    if (VAR_93 == VAR_38) {
     if (VAR_91 == ((void*)0))
      FUNC_42("HOST_MSG_LOOP with "
            "invalid SCB %x\n",
            VAR_92);

     FUNC_37(VAR_77,
           &VAR_80,
           VAR_91);
    } else {
     VAR_77->msg_type =
         VAR_32;
     VAR_77->msgin_index = 0;
    }
   }
  }

  FUNC_17(VAR_77);
  break;
 }
 case 134:
 {
  if ((VAR_78 & VAR_56) == 0
   && (FUNC_20(VAR_77, VAR_70) & VAR_57) != 0) {

   if ((VAR_77->features & VAR_3) == 0) {
    u_int VAR_94;







    VAR_94 = FUNC_20(VAR_77, VAR_59) & VAR_36;
    FUNC_25(VAR_77, VAR_27, VAR_94);
    FUNC_25(VAR_77, VAR_60, VAR_94);
   }
   if ((FUNC_20(VAR_77, VAR_59) & (VAR_14|VAR_29)) == 0) {
    int VAR_95;







    FUNC_25(VAR_77, VAR_72,
      FUNC_20(VAR_77, VAR_72) | VAR_9);
    VAR_95 = 5000;
    while (--VAR_95 != 0) {
     if ((FUNC_20(VAR_77, VAR_59)
       & (VAR_14|VAR_29)) != 0)
      break;
     FUNC_6(100);
    }
    FUNC_25(VAR_77, VAR_72,
      FUNC_20(VAR_77, VAR_72) & ~VAR_9);
    if (VAR_95 == 0) {
     struct scb *VAR_96;
     u_int VAR_97;

     FUNC_27(VAR_77, &VAR_80);
     FUNC_43("Unable to clear parity error.  "
            "Resetting bus.\n");
     VAR_97 = FUNC_20(VAR_77, VAR_52);
     VAR_96 = FUNC_23(VAR_77, VAR_97);
     if (VAR_96 != ((void*)0))
      FUNC_36(VAR_96,
          VAR_13);
     FUNC_31(VAR_77, VAR_80.channel,
                       VAR_73);
    }
   } else {
    FUNC_20(VAR_77, VAR_54);
   }
  }
  break;
 }
 case 143:
 {
  u_int VAR_98 = FUNC_20(VAR_77, VAR_52);
  u_int VAR_99 = FUNC_20(VAR_77, VAR_27);
  u_int VAR_100;

  VAR_79 = FUNC_23(VAR_77, VAR_98);
  for (VAR_100 = 0; VAR_100 < VAR_76; VAR_100++) {
   if (VAR_99 == VAR_75[VAR_100].phase)
    break;
  }
  FUNC_28(VAR_77, VAR_79);
  FUNC_43("data overrun detected %s."
         "  Tag == 0x%x.\n",
         VAR_75[VAR_100].phasemsg,
           VAR_79->hscb->tag);
  FUNC_28(VAR_77, VAR_79);
  FUNC_43("%s seen Data Phase.  Length = %ld.  NumSGs = %d.\n",
         FUNC_20(VAR_77, VAR_66) & VAR_19 ? "Have" : "Haven't",
         FUNC_15(VAR_79), VAR_79->sg_count);
  if (VAR_79->sg_count > 0) {
   for (VAR_100 = 0; VAR_100 < VAR_79->sg_count; VAR_100++) {

    FUNC_43("sg[%d] - Addr 0x%x%x : Length %d\n",
           VAR_100,
           (FUNC_22(VAR_79->sg_list[VAR_100].len) >> 24
            & VAR_68),
           FUNC_22(VAR_79->sg_list[VAR_100].addr),
           FUNC_22(VAR_79->sg_list[VAR_100].len)
           & VAR_5);
   }
  }




  FUNC_10(VAR_77, VAR_79);
  if ((VAR_79->flags & VAR_51) == 0) {
   FUNC_36(VAR_79, VAR_11);
  } else {
   VAR_79->flags &= ~VAR_51;
   FUNC_36(VAR_79, VAR_10);
  }
  FUNC_11(VAR_79);

  if ((VAR_77->features & VAR_7) != 0) {




   FUNC_25(VAR_77, VAR_71,
     FUNC_20(VAR_77, VAR_71) | VAR_18|VAR_15);
   FUNC_25(VAR_77, VAR_71,
     FUNC_20(VAR_77, VAR_71) | VAR_18|VAR_15);
  }
  if ((VAR_77->flags & VAR_1) != 0) {
   u_int VAR_101;


   VAR_101 = FUNC_20(VAR_77, VAR_20);
   FUNC_25(VAR_77, VAR_20, VAR_101 | VAR_24);
   FUNC_25(VAR_77, VAR_25, 0);
   FUNC_25(VAR_77, VAR_20, VAR_101);
  }
  break;
 }
 case 139:
 {
  u_int VAR_102;

  FUNC_43("%s:%c:%d:%d: Attempt to issue message failed\n",
         FUNC_24(VAR_77), VAR_80.channel, VAR_80.target,
         VAR_80.lun);
  VAR_102 = FUNC_20(VAR_77, VAR_52);
  VAR_79 = FUNC_23(VAR_77, VAR_102);
  if (VAR_79 != ((void*)0)
   && (VAR_79->flags & VAR_49) != 0)




   FUNC_34(VAR_77, FUNC_3(VAR_77, VAR_79),
        FUNC_1(VAR_77, VAR_79),
        FUNC_2(VAR_79), VAR_79->hscb->tag,
        VAR_41, 0,
        VAR_62);
  break;
 }
 case 138:
 {
  FUNC_43("%s: No free or disconnected SCBs\n", FUNC_24(VAR_77));
  FUNC_7(VAR_77);
  FUNC_42("for safety");
  break;
 }
 case 132:
 {
  u_int VAR_103;

  VAR_103 = FUNC_20(VAR_77, VAR_44);
  FUNC_43("Bogus TAG after DMA.  SCBPTR %d, tag %d, our tag %d\n",
         VAR_103, FUNC_20(VAR_77, VAR_8),
         VAR_77->scb_data->hscbs[VAR_103].tag);
  FUNC_7(VAR_77);
  FUNC_42("for safety");
  break;
 }
 case 136:
 {
  FUNC_43("%s: BTT calculation out of range\n", FUNC_24(VAR_77));
  FUNC_43("SAVED_SCSIID == 0x%x, SAVED_LUN == 0x%x, "
         "ARG_1 == 0x%x ACCUM = 0x%x\n",
         FUNC_20(VAR_77, VAR_43), FUNC_20(VAR_77, VAR_42),
         FUNC_20(VAR_77, VAR_8), FUNC_20(VAR_77, VAR_0));
  FUNC_43("SEQ_FLAGS == 0x%x, SCBPTR == 0x%x, BTT == 0x%x, "
         "SINDEX == 0x%x\n, A == 0x%x\n",
         FUNC_20(VAR_77, VAR_66), FUNC_20(VAR_77, VAR_44),
         FUNC_21(VAR_77,
       FUNC_0(FUNC_20(VAR_77, VAR_43),
          FUNC_20(VAR_77, VAR_42))),
         FUNC_20(VAR_77, VAR_69),
         FUNC_20(VAR_77, VAR_0));
  FUNC_43("SCSIID == 0x%x, SCB_SCSIID == 0x%x, SCB_LUN == 0x%x, "
         "SCB_TAG == 0x%x, SCB_CONTROL == 0x%x\n",
         FUNC_20(VAR_77, VAR_55), FUNC_20(VAR_77, VAR_50),
         FUNC_20(VAR_77, VAR_47), FUNC_20(VAR_77, VAR_52),
         FUNC_20(VAR_77, VAR_46));
  FUNC_43("SCSIBUSL == 0x%x, SCSISIGI == 0x%x\n",
         FUNC_20(VAR_77, VAR_53), FUNC_20(VAR_77, VAR_59));
  FUNC_7(VAR_77);
  FUNC_42("for safety");
  break;
 }
 default:
  FUNC_43("ahc_intr: seqint, "
         "intstat == 0x%x, scsisigi = 0x%x\n",
         VAR_78, FUNC_20(VAR_77, VAR_59));
  break;
 }
unpause:





 FUNC_39(VAR_77);
}
