
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct phylink_link_state {int dummy; } ;
struct phylink {int link_an_mode; scalar_t__ phydev; int supported; int link_port; } ;
struct TYPE_4__ {int supported; } ;
struct TYPE_3__ {int port; } ;
struct ethtool_link_ksettings {TYPE_2__ link_modes; TYPE_1__ base; } ;


 int FUNC_0 () ;


 int FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__,struct ethtool_link_ksettings*) ;
 int FUNC_3 (struct phylink*,struct phylink_link_state*) ;
 int FUNC_4 (struct phylink_link_state*,struct ethtool_link_ksettings*) ;
 int FUNC_5 (struct phylink*,struct phylink_link_state*) ;

int FUNC_6(struct phylink *VAR_0,
      struct ethtool_link_ksettings *VAR_1)
{
 struct phylink_link_state VAR_2;

 FUNC_0();

 if (VAR_0->phydev) {
  FUNC_2(VAR_0->phydev, VAR_1);
 } else {
  VAR_1->base.port = VAR_0->link_port;
 }

 FUNC_1(VAR_1->link_modes.supported, VAR_0->supported);

 switch (VAR_0->link_an_mode) {
 case 129:




  FUNC_3(VAR_0, &VAR_2);
  FUNC_4(&VAR_2, VAR_1);
  break;

 case 128:



  if (VAR_0->phydev)
   break;

  FUNC_5(VAR_0, &VAR_2);





  FUNC_4(&VAR_2, VAR_1);
  break;
 }

 return 0;
}
