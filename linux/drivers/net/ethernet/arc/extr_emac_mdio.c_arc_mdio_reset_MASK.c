
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_bus {struct arc_emac_priv* priv; } ;
struct arc_emac_mdio_bus_data {scalar_t__ reset_gpio; int msec; } ;
struct arc_emac_priv {struct arc_emac_mdio_bus_data bus_data; } ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct mii_bus *VAR_0)
{
 struct arc_emac_priv *VAR_1 = VAR_0->priv;
 struct arc_emac_mdio_bus_data *VAR_2 = &VAR_1->bus_data;

 if (VAR_2->reset_gpio) {
  FUNC_0(VAR_2->reset_gpio, 1);
  FUNC_1(VAR_2->msec);
  FUNC_0(VAR_2->reset_gpio, 0);
 }

 return 0;
}
