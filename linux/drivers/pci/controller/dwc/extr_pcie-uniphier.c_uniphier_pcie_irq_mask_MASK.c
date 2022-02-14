
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uniphier_pcie_priv {scalar_t__ base; } ;
struct pcie_port {int dummy; } ;
struct irq_data {int dummy; } ;
struct dw_pcie {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct pcie_port* FUNC_1 (struct irq_data*) ;
 scalar_t__ FUNC_2 (struct irq_data*) ;
 int FUNC_3 (scalar_t__) ;
 struct dw_pcie* FUNC_4 (struct pcie_port*) ;
 struct uniphier_pcie_priv* FUNC_5 (struct dw_pcie*) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct irq_data *VAR_3)
{
 struct pcie_port *VAR_4 = FUNC_1(VAR_3);
 struct dw_pcie *VAR_5 = FUNC_4(VAR_4);
 struct uniphier_pcie_priv *VAR_6 = FUNC_5(VAR_5);
 u32 VAR_7;

 VAR_7 = FUNC_3(VAR_6->base + VAR_0);
 VAR_7 &= ~VAR_1;
 VAR_7 |= FUNC_0(FUNC_2(VAR_3) + VAR_2);
 FUNC_6(VAR_7, VAR_6->base + VAR_0);
}
