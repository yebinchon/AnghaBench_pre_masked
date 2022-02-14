
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pcie_port {int dummy; } ;
struct dw_pcie {scalar_t__ dbi_base; } ;


 int FUNC_0 (scalar_t__,int,int ) ;
 int FUNC_1 (struct pcie_port*,int) ;
 struct dw_pcie* FUNC_2 (struct pcie_port*) ;

__attribute__((used)) static int FUNC_3(struct pcie_port *VAR_0, int VAR_1,
      int VAR_2, u32 VAR_3)
{
 struct dw_pcie *VAR_4 = FUNC_2(VAR_0);
 int VAR_5;

 FUNC_1(VAR_0, 1);
 VAR_5 = FUNC_0(VAR_4->dbi_base + VAR_1, VAR_2, VAR_3);
 FUNC_1(VAR_0, 0);

 return VAR_5;
}
