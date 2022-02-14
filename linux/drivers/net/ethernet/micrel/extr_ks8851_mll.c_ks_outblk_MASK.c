
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ks_net {int hw_addr; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct ks_net *VAR_0, u16 *VAR_1, u32 VAR_2)
{
 VAR_2 >>= 1;
 while (VAR_2--)
  FUNC_0(*VAR_1++, VAR_0->hw_addr);
}
