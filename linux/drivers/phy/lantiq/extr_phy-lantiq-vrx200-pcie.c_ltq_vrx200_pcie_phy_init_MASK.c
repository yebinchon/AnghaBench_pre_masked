
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy {int dummy; } ;
struct ltq_vrx200_pcie_phy_priv {int rcu_ahb_endian_big_endian_mask; int phy_reset; int pcie_reset; int rcu_ahb_endian_offset; int rcu_regmap; TYPE_1__* dev; } ;
struct TYPE_2__ {int of_node; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct ltq_vrx200_pcie_phy_priv* FUNC_1 (struct phy*) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct phy *VAR_0)
{
 struct ltq_vrx200_pcie_phy_priv *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 if (FUNC_0(VAR_1->dev->of_node))
  FUNC_2(VAR_1->rcu_regmap,
       VAR_1->rcu_ahb_endian_offset,
       VAR_1->rcu_ahb_endian_big_endian_mask,
       VAR_1->rcu_ahb_endian_big_endian_mask);
 else
  FUNC_2(VAR_1->rcu_regmap,
       VAR_1->rcu_ahb_endian_offset,
       VAR_1->rcu_ahb_endian_big_endian_mask, 0x0);

 VAR_2 = FUNC_3(VAR_1->phy_reset);
 if (VAR_2)
  goto err;

 FUNC_5(1);

 VAR_2 = FUNC_4(VAR_1->phy_reset);
 if (VAR_2)
  goto err;

 FUNC_5(1);

 VAR_2 = FUNC_4(VAR_1->pcie_reset);
 if (VAR_2)
  goto err_assert_phy_reset;


 FUNC_6(20, 40);

 return 0;

err_assert_phy_reset:
 FUNC_3(VAR_1->phy_reset);
err:
 return VAR_2;
}
