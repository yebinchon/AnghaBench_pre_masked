
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_priv {int hw; } ;
struct net_device {int dev_addr; } ;


 int FUNC_0 (struct net_device*,void*) ;
 struct stmmac_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct stmmac_priv*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0, void *VAR_1)
{
 struct stmmac_priv *VAR_2 = FUNC_1(VAR_0);
 int VAR_3 = 0;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3)
  return VAR_3;

 FUNC_2(VAR_2, VAR_2->hw, VAR_0->dev_addr, 0);

 return VAR_3;
}
