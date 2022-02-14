
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;
struct phy_device {struct lan88xx_priv* priv; TYPE_1__ mdio; } ;
struct lan88xx_priv {int dummy; } ;


 int FUNC_0 (struct device*,struct lan88xx_priv*) ;

__attribute__((used)) static void FUNC_1(struct phy_device *VAR_0)
{
 struct device *VAR_1 = &VAR_0->mdio.dev;
 struct lan88xx_priv *VAR_2 = VAR_0->priv;

 if (VAR_2)
  FUNC_0(VAR_1, VAR_2);
}
