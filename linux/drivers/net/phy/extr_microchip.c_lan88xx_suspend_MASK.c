
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {struct lan88xx_priv* priv; } ;
struct lan88xx_priv {int wolopts; } ;


 int FUNC_0 (struct phy_device*) ;

__attribute__((used)) static int FUNC_1(struct phy_device *VAR_0)
{
 struct lan88xx_priv *VAR_1 = VAR_0->priv;


 if (!VAR_1->wolopts)
  FUNC_0(VAR_0);

 return 0;
}
