
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct net_device {int phydev; } ;
struct ethoc {int clk; scalar_t__ mdio; int napi; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 struct ethoc* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 struct net_device* FUNC_7 (struct platform_device*) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_7(VAR_0);
 struct ethoc *VAR_2 = FUNC_4(VAR_1);

 if (VAR_1) {
  FUNC_5(&VAR_2->napi);
  FUNC_6(VAR_1->phydev);

  if (VAR_2->mdio) {
   FUNC_3(VAR_2->mdio);
   FUNC_2(VAR_2->mdio);
  }
  FUNC_0(VAR_2->clk);
  FUNC_8(VAR_1);
  FUNC_1(VAR_1);
 }

 return 0;
}
