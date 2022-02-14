
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rhine_private {int base; } ;
struct platform_device {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 struct rhine_private* FUNC_2 (struct net_device*) ;
 struct net_device* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_3(VAR_0);
 struct rhine_private *VAR_2 = FUNC_2(VAR_1);

 FUNC_4(VAR_1);

 FUNC_1(VAR_2->base);

 FUNC_0(VAR_1);

 return 0;
}
