
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ahc_tmode_tstate {struct ahc_tmode_lstate** enabled_luns; } ;
struct ahc_tmode_lstate {int dummy; } ;
struct ahc_syncrate {int dummy; } ;
struct ahc_softc {int* msgin_buf; int msgin_index; int msgout_len; int* msgout_buf; scalar_t__ msgout_index; struct ahc_tmode_tstate** enabled_targets; } ;
struct ahc_initiator_tinfo {int scsirate; } ;
struct ahc_devinfo {size_t our_scsiid; size_t lun; int channel; int target; int role; } ;


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

 int VAR_13 ;

 int VAR_14 ;






 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct ahc_softc*,int ,int ,size_t,int,int ,int ) ;
 int FUNC_1 (struct ahc_softc*,struct ahc_devinfo*) ;
 int FUNC_2 (struct ahc_softc*,struct ahc_devinfo*,int,int,int,int) ;
 int FUNC_3 (struct ahc_softc*,struct ahc_devinfo*,int,int) ;
 int FUNC_4 (struct ahc_softc*,struct ahc_devinfo*,int) ;
 struct ahc_syncrate* FUNC_5 (struct ahc_softc*,struct ahc_initiator_tinfo*,int*,int*,int ) ;
 struct ahc_initiator_tinfo* FUNC_6 (struct ahc_softc*,int ,size_t,int ,struct ahc_tmode_tstate**) ;
 int FUNC_7 (struct ahc_softc*,struct ahc_devinfo*,int ,char*,int ) ;
 int FUNC_8 (struct ahc_softc*,struct ahc_devinfo*) ;
 int FUNC_9 (struct ahc_softc*,int ) ;
 int FUNC_10 (struct ahc_softc*) ;
 int FUNC_11 (struct ahc_softc*,struct ahc_tmode_lstate*,size_t,int const,int) ;
 int FUNC_12 (struct ahc_softc*) ;
 int FUNC_13 (struct ahc_softc*,struct ahc_tmode_lstate*) ;
 int FUNC_14 (struct ahc_softc*,int ,int const,int) ;
 int FUNC_15 (struct ahc_softc*,struct ahc_devinfo*,struct ahc_syncrate const*,int,int,int,int,int) ;
 int FUNC_16 (struct ahc_softc*,struct ahc_devinfo*,int,int,int) ;
 int FUNC_17 (struct ahc_softc*,struct ahc_devinfo*,struct ahc_tmode_tstate*,struct ahc_initiator_tinfo*,int ) ;
 int FUNC_18 (struct ahc_softc*,struct ahc_initiator_tinfo*,struct ahc_syncrate const*,int*,int,int ) ;
 int FUNC_19 (struct ahc_softc*,struct ahc_initiator_tinfo*,int*,int ) ;
 int VAR_20 ;
 int FUNC_20 (char*,int ,int ,int ,size_t,...) ;

