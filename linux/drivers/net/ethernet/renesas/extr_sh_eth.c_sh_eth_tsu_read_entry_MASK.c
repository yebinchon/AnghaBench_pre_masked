
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct sh_eth_private {scalar_t__ tsu_addr; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 struct sh_eth_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0, u16 VAR_1, u8 *VAR_2)
{
 struct sh_eth_private *VAR_3 = FUNC_1(VAR_0);
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_3->tsu_addr + VAR_1);
 VAR_2[0] = (VAR_4 >> 24) & 0xff;
 VAR_2[1] = (VAR_4 >> 16) & 0xff;
 VAR_2[2] = (VAR_4 >> 8) & 0xff;
 VAR_2[3] = VAR_4 & 0xff;
 VAR_4 = FUNC_0(VAR_3->tsu_addr + VAR_1 + 4);
 VAR_2[4] = (VAR_4 >> 8) & 0xff;
 VAR_2[5] = VAR_4 & 0xff;
}
