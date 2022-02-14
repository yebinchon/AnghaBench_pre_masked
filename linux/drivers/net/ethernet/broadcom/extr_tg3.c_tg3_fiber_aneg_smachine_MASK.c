
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct tg3_fiber_aneginfo {int state; int rxconfig; unsigned long link_time; unsigned long cur_time; int ability_match_cfg; int ability_match_count; int ability_match; int idle_match; int ack_match; int flags; int txconfig; } ;
struct TYPE_2__ {int flowctrl; } ;
struct tg3 {int mac_mode; TYPE_1__ link_config; } ;


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
 unsigned long VAR_14 ;

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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct tg3 *VAR_38,
       struct tg3_fiber_aneginfo *VAR_39)
{
 u16 VAR_40;
 unsigned long VAR_41;
 u32 VAR_42;
 int VAR_43;

 if (VAR_39->state == 128) {
  VAR_39->rxconfig = 0;
  VAR_39->link_time = 0;
  VAR_39->cur_time = 0;
  VAR_39->ability_match_cfg = 0;
  VAR_39->ability_match_count = 0;
  VAR_39->ability_match = 0;
  VAR_39->idle_match = 0;
  VAR_39->ack_match = 0;
 }
 VAR_39->cur_time++;

 if (FUNC_1(VAR_19) & VAR_20) {
  VAR_42 = FUNC_1(VAR_18);

  if (VAR_42 != VAR_39->ability_match_cfg) {
   VAR_39->ability_match_cfg = VAR_42;
   VAR_39->ability_match = 0;
   VAR_39->ability_match_count = 0;
  } else {
   if (++VAR_39->ability_match_count > 1) {
    VAR_39->ability_match = 1;
    VAR_39->ability_match_cfg = VAR_42;
   }
  }
  if (VAR_42 & VAR_2)
   VAR_39->ack_match = 1;
  else
   VAR_39->ack_match = 0;

  VAR_39->idle_match = 0;
 } else {
  VAR_39->idle_match = 1;
  VAR_39->ability_match_cfg = 0;
  VAR_39->ability_match_count = 0;
  VAR_39->ability_match = 0;
  VAR_39->ack_match = 0;

  VAR_42 = 0;
 }

 VAR_39->rxconfig = VAR_42;
 VAR_43 = VAR_13;