__attribute__((used)) static int
FUNC_21(struct ahc_softc *VAR_21, struct ahc_devinfo *VAR_22)
{
 struct ahc_initiator_tinfo *VAR_23;
 struct ahc_tmode_tstate *VAR_24;
 int VAR_25;
 int VAR_26;
 int VAR_27;
 u_int VAR_28;

 VAR_26 = VAR_8;
 VAR_27 = VAR_6;
 VAR_25 = VAR_6;
 VAR_23 = FUNC_6(VAR_21, VAR_22->channel, VAR_22->our_scsiid,
        VAR_22->target, &VAR_24);
 VAR_28 = VAR_23->scsirate;
 switch (VAR_21->msgin_buf[0]) {
 case 138:
 case 129:
 case 139:
 case 130:
 case 133:




  VAR_26 = VAR_10;
  break;
 case 132:
  VAR_27 = FUNC_8(VAR_21, VAR_22);

 case 131:
  VAR_26 = VAR_9;
  break;
 case 137:
 {

  if (VAR_21->msgin_index < 2)
   break;
  switch (VAR_21->msgin_buf[2]) {
  case 135:
  {
   const struct ahc_syncrate *VAR_29;
   u_int VAR_30;
   u_int VAR_31;
   u_int VAR_32;
   u_int VAR_33;

   if (VAR_21->msgin_buf[1] != VAR_13) {
    VAR_25 = VAR_18;
    break;
   }
   if (VAR_21->msgin_index < (VAR_13 + 1))
    break;

   VAR_30 = VAR_21->msgin_buf[3];
   VAR_31 = 0;
   VAR_33 = VAR_32 = VAR_21->msgin_buf[4];
   VAR_29 = FUNC_5(VAR_21, VAR_23, &VAR_30,
          &VAR_31,
          VAR_22->role);
   FUNC_18(VAR_21, VAR_23, VAR_29, &VAR_32,
         VAR_28 & VAR_19,
         VAR_22->role);
   if (VAR_20) {
    FUNC_20("(%s:%c:%d:%d): Received "
           "SDTR period %x, offset %x\n\t"
           "Filtered to period %x, offset %x\n",
           FUNC_10(VAR_21), VAR_22->channel,
           VAR_22->target, VAR_22->lun,
           VAR_21->msgin_buf[3], VAR_33,
           VAR_30, VAR_32);
   }
   FUNC_15(VAR_21, VAR_22,
      VAR_29, VAR_30,
      VAR_32, VAR_31,
      VAR_2|VAR_3,
                VAR_18);






   if (FUNC_14(VAR_21, VAR_0, 135, VAR_18)) {

    if (VAR_33 != VAR_32) {

     VAR_25 = VAR_18;
    }
   } else {



    if (VAR_20
     && VAR_22->role == VAR_15) {
     FUNC_20("(%s:%c:%d:%d): Target "
            "Initiated SDTR\n",
            FUNC_10(VAR_21), VAR_22->channel,
            VAR_22->target, VAR_22->lun);
    }
    VAR_21->msgout_index = 0;
    VAR_21->msgout_len = 0;
    FUNC_3(VAR_21, VAR_22,
         VAR_30, VAR_32);
    VAR_21->msgout_index = 0;
    VAR_27 = VAR_18;
   }
   VAR_26 = VAR_9;
   break;
  }
  case 134:
  {
   u_int VAR_34;
   u_int VAR_35;
   u_int VAR_36;

   VAR_36 = VAR_6;
   if (VAR_21->msgin_buf[1] != VAR_14) {
    VAR_25 = VAR_18;
    break;
   }
   if (VAR_21->msgin_index < (VAR_14 + 1))
    break;

   VAR_34 = VAR_21->msgin_buf[3];
   VAR_35 = VAR_34;
   FUNC_19(VAR_21, VAR_23, &VAR_34,
        VAR_22->role);
   if (VAR_20) {
    FUNC_20("(%s:%c:%d:%d): Received WDTR "
           "%x filtered to %x\n",
           FUNC_10(VAR_21), VAR_22->channel,
           VAR_22->target, VAR_22->lun,
           VAR_35, VAR_34);
   }

   if (FUNC_14(VAR_21, VAR_0, 134, VAR_18)) {






    if (VAR_35 > VAR_34) {
     VAR_25 = VAR_18;
     FUNC_20("(%s:%c:%d:%d): requested %dBit "
            "transfers.  Rejecting...\n",
            FUNC_10(VAR_21), VAR_22->channel,
            VAR_22->target, VAR_22->lun,
            8 * (0x01 << VAR_34));
     VAR_34 = 0;
    }
   } else {



    if (VAR_20
     && VAR_22->role == VAR_15) {
     FUNC_20("(%s:%c:%d:%d): Target "
            "Initiated WDTR\n",
            FUNC_10(VAR_21), VAR_22->channel,
            VAR_22->target, VAR_22->lun);
    }
    VAR_21->msgout_index = 0;
    VAR_21->msgout_len = 0;
    FUNC_4(VAR_21, VAR_22, VAR_34);
    VAR_21->msgout_index = 0;
    VAR_27 = VAR_18;
    VAR_36 = VAR_18;
   }
   FUNC_17(VAR_21, VAR_22, VAR_24,
            VAR_23, VAR_1);
   FUNC_16(VAR_21, VAR_22, VAR_34,
          VAR_2|VAR_3,
                    VAR_18);
   if (VAR_36 == VAR_6 && VAR_25 == VAR_6) {




    VAR_21->msgout_index = 0;
    VAR_21->msgout_len = 0;
    FUNC_1(VAR_21, VAR_22);
    VAR_21->msgout_index = 0;
    VAR_27 = VAR_18;
   }
   VAR_26 = VAR_9;
   break;
  }
  case 136:
  {
   const struct ahc_syncrate *VAR_37;
   u_int VAR_38;
   u_int VAR_39;
   u_int VAR_40;
   u_int VAR_41;
   u_int VAR_42;
   u_int VAR_43;
   u_int VAR_44;

   if (VAR_21->msgin_buf[1] != VAR_12) {
    VAR_25 = VAR_18;
    break;
   }
   if (VAR_21->msgin_index < (VAR_12 + 1))
    break;

   VAR_38 = VAR_21->msgin_buf[3];
   VAR_39 = VAR_21->msgin_buf[5];
   VAR_40 = VAR_21->msgin_buf[6];
   VAR_42 = VAR_40;
   VAR_41 = VAR_21->msgin_buf[7];





   if ((VAR_41 & VAR_11) == 0
    && VAR_38 == 9)
    VAR_39 = 0;
   VAR_44 = VAR_41;
   VAR_43 = VAR_39;






   VAR_41 &= VAR_11;
   if (VAR_40 == 0)
    VAR_41 = 0;

   FUNC_19(VAR_21, VAR_23, &VAR_40,
        VAR_22->role);
   VAR_37 = FUNC_5(VAR_21, VAR_23, &VAR_38,
          &VAR_41,
          VAR_22->role);
   FUNC_18(VAR_21, VAR_23, VAR_37,
         &VAR_39, VAR_40,
         VAR_22->role);

   if (FUNC_14(VAR_21, VAR_0, 136, VAR_18)) {





    if (VAR_42 > VAR_40
     || VAR_43 != VAR_39
     || VAR_44 != VAR_41) {
     VAR_25 = VAR_18;
     VAR_38 = 0;
     VAR_39 = 0;
     VAR_40 = 0;
     VAR_41 = 0;
     VAR_37 = ((void*)0);
    }
   } else {
    if (VAR_22->role != VAR_16)
     FUNC_20("(%s:%c:%d:%d): Target "
            "Initiated PPR\n",
            FUNC_10(VAR_21), VAR_22->channel,
            VAR_22->target, VAR_22->lun);
    else
     FUNC_20("(%s:%c:%d:%d): Initiator "
            "Initiated PPR\n",
            FUNC_10(VAR_21), VAR_22->channel,
            VAR_22->target, VAR_22->lun);
    VAR_21->msgout_index = 0;
    VAR_21->msgout_len = 0;
    FUNC_2(VAR_21, VAR_22, VAR_38, VAR_39,
        VAR_40, VAR_41);
    VAR_21->msgout_index = 0;
    VAR_27 = VAR_18;
   }
   if (VAR_20) {
    FUNC_20("(%s:%c:%d:%d): Received PPR width %x, "
           "period %x, offset %x,options %x\n"
           "\tFiltered to width %x, period %x, "
           "offset %x, options %x\n",
           FUNC_10(VAR_21), VAR_22->channel,
           VAR_22->target, VAR_22->lun,
           VAR_42, VAR_21->msgin_buf[3],
           VAR_43, VAR_44,
           VAR_40, VAR_38, VAR_39, VAR_41);
   }
   FUNC_16(VAR_21, VAR_22, VAR_40,
          VAR_2|VAR_3,
                    VAR_18);
   FUNC_15(VAR_21, VAR_22,
      VAR_37, VAR_38,
      VAR_39, VAR_41,
      VAR_2|VAR_3,
                VAR_18);
   VAR_26 = VAR_9;
   break;
  }
  default:

   VAR_25 = VAR_18;
   break;
  }
  break;
 }
 case 128:
 default:
  VAR_25 = VAR_18;
  break;
 }

 if (VAR_25) {



  VAR_21->msgout_index = 0;
  VAR_21->msgout_len = 1;
  VAR_21->msgout_buf[0] = 132;
  VAR_26 = VAR_9;
  VAR_27 = VAR_18;
 }

 if (VAR_26 != VAR_8 && !VAR_27)

  VAR_21->msgout_len = 0;

 return (VAR_26);
}
