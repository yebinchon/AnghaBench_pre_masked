
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct aic7770_identity {int (* setup ) (struct ahc_softc*) ;int name; } ;
struct TYPE_3__ {int busspd; int bustime; } ;
struct TYPE_4__ {TYPE_1__ aic7770_softc; } ;
struct ahc_softc {int flags; int chip; int features; int our_id; int our_id_b; int init_level; TYPE_2__ bus_softc; int * seep_config; int bus_chip_init; int description; } ;


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
 int FUNC_0 (struct ahc_softc*) ;
 int FUNC_1 (struct ahc_softc*,int ) ;
 int FUNC_2 (struct ahc_softc*) ;
 int FUNC_3 (struct ahc_softc*,int ) ;
 int FUNC_4 (struct ahc_softc*,int ,int) ;
 int FUNC_5 (struct ahc_softc*,int ) ;
 int FUNC_6 (struct ahc_softc*) ;
 int VAR_31 ;
 int FUNC_7 (struct ahc_softc*,int) ;
 int FUNC_8 (struct ahc_softc*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (struct ahc_softc*) ;

int
FUNC_12(struct ahc_softc *VAR_32, struct aic7770_identity *VAR_33, u_int VAR_34)
{
 int VAR_35;
 int VAR_36;
 u_int VAR_37;
 u_int VAR_38;
 u_int VAR_39;

 VAR_35 = VAR_33->setup(VAR_32);
 VAR_36 = 0;
 if (VAR_35 != 0)
  return (VAR_35);

 VAR_35 = FUNC_8(VAR_32, VAR_34);
 if (VAR_35 != 0)
  return (VAR_35);







 FUNC_3(VAR_32, VAR_19);

 VAR_32->description = VAR_33->name;
 VAR_35 = FUNC_6(VAR_32);
 if (VAR_35 != 0)
  return (VAR_35);

 VAR_32->bus_chip_init = VAR_31;

 VAR_35 = FUNC_5(VAR_32, VAR_19);
 if (VAR_35 != 0)
  return (VAR_35);


 VAR_39 = FUNC_1(VAR_32, VAR_26);
 VAR_38 = VAR_39 & VAR_30;
 switch (VAR_38) {
 case 9:
 case 10:
 case 11:
 case 12:
 case 14:
 case 15:
  break;
 default:
  FUNC_10("aic7770_config: invalid irq setting %d\n", VAR_39);
  return (VAR_18);
 }

 if ((VAR_39 & VAR_16) != 0)
  VAR_32->flags |= VAR_0;

 switch (VAR_32->chip & (129|128)) {
 case 129:
 {
  u_int VAR_40;
  u_int VAR_41;
  u_int VAR_42;

  VAR_40 = FUNC_1(VAR_32, VAR_20);
  VAR_41 = FUNC_1(VAR_32, VAR_28);
  VAR_42 = FUNC_1(VAR_32, VAR_28 + 1);


  if ((VAR_40 & VAR_14) != 0)
   VAR_32->flags |= 1;

  if ((VAR_40 & VAR_10) == VAR_9) {
   VAR_32->flags |= VAR_5;
  } else {
   if ((VAR_32->features & VAR_6) != 0) {
    VAR_32->our_id = VAR_42 & VAR_25;
    if (VAR_41 & VAR_29)
     VAR_32->flags |= VAR_3;
   } else {
    VAR_32->our_id = VAR_41 & VAR_24;
    VAR_32->our_id_b = VAR_42 & VAR_24;
    if (VAR_41 & VAR_29)
     VAR_32->flags |= VAR_3;
    if (VAR_42 & VAR_29)
     VAR_32->flags |= VAR_4;
   }
  }
  if ((FUNC_1(VAR_32, VAR_21) & VAR_22))
   VAR_32->flags |= VAR_1|VAR_2;
  break;
 }
 case 128:
 {
  VAR_36 = FUNC_0(VAR_32);
  break;
 }
 default:
  break;
 }
 if (VAR_36 == 0) {
  FUNC_9(VAR_32->seep_config);
  VAR_32->seep_config = ((void*)0);
 }




 FUNC_4(VAR_32, VAR_27, FUNC_1(VAR_32, VAR_27) & ~VAR_7);


 VAR_37 = FUNC_1(VAR_32, VAR_23);
 FUNC_4(VAR_32, VAR_12, VAR_37 & VAR_15);
 FUNC_4(VAR_32, VAR_13, (VAR_37 << 2) & VAR_11);

 VAR_32->bus_softc.aic7770_softc.busspd = VAR_37 & VAR_15;
 VAR_32->bus_softc.aic7770_softc.bustime = (VAR_37 << 2) & VAR_11;




 VAR_35 = FUNC_2(VAR_32);
 if (VAR_35 != 0)
  return (VAR_35);

 VAR_35 = FUNC_7(VAR_32, VAR_38);
 if (VAR_35 != 0)
  return (VAR_35);

 VAR_32->init_level++;




 FUNC_4(VAR_32, VAR_8, VAR_17);
 return (0);
}
