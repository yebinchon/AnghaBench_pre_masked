
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ autoneg; int rmt_adv; int flowctrl; } ;
struct tg3 {int phy_flags; void* serdes_counter; TYPE_1__ link_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
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
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct tg3*) ;
 int FUNC_3 (struct tg3*,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static bool FUNC_7(struct tg3 *VAR_27, u32 VAR_28)
{
 u16 VAR_29;
 bool VAR_30;
 u32 VAR_31, VAR_32;
 u32 VAR_33, VAR_34;
 int VAR_35, VAR_36;

 VAR_33 = 0;
 VAR_34 = 0;
 VAR_35 = 0;
 VAR_36 = 1;
 VAR_30 = 0;

 if (FUNC_2(VAR_27) != VAR_3 &&
     FUNC_2(VAR_27) != VAR_4) {
  VAR_35 = 1;
  if (FUNC_4(VAR_25) & VAR_5)
   VAR_36 = 0;



  VAR_33 = FUNC_4(VAR_8) & 0x00f06fff;
 }

 VAR_31 = FUNC_4(VAR_18);

 if (VAR_27->link_config.autoneg != VAR_2) {
  if (VAR_31 & VAR_24) {
   if (VAR_35) {
    u32 VAR_37 = VAR_33;

    if (VAR_36)
     VAR_37 |= 0xc010000;
    else
     VAR_37 |= 0x4010000;
    FUNC_5(VAR_8, VAR_37);
   }

   FUNC_5(VAR_18, VAR_17);
  }
  if (VAR_28 & VAR_10) {
   FUNC_3(VAR_27, 0, 0);
   VAR_30 = 1;
  }
  goto out;
 }


 VAR_34 = VAR_24 | VAR_17;

 VAR_29 = FUNC_1(VAR_27->link_config.flowctrl);
 if (VAR_29 & VAR_0)
  VAR_34 |= VAR_21;
 if (VAR_29 & VAR_1)
  VAR_34 |= VAR_15;

 if (VAR_31 != VAR_34) {
  if ((VAR_27->phy_flags & VAR_26) &&
      VAR_27->serdes_counter &&
      ((VAR_28 & (VAR_10 |
        VAR_11)) ==
       VAR_10)) {
   VAR_27->serdes_counter--;
   VAR_30 = 1;
   goto out;
  }
restart_autoneg:
  if (VAR_35)
   FUNC_5(VAR_8, VAR_33 | 0xc011000);
  FUNC_5(VAR_18, VAR_34 | VAR_22);
  FUNC_6(5);
  FUNC_5(VAR_18, VAR_34);

  VAR_27->serdes_counter = VAR_13;
  VAR_27->phy_flags &= ~VAR_26;
 } else if (VAR_28 & (VAR_10 |
     VAR_12)) {
  VAR_32 = FUNC_4(VAR_23);
  VAR_28 = FUNC_4(VAR_9);

  if ((VAR_32 & VAR_16) &&
      (VAR_28 & VAR_10)) {
   u32 VAR_38 = 0, VAR_39 = 0;

   if (VAR_31 & VAR_21)
    VAR_38 |= VAR_0;
   if (VAR_31 & VAR_15)
    VAR_38 |= VAR_1;

   if (VAR_32 & VAR_20)
    VAR_39 |= VAR_6;
   if (VAR_32 & VAR_19)
    VAR_39 |= VAR_7;

   VAR_27->link_config.rmt_adv =
        FUNC_0(VAR_39);

   FUNC_3(VAR_27, VAR_38, VAR_39);
   VAR_30 = 1;
   VAR_27->serdes_counter = 0;
   VAR_27->phy_flags &= ~VAR_26;
  } else if (!(VAR_32 & VAR_16)) {
   if (VAR_27->serdes_counter)
    VAR_27->serdes_counter--;
   else {
    if (VAR_35) {
     u32 VAR_40 = VAR_33;

     if (VAR_36)
      VAR_40 |= 0xc010000;
     else
      VAR_40 |= 0x4010000;

     FUNC_5(VAR_8, VAR_40);
    }

    FUNC_5(VAR_18, VAR_17);
    FUNC_6(40);




    VAR_28 = FUNC_4(VAR_9);
    if ((VAR_28 & VAR_10) &&
        !(VAR_28 & VAR_11)) {
     FUNC_3(VAR_27, 0, 0);
     VAR_30 = 1;
     VAR_27->phy_flags |=
      VAR_26;
     VAR_27->serdes_counter =
      VAR_14;
    } else
     goto restart_autoneg;
   }
  }
 } else {
  VAR_27->serdes_counter = VAR_13;
  VAR_27->phy_flags &= ~VAR_26;
 }

out:
 return VAR_30;
}
