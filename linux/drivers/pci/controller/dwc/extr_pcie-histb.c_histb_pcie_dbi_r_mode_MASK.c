
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pcie_port {int dummy; } ;
struct histb_pcie {int dummy; } ;
struct dw_pcie {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct histb_pcie*,int ) ;
 int FUNC_1 (struct histb_pcie*,int ,int ) ;
 struct dw_pcie* FUNC_2 (struct pcie_port*) ;
 struct histb_pcie* FUNC_3 (struct dw_pcie*) ;

__attribute__((used)) static void FUNC_4(struct pcie_port *VAR_2, bool VAR_3)
{
 struct dw_pcie *VAR_4 = FUNC_2(VAR_2);
 struct histb_pcie *VAR_5 = FUNC_3(VAR_4);
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_1);
 if (VAR_3)
  VAR_6 |= VAR_0;
 else
  VAR_6 &= ~VAR_0;
 FUNC_1(VAR_5, VAR_1, VAR_6);
}
