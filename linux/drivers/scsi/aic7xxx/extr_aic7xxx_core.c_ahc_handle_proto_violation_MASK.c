
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct scb {int flags; } ;
struct ahc_softc {int msgout_len; int msg_type; scalar_t__ msgout_index; int * msgout_buf; } ;
struct ahc_devinfo {int dummy; } ;
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
 int VAR_19 ;
 int FUNC_0 (struct ahc_softc*) ;
 int FUNC_1 (struct ahc_softc*) ;
 int FUNC_2 (struct ahc_softc*,struct ahc_devinfo*) ;
 int FUNC_3 (struct ahc_softc*,int ) ;
 TYPE_1__* FUNC_4 (int) ;
 struct scb* FUNC_5 (struct ahc_softc*,int) ;
 int FUNC_6 (struct ahc_softc*) ;
 int FUNC_7 (struct ahc_softc*,int ,int) ;
 int FUNC_8 (struct ahc_softc*,struct ahc_devinfo*) ;
 int FUNC_9 (struct ahc_softc*,struct scb*) ;
 int FUNC_10 (struct ahc_softc*,char,int ) ;
 int FUNC_11 (struct scb*,int ) ;
 int FUNC_12 (char*,...) ;

__attribute__((used)) static void
FUNC_13(struct ahc_softc *VAR_20)
{
 struct ahc_devinfo VAR_21;
 struct scb *VAR_22;
 u_int VAR_23;
 u_int VAR_24;
 u_int VAR_25;
 u_int VAR_26;
 int VAR_27;

 FUNC_2(VAR_20, &VAR_21);
 VAR_23 = FUNC_3(VAR_20, VAR_14);
 VAR_22 = FUNC_5(VAR_20, VAR_23);
 VAR_24 = FUNC_3(VAR_20, VAR_17);
 VAR_25 = FUNC_3(VAR_20, VAR_16) & VAR_9;
 VAR_26 = FUNC_3(VAR_20, VAR_3);
 if ((VAR_24 & VAR_7) != 0) {






  FUNC_8(VAR_20, &VAR_21);
  FUNC_12("Target did not send an IDENTIFY message. "
         "LASTPHASE = 0x%x.\n", VAR_26);
  VAR_22 = ((void*)0);
 } else if (VAR_22 == ((void*)0)) {




  FUNC_8(VAR_20, &VAR_21);
  FUNC_12("No SCB found during protocol violation\n");
  goto proto_violation_reset;
 } else {
  FUNC_11(VAR_22, VAR_0);
  if ((VAR_24 & VAR_8) != 0) {
   FUNC_9(VAR_20, VAR_22);
   FUNC_12("No or incomplete CDB sent to device.\n");
  } else if ((FUNC_3(VAR_20, VAR_13) & VAR_18) == 0) {







   FUNC_9(VAR_20, VAR_22);
   FUNC_12("Completed command without status.\n");
  } else {
   FUNC_9(VAR_20, VAR_22);
   FUNC_12("Unknown protocol violation.\n");
   FUNC_1(VAR_20);
  }
 }
 if ((VAR_26 & ~VAR_11) == 0
  || VAR_26 == VAR_10) {
proto_violation_reset:






  VAR_27 = FUNC_10(VAR_20, 'A', VAR_19);
  FUNC_12("%s: Issued Channel %c Bus Reset. "
         "%d SCBs aborted\n", FUNC_6(VAR_20), 'A', VAR_27);
 } else {





  FUNC_7(VAR_20, VAR_15,
    FUNC_3(VAR_20, VAR_15) & ~VAR_1);
  FUNC_0(VAR_20);
  FUNC_7(VAR_20, VAR_5, VAR_2);
  if (VAR_22 == ((void*)0)) {
   FUNC_8(VAR_20, &VAR_21);
   VAR_20->msgout_buf[0] = VAR_4;
   VAR_20->msgout_len = 1;
   VAR_20->msgout_index = 0;
   VAR_20->msg_type = VAR_6;
  } else {
   FUNC_9(VAR_20, VAR_22);
   VAR_22->flags |= VAR_12;
  }
  FUNC_12("Protocol violation %s.  Attempting to abort.\n",
         FUNC_4(VAR_25)->phasemsg);
 }
}
