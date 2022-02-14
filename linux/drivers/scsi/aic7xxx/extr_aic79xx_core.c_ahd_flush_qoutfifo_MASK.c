
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
struct scb {scalar_t__ hscb; } ;
struct hardware_scb {int dummy; } ;
struct ahd_softc {int flags; } ;
typedef int ahd_mode_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_1 (struct ahd_softc*,struct scb*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ahd_softc*) ;
 int FUNC_4 (struct ahd_softc*,scalar_t__) ;
 int FUNC_5 (struct ahd_softc*,scalar_t__) ;
 int FUNC_6 (struct ahd_softc*,int ) ;
 int FUNC_7 (struct ahd_softc*,int ) ;
 struct scb* FUNC_8 (struct ahd_softc*,int) ;
 int FUNC_9 (struct ahd_softc*) ;
 int FUNC_10 (struct ahd_softc*,scalar_t__,int) ;
 int FUNC_11 (struct ahd_softc*,int ,int) ;
 int FUNC_12 (struct ahd_softc*,int ) ;
 int FUNC_13 (struct ahd_softc*,struct scb*) ;
 int FUNC_14 (struct ahd_softc*) ;
 int FUNC_15 (struct ahd_softc*) ;
 scalar_t__ FUNC_16 (struct ahd_softc*,struct scb*) ;
 int FUNC_17 (struct ahd_softc*,int,int) ;
 int FUNC_18 (struct ahd_softc*,int) ;
 int FUNC_19 (char*,int ,int) ;

