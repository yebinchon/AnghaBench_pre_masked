
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int interface; } ;
struct phylink {scalar_t__ link_an_mode; int link_irq; scalar_t__ sfp_bus; scalar_t__ phydev; int link_poll; scalar_t__ get_fixed_state; scalar_t__ link_gpio; int phylink_disable_state; TYPE_1__ link_config; scalar_t__ netdev; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct phylink*,char*,int ,int ) ;
 int VAR_6 ;
 int FUNC_9 (struct phylink*) ;
 int FUNC_10 (struct phylink*,TYPE_1__*) ;
 int FUNC_11 (struct phylink*,TYPE_1__*) ;
 int FUNC_12 (struct phylink*) ;
 int FUNC_13 (int,int ,int,char*,struct phylink*) ;
 int FUNC_14 (scalar_t__) ;

void FUNC_15(struct phylink *VAR_7)
{
 FUNC_0();

 FUNC_8(VAR_7, "configuring for %s/%s link mode\n",
       FUNC_7(VAR_7->link_an_mode),
       FUNC_5(VAR_7->link_config.interface));


 if (VAR_7->netdev)
  FUNC_4(VAR_7->netdev);





 FUNC_11(VAR_7, &VAR_7->link_config);
 FUNC_10(VAR_7, &VAR_7->link_config);





 FUNC_9(VAR_7);

 FUNC_1(VAR_4, &VAR_7->phylink_disable_state);
 FUNC_12(VAR_7);

 if (VAR_7->link_an_mode == VAR_3 && VAR_7->link_gpio) {
  int VAR_8 = FUNC_2(VAR_7->link_gpio);

  if (VAR_8 > 0) {
   if (!FUNC_13(VAR_8, VAR_6,
      VAR_2 |
      VAR_1,
      "netdev link", VAR_7))
    VAR_7->link_irq = VAR_8;
   else
    VAR_8 = 0;
  }
  if (VAR_8 <= 0)
   FUNC_3(&VAR_7->link_poll, VAR_5 + VAR_0);
 }
 if (VAR_7->link_an_mode == VAR_3 && VAR_7->get_fixed_state)
  FUNC_3(&VAR_7->link_poll, VAR_5 + VAR_0);
 if (VAR_7->phydev)
  FUNC_6(VAR_7->phydev);
 if (VAR_7->sfp_bus)
  FUNC_14(VAR_7->sfp_bus);
}
