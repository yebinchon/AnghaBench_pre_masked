
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dw_pcie {int dummy; } ;
struct artpec6_pcie {scalar_t__ variant; struct dw_pcie* pci; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct dw_pcie*,int ) ;
 int FUNC_3 (struct dw_pcie*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct artpec6_pcie *VAR_5)
{
 struct dw_pcie *VAR_6 = VAR_5->pci;
 u32 VAR_7;

 if (VAR_5->variant != VAR_2)
  return;





 VAR_7 = FUNC_2(VAR_6, VAR_0);
 VAR_7 &= ~VAR_1;
 VAR_7 |= FUNC_0(180);
 FUNC_3(VAR_6, VAR_0, VAR_7);





 VAR_7 = FUNC_2(VAR_6, VAR_4);
 VAR_7 &= ~VAR_3;
 VAR_7 |= FUNC_1(180);
 FUNC_3(VAR_6, VAR_4, VAR_7);
}
