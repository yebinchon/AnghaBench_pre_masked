
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct net_device {scalar_t__ base_addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,scalar_t__) ;
 struct net_device* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct net_device *VAR_2 = FUNC_2(VAR_1);

 FUNC_3(VAR_2);
 FUNC_1(0, VAR_2->base_addr + VAR_0);
 FUNC_0(VAR_2);
 return 0;
}
