
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct net_device {int irq; struct phy_device* phydev; } ;
struct nb8800_priv {int napi; } ;


 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,int) ;
 int FUNC_5 (struct net_device*,int) ;
 struct nb8800_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct phy_device*) ;
 int FUNC_9 (struct phy_device*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_0)
{
 struct nb8800_priv *VAR_1 = FUNC_6(VAR_0);
 struct phy_device *VAR_2 = VAR_0->phydev;

 FUNC_9(VAR_2);

 FUNC_7(VAR_0);
 FUNC_1(&VAR_1->napi);

 FUNC_3(VAR_0);
 FUNC_4(VAR_0, 0);
 FUNC_5(VAR_0, 0);

 FUNC_8(VAR_2);

 FUNC_0(VAR_0->irq, VAR_0);

 FUNC_2(VAR_0);

 return 0;
}
