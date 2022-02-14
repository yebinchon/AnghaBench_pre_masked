
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (struct ahc_softc*) ;
 int FUNC_1 (struct ahc_softc*,int ) ;
 int FUNC_2 (struct ahc_softc*) ;
 int FUNC_3 (struct ahc_softc*,int ,int) ;
 int FUNC_4 (struct ahc_softc*) ;
 int FUNC_5 (struct ahc_softc*,int,int,int,int) ;
 scalar_t__ VAR_14 ;
 int FUNC_6 (char*,int ,char*,char*,int) ;

__attribute__((used)) static void
FUNC_7(struct ahc_softc *VAR_15)
{
 int VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21;

 VAR_18 = VAR_8;
 VAR_19 = VAR_8;
 VAR_20 = VAR_8;
 VAR_21 = VAR_8;
 VAR_16 = 0;

 if (FUNC_0(VAR_15) == 0)
  goto done;




 FUNC_5(VAR_15, VAR_13, VAR_19, VAR_20, VAR_21);
 VAR_16 = FUNC_4(VAR_15);
 if (VAR_16 == 0) {

  goto done;
 }
 VAR_18 = VAR_13;






 FUNC_3(VAR_15, VAR_12, 0);
 FUNC_3(VAR_15, VAR_4, VAR_5);
 FUNC_3(VAR_15, VAR_4, VAR_3);


 FUNC_5(VAR_15, VAR_18, VAR_13, VAR_20, VAR_21);
 VAR_16 = FUNC_4(VAR_15);
 if ((FUNC_1(VAR_15, VAR_9) & VAR_2) == 0
  || (FUNC_1(VAR_15, VAR_6) & VAR_10) == 0)
  VAR_19 = VAR_13;


 FUNC_3(VAR_15, VAR_4, VAR_5);
 FUNC_3(VAR_15, VAR_4, VAR_3);


 FUNC_5(VAR_15, VAR_18, VAR_19, VAR_13, VAR_21);
 VAR_17 = FUNC_4(VAR_15);
 if (VAR_17 == VAR_16
  && ((FUNC_1(VAR_15, VAR_9) & VAR_2) == 0
   || (FUNC_1(VAR_15, VAR_6) & VAR_10) == 0))
  VAR_20 = VAR_13;





 if ((VAR_15->features & VAR_0) != 0) {
  FUNC_5(VAR_15, VAR_18, VAR_19, VAR_20, VAR_13);
  VAR_17 = FUNC_4(VAR_15);
  if (VAR_17 >= VAR_16) {
   VAR_21 = VAR_13;
   VAR_16 = VAR_17;
    if (VAR_16 >= 64) {






    VAR_15->flags |= VAR_1;
   }
  }
 }
done:




 FUNC_3(VAR_15, VAR_12, VAR_11|VAR_7);

 FUNC_3(VAR_15, VAR_4, VAR_5);
 FUNC_3(VAR_15, VAR_4, VAR_3);
 if (VAR_14 && VAR_18) {
  FUNC_6("%s: External SRAM, %s access%s, %dbytes/SCB\n",
         FUNC_2(VAR_15), VAR_20 ? "fast" : "slow",
         VAR_19 ? ", parity checking enabled" : "",
         VAR_21 ? 64 : 32);
 }
 FUNC_5(VAR_15, VAR_18, VAR_19, VAR_20, VAR_21);
}
