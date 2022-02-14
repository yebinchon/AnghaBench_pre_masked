
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct scb {int flags; TYPE_1__* hscb; int sg_count; int sense_busaddr; } ;
struct ahd_transinfo {int dummy; } ;
struct ahd_tmode_tstate {int dummy; } ;
struct ahd_softc {int bugs; int msgout_len; void* msg_type; int msgout_index; int * msgout_buf; int msgin_index; } ;
struct ahd_initiator_tinfo {struct ahd_transinfo curr; } ;
struct ahd_devinfo {int lun; int target; int channel; int role; int our_scsiid; } ;
typedef int cam_status ;
struct TYPE_4__ {int phasemsg; } ;
struct TYPE_3__ {int scsiid; int lun; int control; int task_management; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ahd_softc*,int,int) ;
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

 int FUNC_1 (int,int) ;
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
 void* VAR_38 ;
 void* VAR_39 ;
 void* VAR_40 ;
 void* VAR_41 ;



 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;

 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int FUNC_2 (struct ahd_softc*,struct scb*) ;
 int FUNC_3 (struct scb*) ;
 int FUNC_4 (struct scb*) ;
 int FUNC_5 (struct scb*) ;
 int FUNC_6 (struct ahd_softc*,struct scb*) ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int FUNC_7 (struct ahd_softc*,int) ;
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
 int VAR_74 ;
 int VAR_75 ;





 int VAR_76 ;
 int VAR_77 ;

 int VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;






 int VAR_81 ;
 int FUNC_8 (struct ahd_softc*,int ,char,int,int,int ,int ) ;
 int FUNC_9 (struct ahd_softc*) ;
 int FUNC_10 (struct ahd_softc*) ;
 int FUNC_11 (struct ahd_devinfo*,int ,int ,int ,int ,int ) ;
 int VAR_82 ;
 int FUNC_12 (struct ahd_softc*) ;
 int FUNC_13 (struct scb*) ;
 int FUNC_14 (struct ahd_softc*,struct ahd_devinfo*) ;
 struct ahd_initiator_tinfo* FUNC_15 (struct ahd_softc*,int ,int ,int ,struct ahd_tmode_tstate**) ;
 int FUNC_16 (struct ahd_softc*,int ) ;
 int FUNC_17 (struct ahd_softc*,struct scb*) ;
 int FUNC_18 (struct scb*) ;
 int FUNC_19 (struct ahd_softc*) ;
 int FUNC_20 (struct scb*) ;
 int FUNC_21 (struct ahd_softc*,struct ahd_devinfo*,int,int ,char*,int ) ;
 int FUNC_22 (struct ahd_softc*) ;
 int FUNC_23 (struct ahd_softc*,struct ahd_devinfo*) ;
 int FUNC_24 (struct ahd_softc*) ;
 int FUNC_25 (struct ahd_softc*) ;
 int FUNC_26 (struct ahd_softc*,int ) ;
 int FUNC_27 (struct ahd_softc*,int ) ;
 int FUNC_28 (struct ahd_softc*,int ) ;
 int FUNC_29 (struct ahd_softc*) ;
 TYPE_2__* FUNC_30 (int) ;
 struct scb* FUNC_31 (struct ahd_softc*,int) ;
 int FUNC_32 (struct ahd_softc*) ;
 int FUNC_33 (struct ahd_softc*,int ,int) ;
 int FUNC_34 (struct ahd_softc*,int ,int ) ;
 int FUNC_35 (struct ahd_softc*,int ,int ) ;
 int FUNC_36 (struct ahd_softc*,struct scb*) ;
 int FUNC_37 (struct ahd_softc*) ;
 int FUNC_38 (struct ahd_softc*,char,int ) ;
 int FUNC_39 (struct ahd_softc*) ;
 int FUNC_40 (struct ahd_softc*,struct ahd_devinfo*,struct scb*) ;
 int FUNC_41 (struct ahd_softc*,int ,int ,int ,int,int ,int ,int ) ;
 int FUNC_42 (struct ahd_softc*,int ,int ,int,int ) ;
 int FUNC_43 (struct ahd_softc*,int ,int ) ;
 int FUNC_44 (struct ahd_softc*,struct ahd_devinfo*,int ,int ,int ,int ,int ) ;
 int FUNC_45 (struct scb*,int ) ;
 int FUNC_46 (struct ahd_softc*,struct ahd_devinfo*,int ,int ,int ) ;
 int FUNC_47 (struct ahd_softc*,struct ahd_devinfo*,struct scb*) ;
 int FUNC_48 (struct ahd_softc*,struct ahd_devinfo*,struct scb*) ;
 int FUNC_49 (struct ahd_softc*) ;
 int FUNC_50 (struct ahd_softc*) ;
 int FUNC_51 (char*) ;
 int FUNC_52 (char*,...) ;

