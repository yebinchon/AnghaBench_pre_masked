
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct sh_eth_private {scalar_t__ tsu_addr; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 struct sh_eth_private* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, u16 VAR_2,
      const u8 *VAR_3)
{
 struct sh_eth_private *VAR_4 = FUNC_1(VAR_1);
 u32 VAR_5;

 VAR_5 = VAR_3[0] << 24 | VAR_3[1] << 16 | VAR_3[2] << 8 | VAR_3[3];
 FUNC_0(VAR_5, VAR_4->tsu_addr + VAR_2);
 if (FUNC_2(VAR_1) < 0)
  return -VAR_0;

 VAR_5 = VAR_3[4] << 8 | VAR_3[5];
 FUNC_0(VAR_5, VAR_4->tsu_addr + VAR_2 + 4);
 if (FUNC_2(VAR_1) < 0)
  return -VAR_0;

 return 0;
}
