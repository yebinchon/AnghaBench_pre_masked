
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct net_device {unsigned int base_addr; } ;
struct TYPE_4__ {int supported; } ;
struct TYPE_3__ {int duplex; scalar_t__ phy_address; int speed; int port; } ;
struct ethtool_link_ksettings {TYPE_2__ link_modes; TYPE_1__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_14,
    struct ethtool_link_ksettings *VAR_15)
{
 u16 VAR_16;
 unsigned int VAR_17 = VAR_14->base_addr;
 u32 VAR_18;

 VAR_18 = (VAR_11 | VAR_10 |
       VAR_9 | VAR_8);

 FUNC_0(1);
 VAR_16 = FUNC_2(VAR_17 + VAR_1);
 VAR_15->base.port = (VAR_16 & VAR_0) ? VAR_5 : VAR_6;
 VAR_15->base.speed = VAR_7;
 VAR_15->base.phy_address = VAR_17 + VAR_4;

 FUNC_0(0);
 VAR_16 = FUNC_2(VAR_17 + VAR_12);
 VAR_15->base.duplex = (VAR_16 & VAR_13) ? VAR_2 : VAR_3;

 FUNC_1(VAR_15->link_modes.supported,
      VAR_18);
}
