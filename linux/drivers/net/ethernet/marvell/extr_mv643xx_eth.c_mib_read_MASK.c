
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mv643xx_eth_private {int port_num; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct mv643xx_eth_private*,scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_2(struct mv643xx_eth_private *VAR_0, int VAR_1)
{
 return FUNC_1(VAR_0, FUNC_0(VAR_0->port_num) + VAR_1);
}
