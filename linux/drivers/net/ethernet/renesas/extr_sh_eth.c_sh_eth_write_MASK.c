
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct sh_eth_private {scalar_t__* reg_offset; scalar_t__ addr; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__) ;
 struct sh_eth_private* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1, u32 VAR_2, int VAR_3)
{
 struct sh_eth_private *VAR_4 = FUNC_2(VAR_1);
 u16 VAR_5 = VAR_4->reg_offset[VAR_3];

 if (FUNC_0(VAR_5 == VAR_0))
  return;

 FUNC_1(VAR_2, VAR_4->addr + VAR_5);
}
