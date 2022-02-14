
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef size_t u_int ;
struct ahd_tmode_tstate {struct ahd_tmode_lstate** enabled_luns; } ;
struct ahd_tmode_lstate {int dummy; } ;
struct ahd_softc {int flags; int features; struct ahd_tmode_tstate** enabled_targets; int * pending_device; } ;
struct ahd_devinfo {int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 int VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 size_t VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_0 (struct ahd_softc*,size_t,char,int ,int ,int ,int ) ;
 int FUNC_1 (struct ahd_softc*) ;
 int FUNC_2 (struct ahd_softc*,int) ;
 int FUNC_3 (struct ahd_softc*) ;
 int FUNC_4 (struct ahd_softc*) ;
 int FUNC_5 (struct ahd_devinfo*,size_t,size_t,int ,char,int ) ;
 int FUNC_6 (int) ;
 size_t FUNC_7 (struct ahd_softc*,int ) ;
 int FUNC_8 (struct ahd_softc*) ;
 int FUNC_9 (struct ahd_softc*,int ,size_t) ;
 int FUNC_10 (struct ahd_softc*) ;
 int FUNC_11 (struct ahd_softc*,struct ahd_tmode_lstate*,size_t,int ,int ) ;
 int FUNC_12 (struct ahd_softc*) ;
 int FUNC_13 (struct ahd_softc*) ;
 int FUNC_14 (struct ahd_softc*) ;
 int FUNC_15 (struct ahd_softc*,int ) ;
 int FUNC_16 (struct ahd_softc*,int ,size_t,int ,int ) ;
 int FUNC_17 (struct ahd_softc*,struct ahd_tmode_lstate*) ;
 int FUNC_18 (struct ahd_softc*,size_t,size_t) ;
 int FUNC_19 (struct ahd_softc*,struct ahd_devinfo*,int ,int ,int ,int ,int ) ;
 int FUNC_20 (struct ahd_softc*,struct ahd_devinfo*,int ,int ,int ) ;
 int FUNC_21 (char*,int ) ;

int
FUNC_22(struct ahd_softc *VAR_33, char VAR_34, int VAR_35)
{
 struct ahd_devinfo VAR_36;
 u_int VAR_37;
 u_int VAR_38;
 u_int VAR_39;
 int VAR_40;
 u_int VAR_41;
 u_int VAR_42;
 uint8_t VAR_43;




 if (VAR_33->flags & VAR_1) {
  FUNC_21("%s: bus reset still active\n",
         FUNC_8(VAR_33));
  return 0;
 }
 VAR_33->flags |= VAR_1;

 VAR_33->pending_device = ((void*)0);

 FUNC_5(&VAR_36,
       VAR_9,
       VAR_9,
       VAR_7,
       VAR_34, VAR_25);
 FUNC_10(VAR_33);


 FUNC_1(VAR_33);






 FUNC_14(VAR_33);





 FUNC_18(VAR_33, VAR_2, VAR_2);





 FUNC_9(VAR_33, VAR_28, 0);
 FUNC_9(VAR_33, VAR_29, 0);






 VAR_42 = VAR_41 = FUNC_7(VAR_33, VAR_15) & VAR_12;
 if (VAR_42 > VAR_13)

  VAR_42 = VAR_41 = 0;
 do {
  VAR_42 ^= VAR_13;
  FUNC_18(VAR_33, VAR_42, VAR_42);
  FUNC_9(VAR_33, VAR_14,
    FUNC_7(VAR_33, VAR_14) & ~(VAR_27|VAR_22));
  while ((FUNC_7(VAR_33, VAR_14) & VAR_23) != 0)
   FUNC_6(10);



  FUNC_18(VAR_33, VAR_2, VAR_2);
  FUNC_9(VAR_33, VAR_15, VAR_42);
 } while (VAR_42 != VAR_41);




 FUNC_4(VAR_33);
 FUNC_9(VAR_33, VAR_31,
   FUNC_7(VAR_33, VAR_31) & ~(VAR_17|VAR_19));

 if (VAR_35)
  FUNC_12(VAR_33);

 FUNC_3(VAR_33);





 VAR_40 = FUNC_0(VAR_33, VAR_9, VAR_34,
          VAR_7, VAR_26,
          VAR_25, VAR_8);




 FUNC_2(VAR_33, 0);
 FUNC_2(VAR_33, 1);




 FUNC_9(VAR_33, VAR_11, VAR_10);




 FUNC_9(VAR_33, VAR_31, FUNC_7(VAR_33, VAR_31) | VAR_19);
 VAR_43 = FUNC_7(VAR_33, VAR_30);
 FUNC_9(VAR_33, VAR_29, VAR_43 & (VAR_20|VAR_18|VAR_16));

 VAR_39 = (VAR_33->features & VAR_6) ? 15 : 7;
 for (VAR_38 = 0; VAR_38 <= VAR_39; VAR_38++) {

  if (VAR_33->enabled_targets[VAR_38] == ((void*)0))
   continue;
  for (VAR_37 = 0; VAR_37 <= VAR_39; VAR_37++) {
   struct ahd_devinfo VAR_44;

   FUNC_5(&VAR_44, VAR_38, VAR_37,
         VAR_7,
         'A', VAR_25);
   FUNC_20(VAR_33, &VAR_44, VAR_24,
          VAR_5, VAR_32);
   FUNC_19(VAR_33, &VAR_44, 0,
                0, 0,
      VAR_5, VAR_32);
  }
 }


 FUNC_16(VAR_33, VAR_36.channel, VAR_9,
         VAR_7, VAR_0);

 FUNC_13(VAR_33);

 return (VAR_40);
}
