
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy {int dummy; } ;
struct histb_combphy_priv {scalar_t__ mmio; int por_rst; int ref_clk; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct histb_combphy_priv*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct histb_combphy_priv*,int,int) ;
 struct histb_combphy_priv* FUNC_4 (struct phy*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct phy *VAR_3)
{
 struct histb_combphy_priv *VAR_4 = FUNC_4(VAR_3);
 u32 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6)
  return VAR_6;


 VAR_5 = FUNC_5(VAR_4->mmio + VAR_1);
 VAR_5 &= ~VAR_0;
 FUNC_7(VAR_5, VAR_4->mmio + VAR_1);

 VAR_6 = FUNC_0(VAR_4->ref_clk);
 if (VAR_6)
  return VAR_6;

 FUNC_6(VAR_4->por_rst);


 VAR_5 = FUNC_5(VAR_4->mmio + VAR_1);
 VAR_5 |= VAR_2;
 FUNC_7(VAR_5, VAR_4->mmio + VAR_1);


 FUNC_2(5);


 FUNC_3(VAR_4, 0x1, 0x8);
 FUNC_3(VAR_4, 0xc, 0x9);
 FUNC_3(VAR_4, 0x1a, 0x4);

 return 0;
}
