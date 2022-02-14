
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uniphier_pcie_priv {scalar_t__ base; } ;
struct dw_pcie {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 struct uniphier_pcie_priv* FUNC_1 (struct dw_pcie*) ;

__attribute__((used)) static int FUNC_2(struct dw_pcie *VAR_3)
{
 struct uniphier_pcie_priv *VAR_4 = FUNC_1(VAR_3);
 u32 VAR_5, VAR_6;

 VAR_5 = FUNC_0(VAR_4->base + VAR_1);
 VAR_6 = VAR_0 | VAR_2;

 return (VAR_5 & VAR_6) == VAR_6;
}
