
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct phy_device {struct dp83867_private* priv; TYPE_1__ mdio; } ;
struct dp83867_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dp83867_private* FUNC_0 (int *,int,int ) ;

__attribute__((used)) static int FUNC_1(struct phy_device *VAR_2)
{
 struct dp83867_private *VAR_3;

 VAR_3 = FUNC_0(&VAR_2->mdio.dev, sizeof(*VAR_3),
          VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_2->priv = VAR_3;

 return 0;
}
