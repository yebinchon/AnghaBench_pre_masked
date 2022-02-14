
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
typedef scalar_t__ u16 ;
struct sh_eth_private {scalar_t__* reg_offset; scalar_t__ addr; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned int FUNC_1 (scalar_t__) ;
 struct sh_eth_private* FUNC_2 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_3(struct net_device *VAR_1, int VAR_2)
{
 struct sh_eth_private *VAR_3 = FUNC_2(VAR_1);
 u16 VAR_4 = VAR_3->reg_offset[VAR_2];

 if (FUNC_0(VAR_4 == VAR_0))
  return ~0U;

 return FUNC_1(VAR_3->addr + VAR_4);
}
