
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ave_private {int nrsts; int nclks; int * clk; int * rst; int mdio; int phydev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct ave_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_0)
{
 struct ave_private *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 FUNC_3(VAR_1->phydev);
 FUNC_1(VAR_1->mdio);


 for (VAR_2 = 0; VAR_2 < VAR_1->nrsts; VAR_2++)
  FUNC_4(VAR_1->rst[VAR_2]);
 for (VAR_2 = 0; VAR_2 < VAR_1->nclks; VAR_2++)
  FUNC_0(VAR_1->clk[VAR_2]);
}
