
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahc_softc {int features; int flags; } ;


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
 int FUNC_0 (struct ahc_softc*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ahc_softc*,int ) ;
 int FUNC_3 (struct ahc_softc*) ;
 int FUNC_4 (struct ahc_softc*,int ,int) ;
 int FUNC_5 (struct ahc_softc*) ;
 int FUNC_6 (struct ahc_softc*) ;
 int FUNC_7 (struct ahc_softc*) ;
 int FUNC_8 (char*,int) ;

void
FUNC_9(struct ahc_softc *VAR_11)
{
 int VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_13 = 1000;
 VAR_11->flags |= VAR_0;
 VAR_14 = VAR_3;
 do {
  if (VAR_14) {
   FUNC_7(VAR_11);




   FUNC_1(500);
  }
  FUNC_3(VAR_11);
  FUNC_5(VAR_11);
  VAR_14 = VAR_10;
  FUNC_4(VAR_11, VAR_6, FUNC_2(VAR_11, VAR_6) & ~VAR_2);
  VAR_12 = FUNC_2(VAR_11, VAR_4);
  if ((VAR_12 & VAR_5) == 0) {
   FUNC_0(VAR_11);
   VAR_12 = FUNC_2(VAR_11, VAR_4);
  }
 } while (--VAR_13
       && (VAR_12 != 0xFF || (VAR_11->features & VAR_1) == 0)
       && ((VAR_12 & VAR_5) != 0
        || (FUNC_2(VAR_11, VAR_9) & (VAR_7|VAR_8)) != 0));
 if (VAR_13 == 0) {
  FUNC_8("Infinite interrupt loop, INTSTAT = %x",
         FUNC_2(VAR_11, VAR_4));
 }
 FUNC_6(VAR_11);
 VAR_11->flags &= ~VAR_0;
}
