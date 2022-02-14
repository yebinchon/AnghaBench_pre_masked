
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int dev; } ;
struct phy_device {TYPE_1__ mdio; struct bcm7xxx_phy_priv* priv; } ;
struct bcm7xxx_phy_priv {int stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (int *,int ,int,int ) ;
 struct bcm7xxx_phy_priv* FUNC_2 (int *,int,int ) ;

__attribute__((used)) static int FUNC_3(struct phy_device *VAR_2)
{
 struct bcm7xxx_phy_priv *VAR_3;

 VAR_3 = FUNC_2(&VAR_2->mdio.dev, sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_2->priv = VAR_3;

 VAR_3->stats = FUNC_1(&VAR_2->mdio.dev,
       FUNC_0(VAR_2), sizeof(u64),
       VAR_1);
 if (!VAR_3->stats)
  return -VAR_0;

 return 0;
}
