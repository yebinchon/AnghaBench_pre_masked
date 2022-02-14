
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
typedef scalar_t__ u16 ;
struct sh_eth_private {scalar_t__ tsu_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct sh_eth_private*,int) ;

__attribute__((used)) static u32 FUNC_3(struct sh_eth_private *VAR_1, int VAR_2)
{
 u16 VAR_3 = FUNC_2(VAR_1, VAR_2);

 if (FUNC_0(VAR_3 == VAR_0))
  return ~0U;

 return FUNC_1(VAR_1->tsu_addr + VAR_3);
}
