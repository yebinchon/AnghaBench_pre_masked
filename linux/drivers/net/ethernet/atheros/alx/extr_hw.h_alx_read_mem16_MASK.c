
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct alx_hw {scalar_t__ hw_addr; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u16 FUNC_1(struct alx_hw *VAR_0, u32 VAR_1)
{
 return FUNC_0(VAR_0->hw_addr + VAR_1);
}
