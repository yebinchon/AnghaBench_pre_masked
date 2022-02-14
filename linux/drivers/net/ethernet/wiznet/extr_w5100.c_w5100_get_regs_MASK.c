
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w5100_priv {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_regs {int version; } ;


 int FUNC_0 (struct w5100_priv*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct w5100_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct w5100_priv*,int ,void*,int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_3,
      struct ethtool_regs *VAR_4, void *VAR_5)
{
 struct w5100_priv *VAR_6 = FUNC_1(VAR_3);

 VAR_4->version = 1;
 FUNC_2(VAR_6, VAR_0, VAR_5, VAR_1);
 VAR_5 += VAR_1;
 FUNC_2(VAR_6, FUNC_0(VAR_6), VAR_5, VAR_2);
}
