
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct scb {int flags; } ;
struct ahd_softc {int msgout_len; int msg_type; scalar_t__ msgout_index; int * msgout_buf; } ;
struct ahd_devinfo {int dummy; } ;
struct TYPE_2__ {int phasemsg; } ;


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
 int FUNC_0 (struct ahd_softc*) ;
 int FUNC_1 (struct ahd_softc*) ;
 int FUNC_2 (struct ahd_softc*,struct ahd_devinfo*) ;
 int FUNC_3 (struct ahd_softc*) ;
 int FUNC_4 (struct ahd_softc*,int ) ;
 int FUNC_5 (struct ahd_softc*,int ) ;
 TYPE_1__* FUNC_6 (int) ;
 struct scb* FUNC_7 (struct ahd_softc*,int) ;
 int FUNC_8 (struct ahd_softc*) ;
 int FUNC_9 (struct ahd_softc*,int ,int) ;
 int FUNC_10 (struct ahd_softc*,struct ahd_devinfo*) ;
 int FUNC_11 (struct ahd_softc*,struct scb*) ;
 int FUNC_12 (struct ahd_softc*,char,int ) ;
 int FUNC_13 (struct scb*,int ) ;
 int FUNC_14 (char*,...) ;

__attribute__((used)) static void
FUNC_15(struct ahd_softc *VAR_19)
{
 struct ahd_devinfo VAR_20;
 struct scb *VAR_21;
 u_int VAR_22;
 u_int VAR_23;
 u_int VAR_24;
 u_int VAR_25;
 int VAR_26;

 FUNC_2(VAR_19, &VAR_20);
 VAR_22 = FUNC_3(VAR_19);
 VAR_21 = FUNC_7(VAR_19, VAR_22);
 VAR_23 = FUNC_4(VAR_19, VAR_16);
 VAR_24 = FUNC_4(VAR_19, VAR_15) & VAR_9;
 VAR_25 = FUNC_4(VAR_19, VAR_3);
 if ((VAR_23 & VAR_7) != 0) {






  FUNC_10(VAR_19, &VAR_20);
  FUNC_14("Target did not send an IDENTIFY message. "
         "LASTPHASE = 0x%x.\n", VAR_25);
  VAR_21 = ((void*)0);
 } else if (VAR_21 == ((void*)0)) {




  FUNC_10(VAR_19, &VAR_20);
  FUNC_14("No SCB found during protocol violation\n");
  goto proto_violation_reset;
 } else {
  FUNC_13(VAR_21, VAR_0);
  if ((VAR_23 & VAR_8) != 0) {
   FUNC_11(VAR_19, VAR_21);
   FUNC_14("No or incomplete CDB sent to device.\n");
  } else if ((FUNC_5(VAR_19, VAR_13)
     & VAR_17) == 0) {







   FUNC_11(VAR_19, VAR_21);
   FUNC_14("Completed command without status.\n");
  } else {
   FUNC_11(VAR_19, VAR_21);
   FUNC_14("Unknown protocol violation.\n");
   FUNC_1(VAR_19);
  }
 }
 if ((VAR_25 & ~VAR_11) == 0
  || VAR_25 == VAR_10) {
proto_violation_reset:






  VAR_26 = FUNC_12(VAR_19, 'A', VAR_18);
  FUNC_14("%s: Issued Channel %c Bus Reset. "
         "%d SCBs aborted\n", FUNC_8(VAR_19), 'A', VAR_26);
 } else {





  FUNC_9(VAR_19, VAR_14,
    FUNC_4(VAR_19, VAR_14) & ~VAR_1);
  FUNC_0(VAR_19);
  FUNC_9(VAR_19, VAR_5, VAR_2);
  if (VAR_21 == ((void*)0)) {
   FUNC_10(VAR_19, &VAR_20);
   VAR_19->msgout_buf[0] = VAR_4;
   VAR_19->msgout_len = 1;
   VAR_19->msgout_index = 0;
   VAR_19->msg_type = VAR_6;
  } else {
   FUNC_11(VAR_19, VAR_21);
   VAR_21->flags |= VAR_12;
  }
  FUNC_14("Protocol violation %s.  Attempting to abort.\n",
         FUNC_6(VAR_24)->phasemsg);
 }
}
