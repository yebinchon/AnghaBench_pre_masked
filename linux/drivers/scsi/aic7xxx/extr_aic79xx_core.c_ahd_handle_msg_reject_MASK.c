
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct scb {TYPE_3__* hscb; int io_ctx; } ;
struct ahd_tmode_tstate {int dummy; } ;
struct ahd_softc {int msg_flags; scalar_t__ msgout_index; scalar_t__ msgout_len; } ;
struct TYPE_5__ {int transport_version; scalar_t__ offset; } ;
struct TYPE_4__ {scalar_t__ period; int ppr_options; int transport_version; scalar_t__ offset; } ;
struct ahd_initiator_tinfo {TYPE_2__ curr; TYPE_1__ goal; } ;
struct ahd_devinfo {int target; int channel; int lun; int our_scsiid; } ;
struct TYPE_6__ {int control; int scsiid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_1 (struct ahd_softc*,struct scb*) ;
 int FUNC_2 (struct scb*) ;
 int FUNC_3 (struct scb*) ;
 int FUNC_4 (struct ahd_softc*,struct scb*) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_5 (struct ahd_softc*) ;
 int FUNC_6 (struct ahd_softc*,struct ahd_devinfo*) ;
 int FUNC_7 (struct ahd_softc*,int ,int ) ;
 struct ahd_initiator_tinfo* FUNC_8 (struct ahd_softc*,int ,int ,int ,struct ahd_tmode_tstate**) ;
 int FUNC_9 (struct ahd_softc*,struct ahd_devinfo*) ;
 int FUNC_10 (struct ahd_softc*) ;
 int FUNC_11 (struct ahd_softc*,int ) ;
 int FUNC_12 (struct ahd_softc*,int ) ;
 struct scb* FUNC_13 (struct ahd_softc*,int ) ;
 int FUNC_14 (struct ahd_softc*) ;
 int FUNC_15 (struct ahd_softc*,int ,int) ;
 int FUNC_16 (struct ahd_softc*,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_17 (struct ahd_softc*,int ,int,int ) ;
 int FUNC_18 (struct ahd_softc*,struct ahd_devinfo*,int ,int ,int ,int,int ) ;
 int FUNC_19 (struct ahd_softc*,int ,struct ahd_devinfo*,int ) ;
 int FUNC_20 (struct scb*,int ,int) ;
 int FUNC_21 (struct ahd_softc*,struct ahd_devinfo*,int ,int,int ) ;
 scalar_t__ VAR_29 ;
 int FUNC_22 (char*,int ,int ,int ,int ,...) ;

__attribute__((used)) static int
FUNC_23(struct ahd_softc *VAR_30, struct ahd_devinfo *VAR_31)
{






 struct scb *VAR_32;
 struct ahd_initiator_tinfo *VAR_33;
 struct ahd_tmode_tstate *VAR_34;
 u_int VAR_35;
 u_int VAR_36;
 int VAR_37 = 0;

 VAR_35 = FUNC_10(VAR_30);
 VAR_32 = FUNC_13(VAR_30, VAR_35);
 VAR_33 = FUNC_8(VAR_30, VAR_31->channel,
        VAR_31->our_scsiid,
        VAR_31->target, &VAR_34);

 VAR_36 = FUNC_11(VAR_30, VAR_10);

 if (FUNC_17(VAR_30, VAR_1, VAR_11, VAR_9)) {
  if (FUNC_17(VAR_30, VAR_1, VAR_11, VAR_28)
   && VAR_33->goal.period <= VAR_5) {





   if (VAR_29) {
    FUNC_22("(%s:%c:%d:%d): PPR Rejected. "
           "Trying simple U160 PPR\n",
           FUNC_14(VAR_30), VAR_31->channel,
           VAR_31->target, VAR_31->lun);
   }
   VAR_33->goal.period = VAR_4;
   VAR_33->goal.ppr_options &= VAR_13
      | VAR_14
      | VAR_12;
  } else {




   if (VAR_29) {
    FUNC_22("(%s:%c:%d:%d): PPR Rejected. "
           "Trying WDTR/SDTR\n",
           FUNC_14(VAR_30), VAR_31->channel,
           VAR_31->target, VAR_31->lun);
   }
   VAR_33->goal.ppr_options = 0;
   VAR_33->curr.transport_version = 2;
   VAR_33->goal.transport_version = 2;
  }
  VAR_30->msgout_index = 0;
  VAR_30->msgout_len = 0;
  FUNC_6(VAR_30, VAR_31);
  VAR_30->msgout_index = 0;
  VAR_37 = 1;
 } else if (FUNC_17(VAR_30, VAR_1, VAR_16, VAR_9)) {


  FUNC_22("(%s:%c:%d:%d): refuses WIDE negotiation.  Using "
         "8bit transfers\n", FUNC_14(VAR_30),
         VAR_31->channel, VAR_31->target, VAR_31->lun);
  FUNC_21(VAR_30, VAR_31, VAR_17,
         VAR_6|VAR_7,
                   VAR_28);







  if (VAR_33->goal.offset != VAR_33->curr.offset) {


   VAR_30->msgout_index = 0;
   VAR_30->msgout_len = 0;
   FUNC_6(VAR_30, VAR_31);
   VAR_30->msgout_index = 0;
   VAR_37 = 1;
  }
 } else if (FUNC_17(VAR_30, VAR_1, VAR_15, VAR_9)) {

  FUNC_18(VAR_30, VAR_31, 0,
               0, 0,
     VAR_6|VAR_7,
               VAR_28);
  FUNC_22("(%s:%c:%d:%d): refuses synchronous negotiation. "
         "Using asynchronous transfers\n",
         FUNC_14(VAR_30), VAR_31->channel,
         VAR_31->target, VAR_31->lun);
 } else if ((VAR_32->hscb->control & VAR_23) != 0) {
  int VAR_38;
  int VAR_39;

  VAR_38 = (VAR_32->hscb->control & VAR_23);

  if (VAR_38 == VAR_23) {
   FUNC_22("(%s:%c:%d:%d): refuses tagged commands.  "
          "Performing non-tagged I/O\n", FUNC_14(VAR_30),
          VAR_31->channel, VAR_31->target, VAR_31->lun);
   FUNC_19(VAR_30, VAR_32->io_ctx, VAR_31, VAR_3);
   VAR_39 = ~0x23;
  } else {
   FUNC_22("(%s:%c:%d:%d): refuses %s tagged commands.  "
          "Performing simple queue tagged I/O only\n",
          FUNC_14(VAR_30), VAR_31->channel, VAR_31->target,
          VAR_31->lun, VAR_38 == VAR_21
          ? "ordered" : "head of queue");
   FUNC_19(VAR_30, VAR_32->io_ctx, VAR_31, VAR_2);
   VAR_39 = ~0x03;
  }





  FUNC_15(VAR_30, VAR_25,
    FUNC_12(VAR_30, VAR_25) & VAR_39);
   VAR_32->hscb->control &= VAR_39;
  FUNC_20(VAR_32, VAR_9,
             VAR_23);
  FUNC_15(VAR_30, VAR_22, VAR_20);
  FUNC_5(VAR_30);
  FUNC_7(VAR_30, FUNC_0(VAR_32->hscb->scsiid, VAR_31->lun),
        FUNC_3(VAR_32));






  FUNC_16(VAR_30, FUNC_4(VAR_30, VAR_32),
       FUNC_1(VAR_30, VAR_32),
       FUNC_2(VAR_32), VAR_26,
       VAR_24, VAR_8,
       VAR_27);
 } else if (FUNC_17(VAR_30, VAR_0, VAR_20, VAR_28)) {




  VAR_30->msg_flags |= VAR_18
          | VAR_19;

  FUNC_9(VAR_30, VAR_31);
  VAR_30->msgout_index = 0;
  VAR_30->msgout_len = 0;
  FUNC_6(VAR_30, VAR_31);
  VAR_30->msgout_index = 0;
  VAR_37 = 1;
 } else {



  FUNC_22("%s:%c:%d: Message reject for %x -- ignored\n",
         FUNC_14(VAR_30), VAR_31->channel, VAR_31->target,
         VAR_36);
 }
 return (VAR_37);
}
