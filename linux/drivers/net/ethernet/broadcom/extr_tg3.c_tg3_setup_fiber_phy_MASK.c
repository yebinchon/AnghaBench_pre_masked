
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct TYPE_6__ {scalar_t__ active_flowctrl; scalar_t__ active_speed; scalar_t__ active_duplex; scalar_t__ autoneg; scalar_t__ rmt_adv; } ;
struct tg3 {int mac_mode; scalar_t__ phy_id; scalar_t__ serdes_counter; int led_ctrl; TYPE_3__ link_config; TYPE_2__* napi; scalar_t__ link_up; } ;
struct TYPE_5__ {TYPE_1__* hw_status; } ;
struct TYPE_4__ {int status; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ FUNC_0 (struct tg3*,int ) ;
 int FUNC_1 (struct tg3*) ;
 int FUNC_2 (struct tg3*) ;
 int FUNC_3 (struct tg3*,scalar_t__) ;
 int FUNC_4 (struct tg3*,scalar_t__) ;
 int FUNC_5 (struct tg3*,int) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct tg3 *VAR_29, bool VAR_30)
{
 u32 VAR_31;
 u32 VAR_32;
 u8 VAR_33;
 u32 VAR_34;
 bool VAR_35;
 int VAR_36;

 VAR_31 = VAR_29->link_config.active_flowctrl;
 VAR_32 = VAR_29->link_config.active_speed;
 VAR_33 = VAR_29->link_config.active_duplex;

 if (!FUNC_0(VAR_29, VAR_3) &&
     VAR_29->link_up &&
     FUNC_0(VAR_29, VAR_4)) {
  VAR_34 = FUNC_6(VAR_16);
  VAR_34 &= (VAR_19 |
          VAR_21 |
          VAR_17 |
          VAR_20);
  if (VAR_34 == (VAR_19 |
       VAR_21)) {
   FUNC_8(VAR_16, (VAR_22 |
         VAR_17));
   return 0;
  }
 }

 FUNC_8(VAR_23, 0);

 VAR_29->mac_mode &= ~(VAR_13 | VAR_12);
 VAR_29->mac_mode |= VAR_14;
 FUNC_8(VAR_11, VAR_29->mac_mode);
 FUNC_9(40);

 if (VAR_29->phy_id == VAR_28)
  FUNC_1(VAR_29);


 FUNC_8(VAR_8, VAR_9);
 FUNC_9(40);

 VAR_35 = 0;
 VAR_29->link_config.rmt_adv = 0;
 VAR_34 = FUNC_6(VAR_16);

 if (FUNC_0(VAR_29, VAR_3))
  VAR_35 = FUNC_4(VAR_29, VAR_34);
 else
  VAR_35 = FUNC_3(VAR_29, VAR_34);

 VAR_29->napi[0].hw_status->status =
  (VAR_25 |
   (VAR_29->napi[0].hw_status->status & ~VAR_24));

 for (VAR_36 = 0; VAR_36 < 100; VAR_36++) {
  FUNC_8(VAR_16, (VAR_22 |
        VAR_17));
  FUNC_9(5);
  if ((FUNC_6(VAR_16) & (VAR_22 |
      VAR_17 |
      VAR_18)) == 0)
   break;
 }

 VAR_34 = FUNC_6(VAR_16);
 if ((VAR_34 & VAR_19) == 0) {
  VAR_35 = 0;
  if (VAR_29->link_config.autoneg == VAR_0 &&
      VAR_29->serdes_counter == 0) {
   FUNC_8(VAR_11, (VAR_29->mac_mode |
       VAR_15));
   FUNC_9(1);
   FUNC_8(VAR_11, VAR_29->mac_mode);
  }
 }

 if (VAR_35) {
  VAR_29->link_config.active_speed = VAR_26;
  VAR_29->link_config.active_duplex = VAR_1;
  FUNC_7(VAR_10, (VAR_29->led_ctrl |
        VAR_6 |
        VAR_5));
 } else {
  VAR_29->link_config.active_speed = VAR_27;
  VAR_29->link_config.active_duplex = VAR_2;
  FUNC_7(VAR_10, (VAR_29->led_ctrl |
        VAR_6 |
        VAR_7));
 }

 if (!FUNC_5(VAR_29, VAR_35)) {
  u32 VAR_37 = VAR_29->link_config.active_flowctrl;
  if (VAR_31 != VAR_37 ||
      VAR_32 != VAR_29->link_config.active_speed ||
      VAR_33 != VAR_29->link_config.active_duplex)
   FUNC_2(VAR_29);
 }

 return 0;
}
