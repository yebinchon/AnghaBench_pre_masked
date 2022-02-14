
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sh_eth_private {int port; } ;



__attribute__((used)) static u32 FUNC_0(struct sh_eth_private *VAR_0, int VAR_1)
{
 return (0x08 >> (VAR_0->port << 1)) << (28 - ((VAR_1 % 8) * 4));
}
