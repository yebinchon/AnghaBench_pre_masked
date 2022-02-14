
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tg3 {int phy_flags; int phy_addr; int mdio_bus; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct tg3 *VAR_1)
{
 if (!(VAR_1->phy_flags & VAR_0))
  return;

 FUNC_1(FUNC_0(VAR_1->mdio_bus, VAR_1->phy_addr));
}
