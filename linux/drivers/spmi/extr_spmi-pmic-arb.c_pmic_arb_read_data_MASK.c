
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct spmi_pmic_arb {scalar_t__ rd_base; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int*,scalar_t__*,int) ;

__attribute__((used)) static void
FUNC_2(struct spmi_pmic_arb *VAR_0, u8 *VAR_1, u32 VAR_2, u8 VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_0->rd_base + VAR_2);

 FUNC_1(VAR_1, &VAR_4, (VAR_3 & 3) + 1);
}
