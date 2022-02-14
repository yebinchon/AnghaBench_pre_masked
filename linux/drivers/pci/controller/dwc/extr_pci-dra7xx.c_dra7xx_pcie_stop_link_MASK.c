
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dw_pcie {int dummy; } ;
struct dra7xx_pcie {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dra7xx_pcie*,int ) ;
 int FUNC_1 (struct dra7xx_pcie*,int ,int ) ;
 struct dra7xx_pcie* FUNC_2 (struct dw_pcie*) ;

__attribute__((used)) static void FUNC_3(struct dw_pcie *VAR_2)
{
 struct dra7xx_pcie *VAR_3 = FUNC_2(VAR_2);
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_1);
 VAR_4 &= ~VAR_0;
 FUNC_1(VAR_3, VAR_1, VAR_4);
}