__attribute__((used)) static void
FUNC_53(struct ahd_softc *VAR_83, u_int VAR_84)
{
 u_int VAR_85;






 VAR_85 = FUNC_26(VAR_83, VAR_70);
 FUNC_33(VAR_83, VAR_18, VAR_21);
 if ((VAR_83->bugs & VAR_3) != 0) {






  FUNC_49(VAR_83);
  while (!FUNC_29(VAR_83))
   ;
  FUNC_33(VAR_83, VAR_18, VAR_21);
 }
 FUNC_50(VAR_83);





 switch (VAR_85) {
 case 159:
 {
  struct scb *VAR_86;
  u_int VAR_87;

  FUNC_0(VAR_83, ~(VAR_7|VAR_4),
     ~(VAR_7|VAR_4));
  VAR_87 = FUNC_19(VAR_83);
  VAR_86 = FUNC_31(VAR_83, VAR_87);
  if (VAR_86 == ((void*)0)) {






  } else {
   FUNC_33(VAR_83, VAR_47, VAR_86->hscb->scsiid);
   FUNC_33(VAR_83, VAR_46, VAR_86->hscb->lun);
   FUNC_33(VAR_83, VAR_71, 0x0);
  }
  if ((FUNC_26(VAR_83, VAR_31) & VAR_30) != 0
   && (FUNC_26(VAR_83, VAR_64) & VAR_12) != 0) {
  }




  break;
 }
 case 155:
  FUNC_52("%s: Invalid Sequencer interrupt occurred, "
         "resetting channel.\n",
         FUNC_32(VAR_83));




  FUNC_38(VAR_83, 'A', VAR_81);
  break;
 case 134:
 {
  struct scb *VAR_88;
  u_int VAR_89;

  VAR_89 = FUNC_19(VAR_83);
  VAR_88 = FUNC_31(VAR_83, VAR_89);
  if (VAR_88 != ((void*)0))
   FUNC_36(VAR_83, VAR_88);
  else
   FUNC_52("%s: ", FUNC_32(VAR_83));
  FUNC_52("SCB %d Packetized Status Overrun", VAR_89);
  FUNC_12(VAR_83);
  FUNC_38(VAR_83, 'A', VAR_81);
  break;
 }
 case 163:
 {
  struct scb *VAR_90;
  u_int VAR_91;

  VAR_91 = FUNC_19(VAR_83);
  VAR_90 = FUNC_31(VAR_83, VAR_91);
  if (VAR_90 == ((void*)0)) {
   FUNC_12(VAR_83);
   FUNC_52("CFG4ISTAT: Free SCB %d referenced", VAR_91);
   FUNC_51("For safety");
  }
  FUNC_34(VAR_83, VAR_25, VAR_90->sense_busaddr);
  FUNC_35(VAR_83, VAR_26, VAR_8);
  FUNC_33(VAR_83, VAR_26 + 2, 0);
  FUNC_33(VAR_83, VAR_72, VAR_74);
  FUNC_33(VAR_83, VAR_22, VAR_43|VAR_61|VAR_27);
  break;
 }
 case 156:
 {
  u_int VAR_92;

  VAR_92 = FUNC_26(VAR_83, VAR_63) & VAR_42;
  FUNC_52("%s: ILLEGAL_PHASE 0x%x\n",
         FUNC_32(VAR_83), VAR_92);

  switch (VAR_92) {
  case 145:
  case 147:
  case 144:
  case 146:
  case 142:
  case 141:
  case 143:
   FUNC_38(VAR_83, 'A', VAR_81);
   FUNC_52("%s: Issued Bus Reset.\n", FUNC_32(VAR_83));
   break;
  case 148:
  {
   struct ahd_devinfo VAR_93;
   struct scb *VAR_94;
   struct ahd_initiator_tinfo *VAR_95;
   struct ahd_tmode_tstate *VAR_96;
   struct ahd_transinfo *VAR_97;
   u_int VAR_98;
   VAR_98 = FUNC_19(VAR_83);
   VAR_94 = FUNC_31(VAR_83, VAR_98);
   if (VAR_94 == ((void*)0)) {
    FUNC_52("Invalid phase with no valid SCB.  "
           "Resetting bus.\n");
    FUNC_38(VAR_83, 'A',
                          VAR_81);
    break;
   }
   FUNC_11(&VAR_93, FUNC_4(VAR_94),
         FUNC_6(VAR_83, VAR_94),
         FUNC_3(VAR_94),
         FUNC_2(VAR_83, VAR_94),
         VAR_45);
   VAR_95 = FUNC_15(VAR_83,
       VAR_93.channel,
       VAR_93.our_scsiid,
       VAR_93.target,
       &VAR_96);
   VAR_97 = &VAR_95->curr;
   FUNC_46(VAR_83, &VAR_93, VAR_36,
          VAR_11, VAR_81);
   FUNC_44(VAR_83, &VAR_93, 0,
                0, 0,
      VAR_11, VAR_81);

   FUNC_33(VAR_83, VAR_50, 0);
   FUNC_33(VAR_83, VAR_50+1, 0);
   FUNC_33(VAR_83, VAR_50+2, 0);
   FUNC_33(VAR_83, VAR_50+3, 0);
   FUNC_33(VAR_83, VAR_50+4, 0);
   FUNC_33(VAR_83, VAR_50+5, 0);
   FUNC_33(VAR_83, VAR_49, 6);
   VAR_94->hscb->control &= ~(VAR_80|VAR_58);
   VAR_94->hscb->control |= VAR_32;
   FUNC_33(VAR_83, VAR_51, VAR_94->hscb->control);
   FUNC_33(VAR_83, VAR_37, VAR_28);
   FUNC_33(VAR_83, VAR_47, VAR_94->hscb->scsiid);




   FUNC_33(VAR_83, VAR_46, 0);
   FUNC_33(VAR_83, VAR_71, 0);
   FUNC_9(VAR_83);
   VAR_94->flags &= ~VAR_55;
   VAR_94->flags |= VAR_48|VAR_52;
   FUNC_17(VAR_83, VAR_94);
   FUNC_45(VAR_94, VAR_16);
   FUNC_18(VAR_94);


   FUNC_42(VAR_83, VAR_93.channel, VAR_93.target,
           VAR_15, VAR_1);





   FUNC_43(VAR_83, VAR_5, VAR_5);
   FUNC_33(VAR_83, VAR_19, VAR_20);
   if ((VAR_83->bugs & VAR_2) != 0) {
    FUNC_33(VAR_83, VAR_19, 0);
   }







   break;
  }
  }
  break;
 }
 case 162:
 {
  struct scb *VAR_99;
  u_int VAR_100;







  VAR_100 = FUNC_19(VAR_83);
  VAR_99 = FUNC_31(VAR_83, VAR_100);
  if (VAR_99 == ((void*)0)) {




   FUNC_9(VAR_83);
   FUNC_33(VAR_83, VAR_37, VAR_28);
   VAR_83->msgout_buf[0] = VAR_34;
   VAR_83->msgout_len = 1;
   VAR_83->msgout_index = 0;
   VAR_83->msg_type = VAR_39;




   FUNC_33(VAR_83, VAR_51,
     FUNC_27(VAR_83, VAR_51)
     & ~VAR_78);
  }
  break;
 }
 case 160:
 {
  FUNC_12(VAR_83);
  break;
 }
 case 150:
 {
  FUNC_37(VAR_83);
  break;
 }
 case 158:
 {
  struct ahd_devinfo VAR_101;
  FUNC_14(VAR_83, &VAR_101);
  if (VAR_83->msg_type == VAR_40) {
   struct scb *VAR_102;
   u_int VAR_103;
   u_int VAR_104;

   VAR_104 = FUNC_26(VAR_83, VAR_63) & VAR_42;
   if (VAR_104 != 143
    && VAR_104 != 142) {
    FUNC_52("ahd_intr: HOST_MSG_LOOP bad "
           "phase 0x%x\n", VAR_104);




    FUNC_12(VAR_83);
    FUNC_10(VAR_83);
    FUNC_39(VAR_83);
    return;
   }

   VAR_103 = FUNC_19(VAR_83);
   VAR_102 = FUNC_31(VAR_83, VAR_103);
   if (VAR_101.role == VAR_45) {
    if (VAR_104 == 142)
     FUNC_47(VAR_83,
           &VAR_101,
           VAR_102);
    else {
     VAR_83->msg_type =
         VAR_38;
     VAR_83->msgin_index = 0;
    }
   }
  }

  FUNC_24(VAR_83);
  break;
 }
 case 152:
 {

  FUNC_0(VAR_83, VAR_6, VAR_6);
  FUNC_33(VAR_83, VAR_62, FUNC_26(VAR_83, VAR_62) & ~VAR_24);

  FUNC_52("%s:%c:%d: no active SCB for reconnecting "
         "target - issuing BUS DEVICE RESET\n",
         FUNC_32(VAR_83), 'A', FUNC_26(VAR_83, VAR_67) >> 4);
  FUNC_52("SAVED_SCSIID == 0x%x, SAVED_LUN == 0x%x, "
         "REG0 == 0x%x ACCUM = 0x%x\n",
         FUNC_26(VAR_83, VAR_47), FUNC_26(VAR_83, VAR_46),
         FUNC_28(VAR_83, VAR_44), FUNC_26(VAR_83, VAR_0));
  FUNC_52("SEQ_FLAGS == 0x%x, SCBPTR == 0x%x, BTT == 0x%x, "
         "SINDEX == 0x%x\n",
         FUNC_26(VAR_83, VAR_71), FUNC_19(VAR_83),
         FUNC_16(VAR_83,
      FUNC_1(FUNC_26(VAR_83, VAR_47),
         FUNC_26(VAR_83, VAR_46))),
         FUNC_28(VAR_83, VAR_75));
  FUNC_52("SELID == 0x%x, SCB_SCSIID == 0x%x, SCB_LUN == 0x%x, "
         "SCB_CONTROL == 0x%x\n",
         FUNC_26(VAR_83, VAR_67), FUNC_27(VAR_83, VAR_57),
         FUNC_27(VAR_83, VAR_54),
         FUNC_27(VAR_83, VAR_51));
  FUNC_52("SCSIBUS[0] == 0x%x, SCSISIGI == 0x%x\n",
         FUNC_26(VAR_83, VAR_60), FUNC_26(VAR_83, VAR_63));
  FUNC_52("SXFRCTL0 == 0x%x\n", FUNC_26(VAR_83, VAR_79));
  FUNC_52("SEQCTL0 == 0x%x\n", FUNC_26(VAR_83, VAR_69));
  FUNC_12(VAR_83);
  VAR_83->msgout_buf[0] = VAR_35;
  VAR_83->msgout_len = 1;
  VAR_83->msgout_index = 0;
  VAR_83->msg_type = VAR_39;
  FUNC_33(VAR_83, VAR_37, VAR_28);
  FUNC_9(VAR_83);
  break;
 }
 case 149:
 {
  FUNC_25(VAR_83);
  break;
 }
 case 157:
 {
  struct ahd_devinfo VAR_105;

  FUNC_14(VAR_83, &VAR_105);
  FUNC_23(VAR_83, &VAR_105);
  break;
 }
 case 164:
 {
  u_int VAR_106;

  VAR_106 = FUNC_26(VAR_83, VAR_29);
  FUNC_52("%s:%c:%d: unknown scsi bus phase %x, "
         "lastphase = 0x%x.  Attempting to continue\n",
         FUNC_32(VAR_83), 'A',
         FUNC_7(VAR_83, FUNC_26(VAR_83, VAR_47)),
         VAR_106, FUNC_26(VAR_83, VAR_63));
  break;
 }
 case 154:
 {
  u_int VAR_107;

  VAR_107 = FUNC_26(VAR_83, VAR_29);
  FUNC_52("%s:%c:%d: Missed busfree. "
         "Lastphase = 0x%x, Curphase = 0x%x\n",
         FUNC_32(VAR_83), 'A',
         FUNC_7(VAR_83, FUNC_26(VAR_83, VAR_47)),
         VAR_107, FUNC_26(VAR_83, VAR_63));
  FUNC_39(VAR_83);
  return;
 }
 case 161:
 {
  struct scb *VAR_108;
  u_int VAR_109;




  VAR_109 = FUNC_19(VAR_83);
  VAR_108 = FUNC_31(VAR_83, VAR_109);
  FUNC_17(VAR_83, VAR_108);
  FUNC_45(VAR_108, VAR_14);
  FUNC_18(VAR_108);
  break;
 }
 case 153:
 {
  struct ahd_devinfo VAR_110;
  struct scb *VAR_111;
  u_int VAR_112;

  FUNC_14(VAR_83, &VAR_110);
  FUNC_52("%s:%c:%d:%d: Attempt to issue message failed\n",
         FUNC_32(VAR_83), VAR_110.channel, VAR_110.target,
         VAR_110.lun);
  VAR_112 = FUNC_19(VAR_83);
  VAR_111 = FUNC_31(VAR_83, VAR_112);
  if (VAR_111 != ((void*)0)
   && (VAR_111->flags & VAR_56) != 0)




   FUNC_41(VAR_83, FUNC_6(VAR_83, VAR_111),
        FUNC_2(VAR_83, VAR_111),
        FUNC_3(VAR_111), FUNC_5(VAR_111),
        VAR_45, 0,
        VAR_65);
  FUNC_33(VAR_83, VAR_51,
    FUNC_27(VAR_83, VAR_51) & ~VAR_32);
  break;
 }
 case 132:
 {
  u_int VAR_113;
  struct scb *VAR_114;

  VAR_113 = FUNC_19(VAR_83);
  VAR_114 = FUNC_31(VAR_83, VAR_113);
  if (VAR_114 != ((void*)0)) {
   u_int VAR_115;
   u_int VAR_116;
   cam_status VAR_117;

   FUNC_36(VAR_83, VAR_114);
   FUNC_52("Task Management Func 0x%x Complete\n",
          VAR_114->hscb->task_management);
   VAR_115 = VAR_15;
   VAR_116 = VAR_53;

   switch (VAR_114->hscb->task_management) {
   case 139:
    VAR_116 = FUNC_5(VAR_114);

   case 138:
   case 137:
    VAR_115 = VAR_114->hscb->lun;
    VAR_117 = VAR_17;
    FUNC_8(VAR_83, FUNC_6(VAR_83, VAR_114),
            'A', VAR_115, VAR_116, VAR_45,
            VAR_117);
    break;
   case 136:
    VAR_115 = VAR_114->hscb->lun;

   case 135:
   {
    struct ahd_devinfo VAR_118;

    FUNC_40(VAR_83, &VAR_118, VAR_114);
    VAR_117 = VAR_13;
    FUNC_21(VAR_83, &VAR_118, VAR_115,
          VAR_13,
          VAR_115 != VAR_15
          ? "Lun Reset"
          : "Target Reset",
                           0);
    break;
   }
   default:
    FUNC_51("Unexpected TaskMgmt Func\n");
    break;
   }
  }
  break;
 }
 case 133:
 {
  u_int VAR_119;
  struct scb *VAR_120;





  VAR_119 = FUNC_19(VAR_83);
  VAR_120 = FUNC_31(VAR_83, VAR_119);
  if (VAR_120 != ((void*)0)) {




   FUNC_36(VAR_83, VAR_120);
   FUNC_52("SCB completes before TMF\n");







   while ((FUNC_26(VAR_83, VAR_62) & VAR_24) != 0
       && (FUNC_26(VAR_83, VAR_76) & VAR_66) == 0
       && (FUNC_26(VAR_83, VAR_77) & VAR_68) == 0)
    ;
   FUNC_33(VAR_83, VAR_59, 0);
   FUNC_41(VAR_83, FUNC_6(VAR_83, VAR_120),
        FUNC_2(VAR_83, VAR_120),
        FUNC_3(VAR_120), FUNC_5(VAR_120),
        VAR_45, 0,
        VAR_65);
  }
  break;
 }
 case 131:
 case 130:
 case 129:
 case 128:
  FUNC_52("%s: Tracepoint %d\n", FUNC_32(VAR_83),
         VAR_85 - 131);
  break;
 case 151:
  break;
 case 140:
  FUNC_22(VAR_83);
  break;
 default:
  FUNC_52("%s: Unexpected SEQINTCODE %d\n", FUNC_32(VAR_83),
         VAR_85);
  break;
 }





 FUNC_49(VAR_83);
}
