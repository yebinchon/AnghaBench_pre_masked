
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phylink_link_state {int link; } ;
struct phylink {scalar_t__ link_gpio; int netdev; int (* get_fixed_state ) (int ,struct phylink_link_state*) ;struct phylink_link_state link_config; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,struct phylink_link_state*) ;

__attribute__((used)) static void FUNC_2(struct phylink *VAR_0, struct phylink_link_state *VAR_1)
{
 *VAR_1 = VAR_0->link_config;
 if (VAR_0->get_fixed_state)
  VAR_0->get_fixed_state(VAR_0->netdev, VAR_1);
 else if (VAR_0->link_gpio)
  VAR_1->link = !!FUNC_0(VAR_0->link_gpio);
}
