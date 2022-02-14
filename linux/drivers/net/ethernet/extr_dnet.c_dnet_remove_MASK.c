
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct net_device {int irq; scalar_t__ phydev; } ;
struct dnet {int mii_bus; } ;


 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct dnet* FUNC_4 (struct net_device*) ;
 int FUNC_5 (scalar_t__) ;
 struct net_device* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{

 struct net_device *VAR_1;
 struct dnet *VAR_2;

 VAR_1 = FUNC_6(VAR_0);

 if (VAR_1) {
  VAR_2 = FUNC_4(VAR_1);
  if (VAR_1->phydev)
   FUNC_5(VAR_1->phydev);
  FUNC_3(VAR_2->mii_bus);
  FUNC_2(VAR_2->mii_bus);
  FUNC_7(VAR_1);
  FUNC_0(VAR_1->irq, VAR_1);
  FUNC_1(VAR_1);
 }

 return 0;
}
