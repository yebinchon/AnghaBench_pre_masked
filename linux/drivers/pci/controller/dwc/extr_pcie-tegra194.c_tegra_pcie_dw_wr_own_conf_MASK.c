
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pcie_port {int dummy; } ;
struct dw_pcie {scalar_t__ dbi_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int,int ) ;
 struct dw_pcie* FUNC_1 (struct pcie_port*) ;

__attribute__((used)) static int FUNC_2(struct pcie_port *VAR_2, int VAR_3, int VAR_4,
         u32 VAR_5)
{
 struct dw_pcie *VAR_6 = FUNC_1(VAR_2);







 if (VAR_3 == VAR_1)
  return VAR_0;

 return FUNC_0(VAR_6->dbi_base + VAR_3, VAR_4, VAR_5);
}
