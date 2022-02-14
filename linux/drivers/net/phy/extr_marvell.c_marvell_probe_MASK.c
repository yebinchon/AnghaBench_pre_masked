
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct phy_device {struct marvell_priv* priv; TYPE_1__ mdio; } ;
struct marvell_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct marvell_priv* FUNC_0 (int *,int,int ) ;

__attribute__((used)) static int FUNC_1(struct phy_device *VAR_2)
{
 struct marvell_priv *VAR_3;

 VAR_3 = FUNC_0(&VAR_2->mdio.dev, sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_2->priv = VAR_3;

 return 0;
}
