
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct ahc_tmode_tstate {struct ahc_tmode_lstate** enabled_luns; } ;
struct ahc_tmode_lstate {int dummy; } ;
struct ahc_softc {int flags; int features; struct ahc_tmode_tstate** enabled_targets; int * pending_device; } ;
struct ahc_devinfo {int channel; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 size_t VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (struct ahc_softc*,size_t,char,int ,int ,int ,int ) ;
 int FUNC_1 (struct ahc_softc*) ;
 int FUNC_2 (struct ahc_softc*) ;
 int FUNC_3 (struct ahc_devinfo*,size_t,size_t,int ,char,int ) ;
 size_t FUNC_4 (struct ahc_softc*,int ) ;
 int FUNC_5 (struct ahc_softc*,int ,size_t) ;
 int FUNC_6 (struct ahc_softc*) ;
 int FUNC_7 (struct ahc_softc*,struct ahc_tmode_lstate*,size_t,int ,int ) ;
 int FUNC_8 (struct ahc_softc*) ;
 int FUNC_9 (struct ahc_softc*) ;
 int FUNC_10 (struct ahc_softc*) ;
 int FUNC_11 (struct ahc_softc*,int) ;
 int FUNC_12 (struct ahc_softc*,int ,size_t,int ,int ) ;
 int FUNC_13 (struct ahc_softc*,struct ahc_tmode_lstate*) ;
 int FUNC_14 (struct ahc_softc*,struct ahc_devinfo*,int *,int ,int ,int ,int ,int) ;
 int FUNC_15 (struct ahc_softc*,struct ahc_devinfo*,int ,int ,int) ;
 int FUNC_16 (struct ahc_softc*) ;

int
FUNC_17(struct ahc_softc *VAR_25, char VAR_26, int VAR_27)
{
 struct ahc_devinfo VAR_28;
 u_int VAR_29, VAR_30, VAR_31;
 u_int VAR_32;
 u_int VAR_33;
 u_int VAR_34;
 int VAR_35;
 int VAR_36;
 char VAR_37;

 VAR_25->pending_device = ((void*)0);

 FUNC_3(&VAR_28,
       VAR_8,
       VAR_8,
       VAR_6,
       VAR_26, VAR_17);
 FUNC_6(VAR_25);


 FUNC_1(VAR_25);






 FUNC_10(VAR_25);
 VAR_32 = FUNC_4(VAR_25, VAR_18);
 VAR_37 = 'A';
 if ((VAR_25->features & VAR_4) != 0
  && ((VAR_32 & VAR_22) != 0))
     VAR_37 = 'B';
 VAR_33 = FUNC_4(VAR_25, VAR_21);
 if (VAR_37 != VAR_26) {




  FUNC_5(VAR_25, VAR_18, VAR_32 ^ VAR_22);
  VAR_34 = FUNC_4(VAR_25, VAR_23) & ~(VAR_10|VAR_12);
  FUNC_5(VAR_25, VAR_23, VAR_34);
  if (VAR_27)
   FUNC_8(VAR_25);
  FUNC_2(VAR_25);
  FUNC_5(VAR_25, VAR_20, VAR_33 & (VAR_13|VAR_11|VAR_9));
  FUNC_5(VAR_25, VAR_18, VAR_32);
  VAR_36 = VAR_15;
 } else {

  VAR_34 = FUNC_4(VAR_25, VAR_23) & ~(VAR_10|VAR_12);
  FUNC_5(VAR_25, VAR_23, VAR_34);
  if (VAR_27)
   FUNC_8(VAR_25);
  FUNC_2(VAR_25);
  FUNC_5(VAR_25, VAR_20, VAR_33 & (VAR_13|VAR_11|VAR_9));
  VAR_36 = VAR_24;
 }





 VAR_35 = FUNC_0(VAR_25, VAR_8, VAR_26,
          VAR_6, VAR_19,
          VAR_17, VAR_7);

 VAR_31 = (VAR_25->features & VAR_5) ? 15 : 7;
 FUNC_12(VAR_25, VAR_28.channel, VAR_8,
         VAR_6, VAR_0);




 for (VAR_30 = 0; VAR_30 <= VAR_31; VAR_30++) {

  if (VAR_25->enabled_targets[VAR_30] == ((void*)0))
   continue;
  for (VAR_29 = 0; VAR_29 <= VAR_31; VAR_29++) {
   struct ahc_devinfo VAR_38;

   FUNC_3(&VAR_38, VAR_30, VAR_29,
         VAR_6,
         VAR_26, VAR_17);
   FUNC_15(VAR_25, &VAR_38, VAR_16,
          VAR_3, VAR_24);
   FUNC_14(VAR_25, &VAR_38, ((void*)0),
                0, 0,
                     0, VAR_3,
                VAR_24);
  }
 }

 if (VAR_36)
  FUNC_9(VAR_25);
 else
  FUNC_16(VAR_25);
 return VAR_35;
}
