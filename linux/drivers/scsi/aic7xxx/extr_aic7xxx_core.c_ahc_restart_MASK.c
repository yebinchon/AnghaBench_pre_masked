
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ahc_softc {int tqinfifonext; int features; int seqctl; } ;


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
 int FUNC_0 (struct ahc_softc*) ;
 int FUNC_1 (struct ahc_softc*) ;
 int FUNC_2 (struct ahc_softc*,int ) ;
 int FUNC_3 (struct ahc_softc*,int ,int) ;
 int FUNC_4 (struct ahc_softc*) ;
 int FUNC_5 (struct ahc_softc*) ;

__attribute__((used)) static void
FUNC_6(struct ahc_softc *VAR_30)
{
 uint8_t VAR_31;

 FUNC_4(VAR_30);


 FUNC_1(VAR_30);

 FUNC_3(VAR_30, VAR_23, 0);
 FUNC_3(VAR_30, VAR_14, VAR_13);
 FUNC_3(VAR_30, VAR_28, FUNC_2(VAR_30, VAR_28) & ~VAR_1);
 FUNC_3(VAR_30, VAR_12, VAR_16);
 FUNC_3(VAR_30, VAR_18, 0xFF);
 FUNC_3(VAR_30, VAR_17, 0xFF);
 FUNC_3(VAR_30, VAR_29, VAR_30->tqinfifonext);


 FUNC_3(VAR_30, VAR_21,
   FUNC_2(VAR_30, VAR_22) & (VAR_11|VAR_10|VAR_9));
 if ((VAR_30->features & VAR_0) != 0) {

  FUNC_3(VAR_30, VAR_2, 0);
  FUNC_3(VAR_30, VAR_4, 0);
  FUNC_3(VAR_30, VAR_3, 0);
 }





 if ((FUNC_2(VAR_30, VAR_27) & VAR_20) != 0) {
  FUNC_0(VAR_30);
  FUNC_3(VAR_30, VAR_27,
    FUNC_2(VAR_30, VAR_27) & ~VAR_20);
 }






 FUNC_3(VAR_30, VAR_5, VAR_6);

 FUNC_3(VAR_30, VAR_15, 0);
 FUNC_3(VAR_30, VAR_26, VAR_30->seqctl);
 FUNC_3(VAR_30, VAR_24, 0);
 FUNC_3(VAR_30, VAR_25, 0);




 VAR_31 = FUNC_2(VAR_30, VAR_19);
 FUNC_3(VAR_30, VAR_19, (VAR_31 & ~(VAR_7|VAR_8)));

 FUNC_5(VAR_30);
}
