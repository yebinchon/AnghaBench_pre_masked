
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ autoneg; int advertising; int flowctrl; int active_speed; int speed; scalar_t__ active_duplex; scalar_t__ duplex; } ;
struct tg3 {int phy_flags; TYPE_1__ link_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
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
 scalar_t__ FUNC_0 (struct tg3*) ;
 scalar_t__ FUNC_1 (struct tg3*,int ) ;
 int FUNC_2 (struct tg3*,int,int) ;
 scalar_t__ FUNC_3 (struct tg3*,int ,int*) ;
 int FUNC_4 (struct tg3*,int ,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct tg3 *VAR_28)
{
 if (VAR_28->link_config.autoneg == VAR_8 ||
     (VAR_28->phy_flags & VAR_25)) {
  u32 VAR_29, VAR_30;

  if ((VAR_28->phy_flags & VAR_25) &&
      !(VAR_28->phy_flags & VAR_26)) {
   VAR_29 = VAR_5 |
         VAR_4;
   if (FUNC_1(VAR_28, VAR_27))
    VAR_29 |= VAR_3 |
           VAR_2;
   if (VAR_28->phy_flags & VAR_23) {
    if (!(VAR_28->phy_flags &
          VAR_24))
     VAR_29 |= VAR_1;
    VAR_29 |= VAR_0;
   }

   VAR_30 = VAR_18 | VAR_17;
  } else {
   VAR_29 = VAR_28->link_config.advertising;
   if (VAR_28->phy_flags & VAR_22)
    VAR_29 &= ~(VAR_1 |
      VAR_0);

   VAR_30 = VAR_28->link_config.flowctrl;
  }

  FUNC_2(VAR_28, VAR_29, VAR_30);

  if ((VAR_28->phy_flags & VAR_25) &&
      (VAR_28->phy_flags & VAR_26)) {




   return;
  }

  FUNC_4(VAR_28, VAR_20,
        VAR_9 | VAR_10);
 } else {
  int VAR_31;
  u32 VAR_32, VAR_33;

  VAR_28->link_config.active_speed = VAR_28->link_config.speed;
  VAR_28->link_config.active_duplex = VAR_28->link_config.duplex;

  if (FUNC_0(VAR_28) == VAR_7) {




   FUNC_4(VAR_28, VAR_19, VAR_6);
  }

  VAR_32 = 0;
  switch (VAR_28->link_config.speed) {
  default:
  case 130:
   break;

  case 129:
   VAR_32 |= VAR_13;
   break;

  case 128:
   VAR_32 |= VAR_14;
   break;
  }

  if (VAR_28->link_config.duplex == VAR_16)
   VAR_32 |= VAR_11;

  if (!FUNC_3(VAR_28, VAR_20, &VAR_33) &&
      (VAR_32 != VAR_33)) {
   FUNC_4(VAR_28, VAR_20, VAR_12);
   for (VAR_31 = 0; VAR_31 < 1500; VAR_31++) {
    u32 VAR_34;

    FUNC_5(10);
    if (FUNC_3(VAR_28, VAR_21, &VAR_34) ||
        FUNC_3(VAR_28, VAR_21, &VAR_34))
     continue;
    if (!(VAR_34 & VAR_15)) {
     FUNC_5(40);
     break;
    }
   }
   FUNC_4(VAR_28, VAR_20, VAR_32);
   FUNC_5(40);
  }
 }
}
