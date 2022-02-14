
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct keystone_pcie {struct dw_pcie* pci; } ;
struct dw_pcie {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (struct dw_pcie*,int ) ;
 int FUNC_3 (struct keystone_pcie*,int ,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct keystone_pcie *VAR_4)
{
 struct dw_pcie *VAR_5 = VAR_4->pci;
 u8 VAR_6;

 VAR_6 = FUNC_2(VAR_5, VAR_3);
 if (VAR_6 == 0 || VAR_6 > 4)
  return;

 FUNC_3(VAR_4, FUNC_1(VAR_6),
      VAR_0);
 FUNC_3(VAR_4, VAR_2, VAR_0);
 FUNC_4(1);
 FUNC_3(VAR_4, VAR_1, VAR_0);
 FUNC_3(VAR_4, FUNC_0(VAR_6),
      VAR_0);
}
