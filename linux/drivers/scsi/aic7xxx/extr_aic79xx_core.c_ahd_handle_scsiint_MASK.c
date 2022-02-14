
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct scb {int flags; } ;
struct ahd_softc {int flags; int bugs; } ;
struct ahd_devinfo {int dummy; } ;


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
 int FUNC_0 (struct ahd_softc*) ;
 int FUNC_1 (struct ahd_softc*,int) ;
 int FUNC_2 (struct ahd_softc*) ;
 int FUNC_3 (struct ahd_softc*) ;
 int VAR_63 ;
 int FUNC_4 (struct ahd_softc*) ;
 int FUNC_5 (struct ahd_softc*,struct scb*) ;
 int FUNC_6 (struct ahd_softc*) ;
 int FUNC_7 (struct ahd_softc*,struct ahd_devinfo*,int ,int ,char*,int) ;
 int FUNC_8 (struct ahd_softc*,int) ;
 int FUNC_9 (struct ahd_softc*) ;
 int FUNC_10 (struct ahd_softc*,int) ;
 int FUNC_11 (struct ahd_softc*) ;
 int FUNC_12 (struct ahd_softc*,int ) ;
 int FUNC_13 (struct ahd_softc*,int ) ;
 int FUNC_14 (struct ahd_softc*) ;
 struct scb* FUNC_15 (struct ahd_softc*,int) ;
 int FUNC_16 (struct ahd_softc*) ;
 int FUNC_17 (struct ahd_softc*,int ,int) ;
 int FUNC_18 (struct ahd_softc*) ;
 int FUNC_19 (struct ahd_softc*,struct scb*) ;
 int FUNC_20 (struct ahd_softc*,char,int ) ;
 int FUNC_21 (struct ahd_softc*) ;
 int FUNC_22 (struct ahd_softc*,struct ahd_devinfo*,struct scb*) ;
 int FUNC_23 (struct ahd_softc*,int,int) ;
 int FUNC_24 (struct scb*,int ) ;
 int FUNC_25 (struct ahd_softc*) ;
 int FUNC_26 (struct ahd_softc*) ;
 int FUNC_27 (struct ahd_softc*) ;
 int FUNC_28 (char*,int,...) ;

