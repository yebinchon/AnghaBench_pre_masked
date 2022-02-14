
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct enetc_hw {scalar_t__ reg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct enetc_hw *VAR_2, u8 *VAR_3)
{
 *(u32 *)VAR_3 = FUNC_0(VAR_2->reg + VAR_0);
 *(u16 *)(VAR_3 + 4) = FUNC_1(VAR_2->reg + VAR_1);
}
