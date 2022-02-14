
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mei_me_hw {scalar_t__ mem_addr; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_1(const struct mei_me_hw *VAR_0,
          unsigned long VAR_1)
{
 return FUNC_0(VAR_0->mem_addr + VAR_1);
}
