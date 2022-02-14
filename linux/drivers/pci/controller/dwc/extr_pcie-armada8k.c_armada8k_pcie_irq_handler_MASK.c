
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dw_pcie {int dummy; } ;
struct armada8k_pcie {struct dw_pcie* pci; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dw_pcie*,int ) ;
 int FUNC_1 (struct dw_pcie*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct armada8k_pcie *VAR_4 = VAR_3;
 struct dw_pcie *VAR_5 = VAR_4->pci;
 u32 VAR_6;






 VAR_6 = FUNC_0(VAR_5, VAR_1);
 FUNC_1(VAR_5, VAR_1, VAR_6);

 return VAR_0;
}
