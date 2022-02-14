
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct phylink_link_state {scalar_t__ an_enabled; int duplex; int speed; int lp_advertising; int advertising; } ;
struct TYPE_4__ {int autoneg; int duplex; int speed; } ;
struct TYPE_3__ {int lp_advertising; int advertising; } ;
struct ethtool_link_ksettings {TYPE_2__ base; TYPE_1__ link_modes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(const struct phylink_link_state *VAR_2,
      struct ethtool_link_ksettings *VAR_3)
{
 FUNC_1(VAR_3->link_modes.advertising, VAR_2->advertising);
 FUNC_0(VAR_3->link_modes.lp_advertising, VAR_2->lp_advertising);
 VAR_3->base.speed = VAR_2->speed;
 VAR_3->base.duplex = VAR_2->duplex;
 VAR_3->base.autoneg = VAR_2->an_enabled ? VAR_1 :
    VAR_0;
}
