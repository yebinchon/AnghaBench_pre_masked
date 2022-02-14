
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct scb {scalar_t__ crc_retry_count; } ;
struct ahd_softc {int bugs; scalar_t__ src_mode; } ;


 int FUNC_0 (struct ahd_softc*,int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (struct scb*) ;
 int FUNC_2 (struct scb*) ;
 int FUNC_3 (struct ahd_softc*,struct scb*) ;
 scalar_t__ FUNC_4 (struct scb*) ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_5 (struct ahd_softc*,int ,char,int ,int ,int ,int ) ;
 int VAR_30 ;
 int FUNC_6 (struct ahd_softc*) ;
 int FUNC_7 (struct ahd_softc*) ;
 int FUNC_8 (struct ahd_softc*,struct scb*) ;
 int FUNC_9 (struct scb*) ;
 scalar_t__ FUNC_10 (struct ahd_softc*) ;
 scalar_t__ FUNC_11 (struct ahd_softc*,int ) ;
 scalar_t__ FUNC_12 (struct ahd_softc*,int ) ;
 scalar_t__ FUNC_13 (struct ahd_softc*,int ) ;
 struct scb* FUNC_14 (struct ahd_softc*,scalar_t__) ;
 int FUNC_15 (struct ahd_softc*) ;
 int FUNC_16 (struct ahd_softc*,int ,scalar_t__) ;
 int FUNC_17 (struct ahd_softc*,int ,scalar_t__) ;
 int FUNC_18 (struct ahd_softc*,struct scb*) ;
 int FUNC_19 (struct ahd_softc*,scalar_t__,scalar_t__) ;
 int FUNC_20 (struct ahd_softc*,scalar_t__) ;
 int FUNC_21 (struct scb*,int ) ;
 int FUNC_22 (char*) ;
 int FUNC_23 (char*,...) ;

__attribute__((used)) static int
FUNC_24(struct ahd_softc *VAR_31, u_int VAR_32)
{
 u_int VAR_33;

 FUNC_0(VAR_31, ~(VAR_4|VAR_2),
    ~(VAR_4|VAR_2));
 VAR_33 = FUNC_11(VAR_31, VAR_20);
 if ((VAR_33 & VAR_19) != 0) {
  struct scb *VAR_34;
  u_int VAR_35;
  u_int VAR_36;
  u_int VAR_37;
  u_int VAR_38;
  u_int VAR_39;
  FUNC_19(VAR_31, VAR_3, VAR_3);
  VAR_35 = FUNC_12(VAR_31, VAR_15);
  VAR_34 = FUNC_14(VAR_31, VAR_35);
  if (VAR_34 == ((void*)0))
         FUNC_22("SCB not valid during LQOBUSFREE");



  FUNC_16(VAR_31, VAR_10, VAR_9);
  if ((VAR_31->bugs & VAR_0) != 0)
   FUNC_16(VAR_31, VAR_10, 0);
  FUNC_16(VAR_31, VAR_27, FUNC_11(VAR_31, VAR_27) & ~VAR_16);
  FUNC_7(VAR_31);
  FUNC_16(VAR_31, VAR_13, VAR_12);







  FUNC_16(VAR_31, VAR_18, FUNC_11(VAR_31, VAR_18) | VAR_21);





  VAR_37 = FUNC_12(VAR_31, VAR_28);
  VAR_36 = FUNC_10(VAR_31);
  if (VAR_37 != VAR_35) {

   FUNC_17(VAR_31, VAR_28, VAR_35);
   VAR_38 = FUNC_12(VAR_31, VAR_29);
   if (VAR_38 == VAR_37) {
    FUNC_17(VAR_31, VAR_29, VAR_35);
    VAR_39 = VAR_25;
   } else {
    FUNC_20(VAR_31, VAR_37);
    VAR_39 = FUNC_13(VAR_31, VAR_26);
   }
   FUNC_20(VAR_31, VAR_35);
   FUNC_17(VAR_31, VAR_26, VAR_39);
  }
  FUNC_20(VAR_31, VAR_36);
  if (VAR_34->crc_retry_count < VAR_1) {
   if (FUNC_4(VAR_34) == VAR_17) {
    FUNC_18(VAR_31, VAR_34);
    FUNC_23("Probable outgoing LQ CRC error.  "
           "Retrying command\n");
   }
   VAR_34->crc_retry_count++;
  } else {
   FUNC_21(VAR_34, VAR_6);
   FUNC_9(VAR_34);
   FUNC_8(VAR_31, VAR_34);
  }

  return (0);
 } else if ((FUNC_11(VAR_31, VAR_23) & VAR_22) != 0) {







  FUNC_16(VAR_31, VAR_14, VAR_11|VAR_8);







  return (0);
 }
 if (VAR_31->src_mode != VAR_3) {
  u_int VAR_40;
  struct scb *VAR_41;

  VAR_40 = FUNC_10(VAR_31);
  VAR_41 = FUNC_14(VAR_31, VAR_40);
  FUNC_18(VAR_31, VAR_41);
  FUNC_23("Unexpected PKT busfree condition\n");
  FUNC_6(VAR_31);
  FUNC_5(VAR_31, FUNC_3(VAR_31, VAR_41), 'A',
          FUNC_1(VAR_41), FUNC_2(VAR_41),
          VAR_24, VAR_7);


  return (1);
 }
 FUNC_23("%s: Unexpected PKT busfree condition\n", FUNC_15(VAR_31));
 FUNC_6(VAR_31);

 return (1);
}
