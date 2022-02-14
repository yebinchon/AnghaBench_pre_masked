
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_pcie_ep {int page_size; } ;
struct dw_pcie {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dw_pcie*,int ,int) ;
 int FUNC_1 (struct dw_pcie*,int ,scalar_t__) ;
 struct dw_pcie* FUNC_2 (struct dw_pcie_ep*) ;

__attribute__((used)) static void FUNC_3(struct dw_pcie_ep *VAR_5)
{
 struct dw_pcie *VAR_6 = FUNC_2(VAR_5);
 int VAR_7;

 VAR_5->page_size = VAR_0;
 VAR_7 = VAR_4 | VAR_3;
 FUNC_1(VAR_6, VAR_2, VAR_1 - 1);
 FUNC_0(VAR_6, VAR_2, VAR_7);
}
