
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sh_eth_private {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct sh_eth_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct sh_eth_private*,int) ;
 int FUNC_2 (struct sh_eth_private*,int) ;
 int FUNC_3 (struct sh_eth_private*,int,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1,
          int VAR_2)
{
 struct sh_eth_private *VAR_3 = FUNC_0(VAR_1);
 int VAR_4 = VAR_0 + VAR_2 / 8;
 u32 VAR_5;

 VAR_5 = FUNC_2(VAR_3, VAR_4);
 FUNC_3(VAR_3, VAR_5 | FUNC_1(VAR_3, VAR_2), VAR_4);
}
