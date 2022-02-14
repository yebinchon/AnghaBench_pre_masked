
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_pcie_priv {int dummy; } ;
struct pcie_port {int dummy; } ;
struct dw_pcie {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct pcie_port*) ;
 int FUNC_2 (struct pcie_port*) ;
 struct dw_pcie* FUNC_3 (struct pcie_port*) ;
 struct uniphier_pcie_priv* FUNC_4 (struct dw_pcie*) ;
 int FUNC_5 (struct pcie_port*) ;
 int FUNC_6 (struct dw_pcie*) ;
 int FUNC_7 (struct uniphier_pcie_priv*) ;

__attribute__((used)) static int FUNC_8(struct pcie_port *VAR_1)
{
 struct dw_pcie *VAR_2 = FUNC_3(VAR_1);
 struct uniphier_pcie_priv *VAR_3 = FUNC_4(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_5(VAR_1);
 if (VAR_4)
  return VAR_4;

 FUNC_7(VAR_3);

 FUNC_2(VAR_1);
 VAR_4 = FUNC_6(VAR_2);
 if (VAR_4)
  return VAR_4;

 if (FUNC_0(VAR_0))
  FUNC_1(VAR_1);

 return 0;
}
