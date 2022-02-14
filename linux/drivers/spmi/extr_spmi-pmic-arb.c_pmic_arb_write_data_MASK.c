
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct spmi_pmic_arb {scalar_t__ wr_base; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__*,int const*,int) ;

__attribute__((used)) static void FUNC_2(struct spmi_pmic_arb *VAR_0, const u8 *VAR_1,
    u32 VAR_2, u8 VAR_3)
{
 u32 VAR_4 = 0;

 FUNC_1(&VAR_4, VAR_1, (VAR_3 & 3) + 1);
 FUNC_0(VAR_4, VAR_0->wr_base + VAR_2);
}
