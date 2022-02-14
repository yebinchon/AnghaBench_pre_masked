
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct cdns_pcie {scalar_t__ reg_base; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct cdns_pcie *VAR_0, u8 VAR_1,
       u32 VAR_2, u16 VAR_3)
{
 FUNC_1(VAR_3, VAR_0->reg_base + FUNC_0(VAR_1) + VAR_2);
}
