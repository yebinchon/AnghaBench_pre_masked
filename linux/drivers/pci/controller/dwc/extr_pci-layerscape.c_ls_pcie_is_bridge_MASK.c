
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ls_pcie {struct dw_pcie* pci; } ;
struct dw_pcie {scalar_t__ dbi_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct ls_pcie *VAR_2)
{
 struct dw_pcie *VAR_3 = VAR_2->pci;
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_3->dbi_base + VAR_0);
 VAR_4 &= 0x7f;

 return VAR_4 == VAR_1;
}
