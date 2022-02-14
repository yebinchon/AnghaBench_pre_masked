
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct ahc_tmode_tstate {int ultraenb; } ;
struct ahc_syncrate {scalar_t__ sxfr_u2; int sxfr; int rate; } ;
struct ahc_softc {int features; } ;
struct TYPE_6__ {scalar_t__ period; scalar_t__ offset; scalar_t__ ppr_options; } ;
struct TYPE_5__ {scalar_t__ ppr_options; scalar_t__ offset; scalar_t__ period; } ;
struct TYPE_4__ {scalar_t__ ppr_options; scalar_t__ offset; scalar_t__ period; } ;
struct ahc_initiator_tinfo {scalar_t__ scsirate; TYPE_3__ curr; TYPE_2__ goal; TYPE_1__ user; } ;
struct ahc_devinfo {int target_mask; int target; int channel; int our_scsiid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 struct ahc_initiator_tinfo* FUNC_0 (struct ahc_softc*,int ,int ,int ,struct ahc_tmode_tstate**) ;
 scalar_t__ FUNC_1 (struct ahc_softc*,int ) ;
 int FUNC_2 (struct ahc_softc*) ;
 int FUNC_3 (struct ahc_softc*,int ,scalar_t__) ;
 int FUNC_4 (struct ahc_softc*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct ahc_softc*,struct ahc_devinfo*,struct ahc_tmode_tstate*,struct ahc_initiator_tinfo*,int ) ;
 int FUNC_6 (struct ahc_softc*) ;
 scalar_t__ VAR_19 ;
 int FUNC_7 (char*,int ,int ,...) ;

void
FUNC_8(struct ahc_softc *VAR_20, struct ahc_devinfo *VAR_21,
   const struct ahc_syncrate *VAR_22, u_int VAR_23,
   u_int VAR_24, u_int VAR_25, u_int VAR_26, int VAR_27)
{
 struct ahc_initiator_tinfo *VAR_28;
 struct ahc_tmode_tstate *VAR_29;
 u_int VAR_30;
 u_int VAR_31;
 u_int VAR_32;
 int VAR_33;
 int VAR_34;

 VAR_33 = (VAR_26 & VAR_2) == VAR_2;
 VAR_34 = 0;

 if (VAR_22 == ((void*)0)) {
  VAR_23 = 0;
  VAR_24 = 0;
 }

 VAR_28 = FUNC_0(VAR_20, VAR_21->channel, VAR_21->our_scsiid,
        VAR_21->target, &VAR_29);

 if ((VAR_26 & VAR_5) != 0) {
  VAR_28->user.period = VAR_23;
  VAR_28->user.offset = VAR_24;
  VAR_28->user.ppr_options = VAR_25;
 }

 if ((VAR_26 & VAR_4) != 0) {
  VAR_28->goal.period = VAR_23;
  VAR_28->goal.offset = VAR_24;
  VAR_28->goal.ppr_options = VAR_25;
 }

 VAR_30 = VAR_28->curr.period;
 VAR_31 = VAR_28->curr.offset;
 VAR_32 = VAR_28->curr.ppr_options;

 if ((VAR_26 & VAR_3) != 0
  && (VAR_30 != VAR_23
   || VAR_31 != VAR_24
   || VAR_32 != VAR_25)) {
  u_int VAR_35;

  VAR_34++;
  VAR_35 = VAR_28->scsirate;
  if ((VAR_20->features & VAR_6) != 0) {

   VAR_35 &= ~(VAR_17|VAR_13|VAR_8);
   if (VAR_22 != ((void*)0)) {
    VAR_35 |= VAR_22->sxfr_u2;
    if ((VAR_25 & VAR_10) != 0)
     VAR_35 |= VAR_8;
    else
     VAR_35 |= VAR_13;
   }
  } else {

   VAR_35 &= ~(VAR_15|VAR_14);




   VAR_29->ultraenb &= ~VAR_21->target_mask;
   if (VAR_22 != ((void*)0)) {
    if (VAR_22->sxfr & VAR_18) {
     VAR_29->ultraenb |=
      VAR_21->target_mask;
    }
    VAR_35 |= VAR_22->sxfr & VAR_15;
    VAR_35 |= VAR_24 & VAR_14;
   }
   if (VAR_33) {
    u_int VAR_36;

    VAR_36 = FUNC_1(VAR_20, VAR_16);
    VAR_36 &= ~VAR_9;
    if (VAR_29->ultraenb & VAR_21->target_mask)
     VAR_36 |= VAR_9;
    FUNC_3(VAR_20, VAR_16, VAR_36);
   }
  }
  if (VAR_33) {
   FUNC_3(VAR_20, VAR_12, VAR_35);
   if ((VAR_20->features & VAR_6) != 0)
    FUNC_3(VAR_20, VAR_11, VAR_24);
  }

  VAR_28->scsirate = VAR_35;
  VAR_28->curr.period = VAR_23;
  VAR_28->curr.offset = VAR_24;
  VAR_28->curr.ppr_options = VAR_25;

  FUNC_4(VAR_20, VAR_21->channel, VAR_21->target,
          VAR_7, VAR_0);
  if (VAR_19) {
   if (VAR_24 != 0) {
    FUNC_7("%s: target %d synchronous at %sMHz%s, "
           "offset = 0x%x\n", FUNC_2(VAR_20),
           VAR_21->target, VAR_22->rate,
           (VAR_25 & VAR_10)
           ? " DT" : "", VAR_24);
   } else {
    FUNC_7("%s: target %d using "
           "asynchronous transfers\n",
           FUNC_2(VAR_20), VAR_21->target);
   }
  }
 }

 VAR_34 += FUNC_5(VAR_20, VAR_21, VAR_29,
      VAR_28, VAR_1);

 if (VAR_34)
  FUNC_6(VAR_20);
}
