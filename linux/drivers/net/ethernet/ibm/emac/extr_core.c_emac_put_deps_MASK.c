
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emac_instance {int tah_dev; int mdio_dev; int rgmii_dev; int zmii_dev; int mal_dev; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct emac_instance *VAR_0)
{
 FUNC_0(VAR_0->mal_dev);
 FUNC_0(VAR_0->zmii_dev);
 FUNC_0(VAR_0->rgmii_dev);
 FUNC_0(VAR_0->mdio_dev);
 FUNC_0(VAR_0->tah_dev);
}
