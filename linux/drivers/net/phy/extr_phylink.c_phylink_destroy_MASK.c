
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phylink {int resolve; scalar_t__ link_gpio; scalar_t__ sfp_bus; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct phylink*) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(struct phylink *VAR_0)
{
 if (VAR_0->sfp_bus)
  FUNC_3(VAR_0->sfp_bus);
 if (VAR_0->link_gpio)
  FUNC_1(VAR_0->link_gpio);

 FUNC_0(&VAR_0->resolve);
 FUNC_2(VAR_0);
}