__attribute__((used)) static void
FUNC_20(struct ahd_softc *VAR_26)
{
 struct scb *VAR_27;
 ahd_mode_state VAR_28;
 u_int VAR_29;
 u_int VAR_30;
 u_int VAR_31;
 u_int VAR_32;

 VAR_28 = FUNC_15(VAR_26);




 FUNC_17(VAR_26, VAR_1, VAR_1);
 VAR_29 = FUNC_3(VAR_26);
 while ((FUNC_4(VAR_26, VAR_15) & VAR_14) != 0) {
  u_int VAR_33;
  u_int VAR_34;

  VAR_31 = FUNC_6(VAR_26, VAR_13);
  VAR_27 = FUNC_8(VAR_26, VAR_31);
  if (VAR_27 == ((void*)0)) {
   FUNC_19("%s: Warning - GSFIFO SCB %d invalid\n",
          FUNC_9(VAR_26), VAR_31);
   continue;
  }





  VAR_33 = 0;
rescan_fifos:
  for (VAR_34 = 0; VAR_34 < 2; VAR_34++) {

   VAR_33 ^= 1;
   FUNC_17(VAR_26, VAR_33, VAR_33);

   if (FUNC_16(VAR_26, VAR_27) == 0)
    continue;

   FUNC_13(VAR_26, VAR_27);
   FUNC_2(200);
   goto rescan_fifos;
  }
  FUNC_17(VAR_26, VAR_1, VAR_1);
  FUNC_18(VAR_26, VAR_31);
  if ((FUNC_5(VAR_26, VAR_21) & VAR_24) == 0
   && ((FUNC_5(VAR_26, VAR_21) & VAR_23) != 0
    || (FUNC_5(VAR_26, VAR_19)
        & VAR_24) != 0)) {
   u_int VAR_35;







   FUNC_10(VAR_26, VAR_20, 0);
   FUNC_10(VAR_26, VAR_21,
     FUNC_5(VAR_26, VAR_21)
     | VAR_25);
   FUNC_11(VAR_26, VAR_22, VAR_31);
   FUNC_11(VAR_26, VAR_18, VAR_17);
   VAR_35 = FUNC_6(VAR_26, VAR_9);
   if (FUNC_0(VAR_35)) {
    FUNC_11(VAR_26, VAR_9, VAR_31);
    FUNC_11(VAR_26, VAR_10, VAR_31);
   } else {
    u_int VAR_36;

    VAR_36 = FUNC_6(VAR_26, VAR_10);
    FUNC_18(VAR_26, VAR_36);
    FUNC_11(VAR_26, VAR_18, VAR_31);
    FUNC_11(VAR_26, VAR_10, VAR_31);
    FUNC_18(VAR_26, VAR_31);
   }
  } else
   FUNC_1(VAR_26, VAR_27);
 }
 FUNC_18(VAR_26, VAR_29);




 FUNC_17(VAR_26, VAR_0, VAR_0);





 while (((VAR_30 = FUNC_4(VAR_26, VAR_5)) & (VAR_4|VAR_8)) != 0) {

  if ((VAR_30 & (VAR_6|VAR_4)) == (VAR_6|VAR_4)) {
   if ((VAR_30 & VAR_3) != 0)
    break;
  } else if ((VAR_30 & VAR_7) != 0)
   break;
  FUNC_2(200);
 }







 if ((VAR_30 & VAR_6) != 0 || (VAR_30 & VAR_3) != 0)
  FUNC_10(VAR_26, VAR_5, VAR_30 & ~(VAR_4|VAR_8));





 FUNC_14(VAR_26);

 VAR_29 = FUNC_3(VAR_26);




 VAR_31 = FUNC_6(VAR_26, VAR_9);
 while (!FUNC_0(VAR_31)) {
  uint8_t *VAR_37;
  u_int VAR_38;

  FUNC_18(VAR_26, VAR_31);
  VAR_32 = FUNC_7(VAR_26, VAR_18);
  VAR_27 = FUNC_8(VAR_26, VAR_31);
  if (VAR_27 == ((void*)0)) {
   FUNC_19("%s: Warning - DMA-up and complete "
          "SCB %d invalid\n", FUNC_9(VAR_26), VAR_31);
   continue;
  }
  VAR_37 = (uint8_t *)VAR_27->hscb;
  for (VAR_38 = 0; VAR_38 < sizeof(struct hardware_scb); VAR_38++)
   *VAR_37++ = FUNC_5(VAR_26, VAR_16 + VAR_38);

  FUNC_1(VAR_26, VAR_27);
  VAR_31 = VAR_32;
 }
 FUNC_11(VAR_26, VAR_9, VAR_17);
 FUNC_11(VAR_26, VAR_10, VAR_17);

 VAR_31 = FUNC_6(VAR_26, VAR_11);
 while (!FUNC_0(VAR_31)) {

  FUNC_18(VAR_26, VAR_31);
  VAR_32 = FUNC_7(VAR_26, VAR_18);
  VAR_27 = FUNC_8(VAR_26, VAR_31);
  if (VAR_27 == ((void*)0)) {
   FUNC_19("%s: Warning - Complete Qfrz SCB %d invalid\n",
          FUNC_9(VAR_26), VAR_31);
   continue;
  }

  FUNC_1(VAR_26, VAR_27);
  VAR_31 = VAR_32;
 }
 FUNC_11(VAR_26, VAR_11, VAR_17);

 VAR_31 = FUNC_6(VAR_26, VAR_12);
 while (!FUNC_0(VAR_31)) {

  FUNC_18(VAR_26, VAR_31);
  VAR_32 = FUNC_7(VAR_26, VAR_18);
  VAR_27 = FUNC_8(VAR_26, VAR_31);
  if (VAR_27 == ((void*)0)) {
   FUNC_19("%s: Warning - Complete SCB %d invalid\n",
          FUNC_9(VAR_26), VAR_31);
   continue;
  }

  FUNC_1(VAR_26, VAR_27);
  VAR_31 = VAR_32;
 }
 FUNC_11(VAR_26, VAR_12, VAR_17);




 FUNC_18(VAR_26, VAR_29);
 FUNC_12(VAR_26, VAR_28);
 VAR_26->flags |= VAR_2;
}
