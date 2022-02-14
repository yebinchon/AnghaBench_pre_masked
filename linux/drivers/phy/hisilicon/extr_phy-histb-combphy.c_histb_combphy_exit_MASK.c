
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy {int dummy; } ;
struct histb_combphy_priv {int ref_clk; int por_rst; scalar_t__ mmio; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct histb_combphy_priv* FUNC_1 (struct phy*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct phy *VAR_2)
{
 struct histb_combphy_priv *VAR_3 = FUNC_1(VAR_2);
 u32 VAR_4;


 VAR_4 = FUNC_2(VAR_3->mmio + VAR_0);
 VAR_4 &= ~VAR_1;
 FUNC_4(VAR_4, VAR_3->mmio + VAR_0);

 FUNC_3(VAR_3->por_rst);
 FUNC_0(VAR_3->ref_clk);

 return 0;
}