 switch (VAR_39->state) {
 case 128:
  if (VAR_39->flags & (VAR_23 | VAR_35))
   VAR_39->state = 139;


 case 139:
  VAR_39->flags &= ~(VAR_22 | VAR_34);
  if (VAR_39->flags & VAR_23) {
   VAR_39->link_time = 0;
   VAR_39->cur_time = 0;
   VAR_39->ability_match_cfg = 0;
   VAR_39->ability_match_count = 0;
   VAR_39->ability_match = 0;
   VAR_39->idle_match = 0;
   VAR_39->ack_match = 0;

   VAR_39->state = 129;
  } else {
   VAR_39->state = 136;
  }
  break;

 case 129:
  VAR_39->link_time = VAR_39->cur_time;
  VAR_39->flags &= ~(VAR_32);
  VAR_39->txconfig = 0;
  FUNC_2(VAR_21, 0);
  VAR_38->mac_mode |= VAR_17;
  FUNC_3(VAR_16, VAR_38->mac_mode);
  FUNC_4(40);

  VAR_43 = VAR_15;
  VAR_39->state = 130;


 case 130:
  VAR_41 = VAR_39->cur_time - VAR_39->link_time;
  if (VAR_41 > VAR_14)
   VAR_39->state = 142;
  else
   VAR_43 = VAR_15;
  break;

 case 136:
  VAR_43 = VAR_11;
  break;

 case 142:
  VAR_39->flags &= ~(VAR_37);
  VAR_39->txconfig = VAR_3;
  VAR_40 = FUNC_0(VAR_38->link_config.flowctrl);
  if (VAR_40 & VAR_0)
   VAR_39->txconfig |= VAR_7;
  if (VAR_40 & VAR_1)
   VAR_39->txconfig |= VAR_8;
  FUNC_2(VAR_21, VAR_39->txconfig);
  VAR_38->mac_mode |= VAR_17;
  FUNC_3(VAR_16, VAR_38->mac_mode);
  FUNC_4(40);

  VAR_39->state = 143;
  break;

 case 143:
  if (VAR_39->ability_match != 0 && VAR_39->rxconfig != 0)
   VAR_39->state = 140;
  break;

 case 140:
  VAR_39->txconfig |= VAR_2;
  FUNC_2(VAR_21, VAR_39->txconfig);
  VAR_38->mac_mode |= VAR_17;
  FUNC_3(VAR_16, VAR_38->mac_mode);
  FUNC_4(40);

  VAR_39->state = 141;


 case 141:
  if (VAR_39->ack_match != 0) {
   if ((VAR_39->rxconfig & ~VAR_2) ==
       (VAR_39->ability_match_cfg & ~VAR_2)) {
    VAR_39->state = 137;
   } else {
    VAR_39->state = 139;
   }
  } else if (VAR_39->ability_match != 0 &&
      VAR_39->rxconfig == 0) {
   VAR_39->state = 139;
  }
  break;

 case 137:
  if (VAR_39->rxconfig & VAR_5) {
   VAR_43 = VAR_12;
   break;
  }
  VAR_39->flags &= ~(VAR_26 |
          VAR_27 |
          VAR_31 |
          VAR_25 |
          VAR_29 |
          VAR_30 |
          VAR_28 |
          VAR_36 |
          VAR_33);
  if (VAR_39->rxconfig & VAR_3)
   VAR_39->flags |= VAR_26;
  if (VAR_39->rxconfig & VAR_4)
   VAR_39->flags |= VAR_27;
  if (VAR_39->rxconfig & VAR_7)
   VAR_39->flags |= VAR_31;
  if (VAR_39->rxconfig & VAR_8)
   VAR_39->flags |= VAR_25;
  if (VAR_39->rxconfig & VAR_9)
   VAR_39->flags |= VAR_29;
  if (VAR_39->rxconfig & VAR_10)
   VAR_39->flags |= VAR_30;
  if (VAR_39->rxconfig & VAR_6)
   VAR_39->flags |= VAR_28;

  VAR_39->link_time = VAR_39->cur_time;

  VAR_39->flags ^= (VAR_37);
  if (VAR_39->rxconfig & 0x0008)
   VAR_39->flags |= VAR_36;
  if (VAR_39->rxconfig & VAR_6)
   VAR_39->flags |= VAR_33;
  VAR_39->flags |= VAR_34;

  VAR_39->state = 138;
  VAR_43 = VAR_15;
  break;

 case 138:
  if (VAR_39->ability_match != 0 &&
      VAR_39->rxconfig == 0) {
   VAR_39->state = 139;
   break;
  }
  VAR_41 = VAR_39->cur_time - VAR_39->link_time;
  if (VAR_41 > VAR_14) {
   if (!(VAR_39->flags & (VAR_28))) {
    VAR_39->state = 134;
   } else {
    if ((VAR_39->txconfig & VAR_6) == 0 &&
        !(VAR_39->flags & VAR_33)) {
     VAR_39->state = 134;
    } else {
     VAR_43 = VAR_12;
    }
   }
  }
  break;

 case 134:
  VAR_39->link_time = VAR_39->cur_time;
  VAR_38->mac_mode &= ~VAR_17;
  FUNC_3(VAR_16, VAR_38->mac_mode);
  FUNC_4(40);

  VAR_39->state = 135;
  VAR_43 = VAR_15;
  break;

 case 135:
  if (VAR_39->ability_match != 0 &&
      VAR_39->rxconfig == 0) {
   VAR_39->state = 139;
   break;
  }
  VAR_41 = VAR_39->cur_time - VAR_39->link_time;
  if (VAR_41 > VAR_14) {

   VAR_39->state = 133;
  }
  break;

 case 133:
  VAR_39->flags |= (VAR_22 | VAR_24);
  VAR_43 = VAR_11;
  break;

 case 131:

  break;

 case 132:

  break;

 default:
  VAR_43 = VAR_12;
  break;
 }

 return VAR_43;
}
