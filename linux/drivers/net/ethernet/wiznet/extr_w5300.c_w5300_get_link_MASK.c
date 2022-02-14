
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct w5300_priv {int link_gpio; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 struct w5300_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_3(struct net_device *VAR_0)
{
 struct w5300_priv *VAR_1 = FUNC_2(VAR_0);

 if (FUNC_1(VAR_1->link_gpio))
  return !!FUNC_0(VAR_1->link_gpio);

 return 1;
}
