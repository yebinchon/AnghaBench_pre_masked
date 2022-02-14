
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct fc_lport {int link_supported_speeds; int link_speed; } ;
struct TYPE_4__ {int speed; } ;
struct TYPE_3__ {int* supported; } ;
struct ethtool_link_ksettings {TYPE_2__ base; TYPE_1__ link_modes; } ;


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
 int FUNC_0 (struct net_device*,struct ethtool_link_ksettings*) ;
 int FUNC_1 (int ) ;
 struct net_device* FUNC_2 (struct fc_lport*) ;

int FUNC_3(struct fc_lport *VAR_17)
{
 struct net_device *VAR_18 = FUNC_2(VAR_17);
 struct ethtool_link_ksettings VAR_19;

 if (!FUNC_0(VAR_18, &VAR_19)) {
  VAR_17->link_supported_speeds &= ~(VAR_1 |
                                    VAR_0 |
                                    VAR_2 |
                                    VAR_3);

  if (VAR_19.link_modes.supported[0] & (
       VAR_10 |
       VAR_9 |
       VAR_8))
   VAR_17->link_supported_speeds |= VAR_1;

  if (VAR_19.link_modes.supported[0] & (
       VAR_7 |
       VAR_5 |
       VAR_4 |
       VAR_6))
   VAR_17->link_supported_speeds |= VAR_0;

  if (VAR_19.link_modes.supported[0] & (
       VAR_12 |
       VAR_11))
   VAR_17->link_supported_speeds |= VAR_2;

  if (VAR_19.link_modes.supported[0] & (
       VAR_14 |
       VAR_13 |
       VAR_16 |
       VAR_15))
   VAR_17->link_supported_speeds |= VAR_3;

  VAR_17->link_speed = FUNC_1(VAR_19.base.speed);
  return 0;
 }
 return -1;
}
