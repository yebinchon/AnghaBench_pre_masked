
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {int spd_dpx; } ;
struct velocity_info {TYPE_2__ options; int mac_regs; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ speed; scalar_t__ duplex; scalar_t__ autoneg; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;
typedef enum speed_opt { ____Placeholder_speed_opt } speed_opt ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_0 (int ) ;
 struct velocity_info* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct velocity_info*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_18,
           const struct ethtool_link_ksettings *VAR_19)
{
 struct velocity_info *VAR_20 = FUNC_1(VAR_18);
 u32 VAR_21 = VAR_19->base.speed;
 u32 VAR_22;
 u32 VAR_23 = 0;
 int VAR_24 = 0;

 VAR_22 = FUNC_0(VAR_20->mac_regs);
 VAR_22 &= (~VAR_14);

 VAR_23 |= ((VAR_19->base.autoneg) ? VAR_12 : 0);
 VAR_23 |= ((VAR_21 == VAR_11) ? VAR_17 : 0);
 VAR_23 |= ((VAR_21 == VAR_10) ? VAR_16 : 0);
 VAR_23 |= ((VAR_21 == VAR_9) ? VAR_15 : 0);
 VAR_23 |= ((VAR_19->base.duplex == VAR_0) ?
         VAR_13 : 0);

 if ((VAR_23 & VAR_12) &&
     (VAR_23 != (VAR_22 | VAR_12))) {
  VAR_24 = -VAR_1;
 } else {
  enum speed_opt VAR_25;

  if (VAR_23 & VAR_12)
   VAR_25 = VAR_8;
  else if ((VAR_23 & VAR_17) &&
    (VAR_23 & VAR_13)) {
   VAR_25 = VAR_3;
  } else if (VAR_23 & VAR_16)
   VAR_25 = (VAR_23 & VAR_13) ?
    VAR_4 : VAR_5;
  else if (VAR_23 & VAR_15)
   VAR_25 = (VAR_23 & VAR_13) ?
    VAR_6 : VAR_7;
  else
   return -VAR_2;

  VAR_20->options.spd_dpx = VAR_25;

  FUNC_2(VAR_20, VAR_23);
 }

 return VAR_24;
}
