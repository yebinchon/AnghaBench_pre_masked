
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dw_pcie {int dummy; } ;
struct artpec6_pcie {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct artpec6_pcie*,int ) ;
 int FUNC_1 (struct artpec6_pcie*,int ,int ) ;
 struct artpec6_pcie* FUNC_2 (struct dw_pcie*) ;

__attribute__((used)) static int FUNC_3(struct dw_pcie *VAR_2)
{
 struct artpec6_pcie *VAR_3 = FUNC_2(VAR_2);
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_0);
 VAR_4 |= VAR_1;
 FUNC_1(VAR_3, VAR_0, VAR_4);

 return 0;
}
