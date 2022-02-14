
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct net_device {struct phy_device* phydev; } ;
struct nb8800_priv {int pause_tx; int pause_rx; } ;


 struct nb8800_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct phy_device*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0)
{
 struct nb8800_priv *VAR_1 = FUNC_0(VAR_0);
 struct phy_device *VAR_2 = VAR_0->phydev;

 if (!VAR_2)
  return;

 FUNC_1(VAR_2, VAR_1->pause_rx, VAR_1->pause_tx);
}
