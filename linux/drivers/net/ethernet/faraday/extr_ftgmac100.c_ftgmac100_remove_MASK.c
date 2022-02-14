
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct net_device {int dummy; } ;
struct ftgmac100 {int napi; int res; int base; int reset_task; int clk; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 struct ftgmac100* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;
 struct net_device* FUNC_7 (struct platform_device*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_0)
{
 struct net_device *VAR_1;
 struct ftgmac100 *VAR_2;

 VAR_1 = FUNC_7(VAR_0);
 VAR_2 = FUNC_5(VAR_1);

 FUNC_9(VAR_1);

 FUNC_1(VAR_2->clk);




 FUNC_0(&VAR_2->reset_task);

 FUNC_3(VAR_1);

 FUNC_4(VAR_2->base);
 FUNC_8(VAR_2->res);

 FUNC_6(&VAR_2->napi);
 FUNC_2(VAR_1);
 return 0;
}
