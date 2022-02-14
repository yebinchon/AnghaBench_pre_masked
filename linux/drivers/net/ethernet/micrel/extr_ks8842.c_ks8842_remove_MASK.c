
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device {int dummy; } ;
struct net_device {int dummy; } ;
struct ks8842_adapter {int hw_addr; int tasklet; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 struct ks8842_adapter* FUNC_2 (struct net_device*) ;
 struct net_device* FUNC_3 (struct platform_device*) ;
 struct resource* FUNC_4 (struct platform_device*,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct resource*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_1)
{
 struct net_device *VAR_2 = FUNC_3(VAR_1);
 struct ks8842_adapter *VAR_3 = FUNC_2(VAR_2);
 struct resource *VAR_4 = FUNC_4(VAR_1, VAR_0, 0);

 FUNC_8(VAR_2);
 FUNC_7(&VAR_3->tasklet);
 FUNC_1(VAR_3->hw_addr);
 FUNC_0(VAR_2);
 FUNC_5(VAR_4->start, FUNC_6(VAR_4));
 return 0;
}
