
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct net_device {int dummy; } ;
struct ftmac100 {int napi; int res; int base; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 struct ftmac100* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 struct net_device* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct net_device *VAR_1;
 struct ftmac100 *VAR_2;

 VAR_1 = FUNC_4(VAR_0);
 VAR_2 = FUNC_2(VAR_1);

 FUNC_6(VAR_1);

 FUNC_1(VAR_2->base);
 FUNC_5(VAR_2->res);

 FUNC_3(&VAR_2->napi);
 FUNC_0(VAR_1);
 return 0;
}
