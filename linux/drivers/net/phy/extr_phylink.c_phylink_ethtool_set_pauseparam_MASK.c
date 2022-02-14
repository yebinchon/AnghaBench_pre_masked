
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phylink_link_state {int pause; } ;
struct phylink {int link_an_mode; int netdev; int phylink_disable_state; int supported; struct phylink_link_state link_config; } ;
struct ethtool_pauseparam {scalar_t__ rx_pause; scalar_t__ tx_pause; scalar_t__ autoneg; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct phylink*) ;
 int FUNC_3 (struct phylink*,struct phylink_link_state*) ;
 int FUNC_4 (struct phylink*,struct phylink_link_state*) ;
 int FUNC_5 (struct phylink*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int *) ;

int FUNC_8(struct phylink *VAR_9,
       struct ethtool_pauseparam *VAR_10)
{
 struct phylink_link_state *VAR_11 = &VAR_9->link_config;

 FUNC_0();

 if (!FUNC_6(VAR_9->supported, VAR_8) &&
     !FUNC_6(VAR_9->supported, VAR_0))
  return -VAR_2;

 if (!FUNC_6(VAR_9->supported, VAR_0) &&
     !VAR_10->autoneg && VAR_10->rx_pause != VAR_10->tx_pause)
  return -VAR_1;

 VAR_11->pause &= ~(VAR_3 | VAR_6);

 if (VAR_10->autoneg)
  VAR_11->pause |= VAR_3;
 if (VAR_10->rx_pause)
  VAR_11->pause |= VAR_4;
 if (VAR_10->tx_pause)
  VAR_11->pause |= VAR_5;

 if (!FUNC_7(VAR_7, &VAR_9->phylink_disable_state)) {
  switch (VAR_9->link_an_mode) {
  case 128:

   if (VAR_9->netdev)
    FUNC_1(VAR_9->netdev);
   FUNC_5(VAR_9);
   break;

  case 130:

   FUNC_4(VAR_9, VAR_11);
   FUNC_3(VAR_9, VAR_11);
   break;

  case 129:
   FUNC_3(VAR_9, VAR_11);
   FUNC_2(VAR_9);
   break;
  }
 }

 return 0;
}
