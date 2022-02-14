
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct cdns_pcie {scalar_t__ reg_base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct cdns_pcie *VAR_1,
           u32 VAR_2, u16 VAR_3)
{
 FUNC_0(VAR_3, VAR_1->reg_base + VAR_0 + VAR_2);
}