__attribute__((used)) static void
FUNC_29(struct ahd_softc *VAR_64, u_int VAR_65)
{
 struct scb *VAR_66;
 u_int VAR_67;
 u_int VAR_68;
 u_int VAR_69;
 u_int VAR_70;
 u_int VAR_71;
 u_int VAR_72;
 u_int VAR_73;

 FUNC_27(VAR_64);
 FUNC_23(VAR_64, VAR_6, VAR_6);

 VAR_68 = FUNC_12(VAR_64, VAR_60) & (VAR_42|VAR_43);
 VAR_67 = FUNC_12(VAR_64, VAR_57) & (VAR_32|VAR_44|VAR_51|VAR_52);
 VAR_69 = FUNC_12(VAR_64, VAR_58) & (VAR_53|VAR_49|VAR_9|VAR_48);
 VAR_70 = FUNC_12(VAR_64, VAR_37);
 VAR_71 = FUNC_12(VAR_64, VAR_39);
 VAR_73 = FUNC_12(VAR_64, VAR_59) & VAR_10;




 if (((VAR_69 & VAR_49) != 0) && (VAR_64->flags & VAR_1)) {
  FUNC_17(VAR_64, VAR_26, VAR_22);
  return;
 }




 VAR_64->flags &= ~VAR_1;

 if ((VAR_67 & (VAR_51|VAR_52)) != 0) {
  u_int VAR_74;

  FUNC_23(VAR_64, VAR_3, VAR_3);
  VAR_74 = FUNC_12(VAR_64, VAR_55);
  VAR_67 &= VAR_74 & (VAR_32|VAR_44|VAR_51|VAR_52);
  FUNC_23(VAR_64, VAR_6, VAR_6);
 }
 VAR_72 = FUNC_6(VAR_64);
 VAR_66 = FUNC_15(VAR_64, VAR_72);
 if (VAR_66 != ((void*)0)
  && (FUNC_12(VAR_64, VAR_54) & VAR_41) != 0)
  VAR_66 = ((void*)0);

 if ((VAR_67 & VAR_32) != 0) {
  u_int VAR_75;

  VAR_75 = FUNC_12(VAR_64, VAR_46) & VAR_28;
  FUNC_28("%s: Transceiver State Has Changed to %s mode\n",
         FUNC_16(VAR_64), VAR_75 ? "LVD" : "SE");
  FUNC_17(VAR_64, VAR_25, VAR_15);



  FUNC_20(VAR_64, 'A', VAR_61);
  FUNC_18(VAR_64);
  FUNC_25(VAR_64);
  FUNC_26(VAR_64);
 } else if ((VAR_67 & VAR_44) != 0) {

  FUNC_28("%s: SCSI offset overrun detected.  Resetting bus.\n",
         FUNC_16(VAR_64));
  FUNC_20(VAR_64, 'A', VAR_61);
 } else if ((VAR_69 & VAR_49) != 0) {

  FUNC_28("%s: Someone reset channel A\n", FUNC_16(VAR_64));
  FUNC_20(VAR_64, 'A', VAR_31);
 } else if ((VAR_69 & VAR_48) != 0) {


  FUNC_0(VAR_64);

  FUNC_11(VAR_64);
 } else if (VAR_71 != 0) {

  FUNC_28("%s: lqostat0 == 0x%x!\n", FUNC_16(VAR_64), VAR_71);
  FUNC_17(VAR_64, VAR_18, VAR_71);
  if ((VAR_64->bugs & VAR_2) != 0)
   FUNC_17(VAR_64, VAR_19, 0);
 } else if ((VAR_69 & VAR_53) != 0) {

  FUNC_17(VAR_64, VAR_50, 0);


  FUNC_0(VAR_64);


  FUNC_3(VAR_64);


  FUNC_17(VAR_64, VAR_26, VAR_24|VAR_13|VAR_21);
  FUNC_17(VAR_64, VAR_25, VAR_23);

  VAR_72 = FUNC_13(VAR_64, VAR_62);
  VAR_66 = FUNC_15(VAR_64, VAR_72);
  if (VAR_66 == ((void*)0)) {
   FUNC_28("%s: ahd_intr - referenced scb not "
          "valid during SELTO scb(0x%x)\n",
          FUNC_16(VAR_64), VAR_72);
   FUNC_4(VAR_64);
  } else {
   struct ahd_devinfo VAR_76;







   FUNC_22(VAR_64, &VAR_76, VAR_66);
   FUNC_24(VAR_66, VAR_12);
   FUNC_5(VAR_64, VAR_66);







   FUNC_7(VAR_64, &VAR_76,
         VAR_11,
         VAR_12,
         "Selection Timeout",
                          1);
  }
  FUNC_17(VAR_64, VAR_14, VAR_20);
  FUNC_14(VAR_64);
  FUNC_26(VAR_64);
 } else if ((VAR_67 & (VAR_51|VAR_52)) != 0) {

  FUNC_14(VAR_64);
  FUNC_26(VAR_64);
 } else if (VAR_68 != 0) {
  FUNC_28("%s: SCSI Cell parity error SSTAT3 == 0x%x\n",
         FUNC_16(VAR_64), VAR_68);
  FUNC_17(VAR_64, VAR_27, VAR_68);
 } else if ((VAR_70 & (VAR_35|VAR_36)) != 0) {


  FUNC_0(VAR_64);

  FUNC_8(VAR_64, VAR_70);
 } else if ((VAR_70 & VAR_34) != 0) {






  FUNC_17(VAR_64, VAR_17, VAR_16);
 } else if ((VAR_69 & VAR_9) != 0
  || (VAR_70 & VAR_38) != 0) {
  u_int VAR_77;
  int VAR_78;
  int VAR_79;
  int VAR_80;
  u_int VAR_81;







  FUNC_17(VAR_64, VAR_50, 0);


  FUNC_0(VAR_64);





  VAR_81 = VAR_6;
  VAR_73 = FUNC_12(VAR_64, VAR_59) & VAR_10;
  VAR_77 = FUNC_12(VAR_64, VAR_40);
  switch (VAR_73) {
  case 130:
  case 129:
  {
   VAR_81 = VAR_73 == 130
        ? VAR_4 : VAR_5;
   FUNC_23(VAR_64, VAR_81, VAR_81);
   VAR_72 = FUNC_6(VAR_64);
   VAR_66 = FUNC_15(VAR_64, VAR_72);
   if (VAR_66 == ((void*)0)) {
    FUNC_28("%s: Invalid SCB %d in DFF%d "
           "during unexpected busfree\n",
           FUNC_16(VAR_64), VAR_72, VAR_81);
    VAR_80 = 0;
   } else
    VAR_80 = (VAR_66->flags & VAR_47) != 0;
   VAR_79 = 1;
   break;
  }
  case 128:
   VAR_79 = 0;
   VAR_80 = 1;
   break;
  default:
   VAR_79 = 0;
   VAR_80 = (VAR_77 & VAR_38) != 0;
   if (!VAR_80
    && FUNC_12(VAR_64, VAR_33) == VAR_45
    && (FUNC_12(VAR_64, VAR_57) & VAR_51) == 0
    && ((FUNC_12(VAR_64, VAR_57) & VAR_52) == 0
     || (FUNC_12(VAR_64, VAR_50) & VAR_30) == 0))






    VAR_80 = 1;
   break;
  }
  if (VAR_80 && FUNC_12(VAR_64, VAR_33) == VAR_45) {
   VAR_78 = FUNC_10(VAR_64, VAR_73);
  } else {
   VAR_80 = 0;
   VAR_78 = FUNC_9(VAR_64);
  }
  FUNC_17(VAR_64, VAR_26, VAR_13);
  if (VAR_80 == 0
   && (VAR_64->bugs & VAR_0) != 0)
   FUNC_17(VAR_64, VAR_56,
     FUNC_12(VAR_64, VAR_56) & ~VAR_29);

  if (VAR_79)
   FUNC_1(VAR_64, VAR_81);

  FUNC_3(VAR_64);
  FUNC_17(VAR_64, VAR_14, VAR_20);
  if (VAR_78) {
   FUNC_21(VAR_64);
  } else {
   FUNC_26(VAR_64);
  }
 } else {
  FUNC_28("%s: Missing case in ahd_handle_scsiint. status = %x\n",
         FUNC_16(VAR_64), VAR_69);
  FUNC_4(VAR_64);
  FUNC_2(VAR_64);
  FUNC_26(VAR_64);
 }
}
