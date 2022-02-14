
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct ahd_tmode_tstate {int dummy; } ;
struct ahd_softc {scalar_t__ msg_type; int msg_flags; } ;
struct TYPE_6__ {scalar_t__ period; scalar_t__ offset; scalar_t__ ppr_options; } ;
struct TYPE_5__ {scalar_t__ ppr_options; scalar_t__ offset; scalar_t__ period; } ;
struct TYPE_4__ {scalar_t__ ppr_options; scalar_t__ offset; scalar_t__ period; } ;
struct ahd_initiator_tinfo {TYPE_3__ curr; TYPE_2__ goal; TYPE_1__ user; } ;
struct ahd_devinfo {int target; int channel; int our_scsiid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 struct ahd_initiator_tinfo* FUNC_0 (struct ahd_softc*,int ,int ,int ,struct ahd_tmode_tstate**) ;
 int FUNC_1 (struct ahd_softc*) ;
 int FUNC_2 (struct ahd_softc*) ;
 int FUNC_3 (struct ahd_softc*,struct ahd_devinfo*) ;
 int FUNC_4 (struct ahd_softc*,int ,int ,int ,int ) ;
 int FUNC_5 (struct ahd_softc*) ;
 scalar_t__ FUNC_6 (struct ahd_softc*,struct ahd_devinfo*,struct ahd_tmode_tstate*,struct ahd_initiator_tinfo*,int ) ;
 int FUNC_7 (struct ahd_softc*,struct ahd_devinfo*,TYPE_3__*) ;
 int FUNC_8 (struct ahd_softc*) ;
 scalar_t__ VAR_17 ;
 int FUNC_9 (char*,...) ;

void
FUNC_10(struct ahd_softc *VAR_18, struct ahd_devinfo *VAR_19,
   u_int VAR_20, u_int VAR_21, u_int VAR_22,
   u_int VAR_23, int VAR_24)
{
 struct ahd_initiator_tinfo *VAR_25;
 struct ahd_tmode_tstate *VAR_26;
 u_int VAR_27;
 u_int VAR_28;
 u_int VAR_29;
 int VAR_30;
 int VAR_31;

 VAR_30 = (VAR_23 & VAR_3) == VAR_3;
 VAR_31 = 0;

 if (VAR_20 == 0 || VAR_21 == 0) {
  VAR_20 = 0;
  VAR_21 = 0;
 }

 VAR_25 = FUNC_0(VAR_18, VAR_19->channel, VAR_19->our_scsiid,
        VAR_19->target, &VAR_26);

 if ((VAR_23 & VAR_6) != 0) {
  VAR_25->user.period = VAR_20;
  VAR_25->user.offset = VAR_21;
  VAR_25->user.ppr_options = VAR_22;
 }

 if ((VAR_23 & VAR_5) != 0) {
  VAR_25->goal.period = VAR_20;
  VAR_25->goal.offset = VAR_21;
  VAR_25->goal.ppr_options = VAR_22;
 }

 VAR_27 = VAR_25->curr.period;
 VAR_28 = VAR_25->curr.offset;
 VAR_29 = VAR_25->curr.ppr_options;

 if ((VAR_23 & VAR_4) != 0
  && (VAR_27 != VAR_20
   || VAR_28 != VAR_21
   || VAR_29 != VAR_22)) {

  VAR_31++;

  VAR_25->curr.period = VAR_20;
  VAR_25->curr.offset = VAR_21;
  VAR_25->curr.ppr_options = VAR_22;

  FUNC_4(VAR_18, VAR_19->channel, VAR_19->target,
          VAR_7, VAR_0);
  if (VAR_17) {
   if (VAR_21 != 0) {
    int VAR_32;

    FUNC_9("%s: target %d synchronous with "
           "period = 0x%x, offset = 0x%x",
           FUNC_1(VAR_18), VAR_19->target,
           VAR_20, VAR_21);
    VAR_32 = 0;
    if ((VAR_22 & VAR_11) != 0) {
     FUNC_9("(RDSTRM");
     VAR_32++;
    }
    if ((VAR_22 & VAR_8) != 0) {
     FUNC_9("%s", VAR_32 ? "|DT" : "(DT");
     VAR_32++;
    }
    if ((VAR_22 & VAR_9) != 0) {
     FUNC_9("%s", VAR_32 ? "|IU" : "(IU");
     VAR_32++;
    }
    if ((VAR_22 & VAR_12) != 0) {
     FUNC_9("%s", VAR_32 ? "|RTI" : "(RTI");
     VAR_32++;
    }
    if ((VAR_22 & VAR_10) != 0) {
     FUNC_9("%s", VAR_32 ? "|QAS" : "(QAS");
     VAR_32++;
    }
    if (VAR_32 != 0)
     FUNC_9(")\n");
    else
     FUNC_9("\n");
   } else {
    FUNC_9("%s: target %d using "
           "asynchronous transfers%s\n",
           FUNC_1(VAR_18), VAR_19->target,
           (VAR_22 & VAR_10) != 0
         ? "(QAS)" : "");
   }
  }
 }
 if ((VAR_23 & VAR_4) != 0) {
  if (!VAR_24)
   FUNC_2(VAR_18);
  FUNC_7(VAR_18, VAR_19, &VAR_25->curr);
  if (!VAR_24)
   FUNC_5(VAR_18);
  if (VAR_18->msg_type != VAR_15) {
   if ((VAR_29 & VAR_9)
    != (VAR_22 & VAR_9)) {






    VAR_18->msg_flags |= VAR_13
            | VAR_14;
   }
   if ((VAR_29 & VAR_9) != 0) {




    VAR_18->msg_flags |= VAR_13;
   }
  }
 }

 VAR_31 += FUNC_6(VAR_18, VAR_19, VAR_26,
      VAR_25, VAR_1);

 if (VAR_31 && VAR_30)
  FUNC_8(VAR_18);
}
