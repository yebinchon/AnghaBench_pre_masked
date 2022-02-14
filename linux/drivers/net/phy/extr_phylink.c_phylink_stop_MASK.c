
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phylink {scalar_t__ link_irq; int link_poll; scalar_t__ phydev; scalar_t__ sfp_bus; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,struct phylink*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct phylink*,int ) ;
 int FUNC_5 (scalar_t__) ;

void FUNC_6(struct phylink *VAR_1)
{
 FUNC_0();

 if (VAR_1->sfp_bus)
  FUNC_5(VAR_1->sfp_bus);
 if (VAR_1->phydev)
  FUNC_3(VAR_1->phydev);
 FUNC_1(&VAR_1->link_poll);
 if (VAR_1->link_irq) {
  FUNC_2(VAR_1->link_irq, VAR_1);
  VAR_1->link_irq = 0;
 }

 FUNC_4(VAR_1, VAR_0);
}
