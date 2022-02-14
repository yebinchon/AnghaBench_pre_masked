
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct phylink_link_state {scalar_t__ duplex; int an_enabled; scalar_t__ speed; int interface; int advertising; } ;
struct phylink {scalar_t__ link_an_mode; int state_mutex; struct phylink_link_state link_config; int phylink_disable_state; scalar_t__ phydev; int supported; } ;
struct phy_setting {scalar_t__ duplex; scalar_t__ speed; } ;
struct TYPE_4__ {scalar_t__ autoneg; scalar_t__ duplex; scalar_t__ speed; } ;
struct TYPE_3__ {int advertising; } ;
struct ethtool_link_ksettings {TYPE_2__ base; TYPE_1__ link_modes; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__,struct ethtool_link_ksettings*) ;
 struct phy_setting* FUNC_9 (scalar_t__,scalar_t__,int ,int) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct phylink*) ;
 int FUNC_12 (struct phylink*,struct phylink_link_state*) ;
 scalar_t__ FUNC_13 (struct phylink*,int ,struct phylink_link_state*) ;
 int VAR_8 ;
 int FUNC_14 (int ,int *) ;

int FUNC_15(struct phylink *VAR_9,
      const struct ethtool_link_ksettings *VAR_10)
{
 FUNC_1(VAR_8);
 struct ethtool_link_ksettings VAR_11;
 struct phylink_link_state VAR_12;
 int VAR_13;

 FUNC_0();

 if (VAR_10->base.autoneg != VAR_0 &&
     VAR_10->base.autoneg != VAR_1)
  return -VAR_3;

 FUNC_5(VAR_8, VAR_9->supported);
 VAR_12 = VAR_9->link_config;


 FUNC_4(VAR_12.advertising, VAR_10->link_modes.advertising,
       VAR_8);


 if (VAR_10->base.autoneg == VAR_0) {
  const struct phy_setting *VAR_14;




  VAR_14 = FUNC_9(VAR_10->base.speed, VAR_10->base.duplex,
           VAR_8, 0);
  if (!VAR_14)
   return -VAR_3;




  if (VAR_9->link_an_mode == VAR_5 &&
      (VAR_14->speed != VAR_9->link_config.speed ||
       VAR_14->duplex != VAR_9->link_config.duplex))
   return -VAR_3;

  VAR_12.speed = VAR_14->speed;
  VAR_12.duplex = VAR_14->duplex;
  VAR_12.an_enabled = 0;

  FUNC_2(VAR_4, VAR_12.advertising);
 } else {

  if (VAR_9->link_an_mode == VAR_5)
   return -VAR_3;

  VAR_12.speed = VAR_7;
  VAR_12.duplex = VAR_2;
  VAR_12.an_enabled = 1;

  FUNC_3(VAR_4, VAR_12.advertising);
 }

 if (FUNC_13(VAR_9, VAR_8, &VAR_12))
  return -VAR_3;


 if (VAR_12.an_enabled && FUNC_10(VAR_12.advertising))
  return -VAR_3;

 VAR_11 = *VAR_10;
 FUNC_5(VAR_11.link_modes.advertising, VAR_12.advertising);
 VAR_11.base.speed = VAR_12.speed;
 VAR_11.base.duplex = VAR_12.duplex;


 if (VAR_9->phydev) {
  VAR_13 = FUNC_8(VAR_9->phydev, &VAR_11);
  if (VAR_13)
   return VAR_13;
 }

 FUNC_6(&VAR_9->state_mutex);

 FUNC_5(VAR_9->link_config.advertising, VAR_11.link_modes.advertising);
 VAR_9->link_config.interface = VAR_12.interface;
 VAR_9->link_config.speed = VAR_11.base.speed;
 VAR_9->link_config.duplex = VAR_11.base.duplex;
 VAR_9->link_config.an_enabled = VAR_11.base.autoneg != VAR_0;

 if (!FUNC_14(VAR_6, &VAR_9->phylink_disable_state)) {
  FUNC_12(VAR_9, &VAR_9->link_config);
  FUNC_11(VAR_9);
 }
 FUNC_7(&VAR_9->state_mutex);

 return 0;
}
