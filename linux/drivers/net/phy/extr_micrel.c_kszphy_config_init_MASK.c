
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {struct kszphy_priv* priv; } ;
struct kszphy_type {scalar_t__ has_nand_tree_disable; scalar_t__ has_broadcast_disable; } ;
struct kszphy_priv {struct kszphy_type* type; } ;


 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct phy_device*) ;

__attribute__((used)) static int FUNC_3(struct phy_device *VAR_0)
{
 struct kszphy_priv *VAR_1 = VAR_0->priv;
 const struct kszphy_type *VAR_2;

 if (!VAR_1)
  return 0;

 VAR_2 = VAR_1->type;

 if (VAR_2->has_broadcast_disable)
  FUNC_0(VAR_0);

 if (VAR_2->has_nand_tree_disable)
  FUNC_2(VAR_0);

 return FUNC_1(VAR_0);
}
