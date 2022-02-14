
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_4__ {scalar_t__ duplex; scalar_t__ port; scalar_t__ autoneg; int speed; } ;
struct TYPE_3__ {int advertising; } ;
struct ethtool_link_ksettings {TYPE_2__ base; TYPE_1__ link_modes; } ;
struct de_private {int media_supported; int media_type; unsigned int media_lock; int media_advertise; int dev; int media_timer; scalar_t__ de21040; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;


 scalar_t__ VAR_17 ;
 int FUNC_0 (struct de_private*) ;
 int FUNC_1 (struct de_private*) ;
 int FUNC_2 (struct de_private*) ;
 int FUNC_3 (struct de_private*) ;
 int FUNC_4 (int*,int ) ;
 scalar_t__ VAR_18 ;
 int FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct de_private *VAR_19,
       const struct ethtool_link_ksettings *VAR_20)
{
 u32 VAR_21;
 unsigned int VAR_22;
 u8 VAR_23 = VAR_20->base.duplex;
 u8 VAR_24 = VAR_20->base.port;
 u8 VAR_25 = VAR_20->base.autoneg;
 u32 VAR_26;

 FUNC_4(&VAR_26,
      VAR_20->link_modes.advertising);

 if (VAR_20->base.speed != 10)
  return -VAR_16;
 if (VAR_23 != VAR_15 && VAR_23 != VAR_14)
  return -VAR_16;
 if (VAR_24 != VAR_17 && VAR_24 != 129 && VAR_24 != 128)
  return -VAR_16;
 if (VAR_19->de21040 && VAR_24 == 128)
  return -VAR_16;
 if (VAR_25 != VAR_6 && VAR_25 != VAR_7)
  return -VAR_16;
 if (VAR_26 & ~VAR_19->media_supported)
  return -VAR_16;
 if (VAR_25 == VAR_7 &&
     (!(VAR_26 & VAR_3)))
  return -VAR_16;

 switch (VAR_24) {
 case 129:
  VAR_21 = VAR_8;
  if (!(VAR_26 & VAR_2))
   return -VAR_16;
  break;
 case 128:
  VAR_21 = VAR_9;
  if (!(VAR_26 & VAR_4))
   return -VAR_16;
  break;
 default:
  if (VAR_25 == VAR_7)
   VAR_21 = VAR_11;
  else if (VAR_23 == VAR_14)
   VAR_21 = VAR_12;
  else
   VAR_21 = VAR_10;
  if (!(VAR_26 & VAR_5))
   return -VAR_16;
  if (!(VAR_26 & (VAR_0 |
         VAR_1)))
   return -VAR_16;
  break;
 }

 VAR_22 = (VAR_25 == VAR_7) ? 0 : 1;

 if ((VAR_21 == VAR_19->media_type) &&
     (VAR_22 == VAR_19->media_lock) &&
     (VAR_26 == VAR_19->media_advertise))
  return 0;

 FUNC_0(VAR_19);
 FUNC_5(&VAR_19->media_timer, VAR_18 + VAR_13);
 FUNC_3(VAR_19);

 VAR_19->media_type = VAR_21;
 VAR_19->media_lock = VAR_22;
 VAR_19->media_advertise = VAR_26;
 FUNC_1(VAR_19);
 if (FUNC_6(VAR_19->dev))
  FUNC_2(VAR_19);

 return 0;
}
