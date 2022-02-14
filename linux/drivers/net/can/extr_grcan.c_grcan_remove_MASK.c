
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct net_device {int irq; } ;
struct grcan_priv {int napi; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 struct grcan_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 struct net_device* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_4(VAR_0);
 struct grcan_priv *VAR_2 = FUNC_2(VAR_1);

 FUNC_5(VAR_1);

 FUNC_1(VAR_1->irq);
 FUNC_3(&VAR_2->napi);
 FUNC_0(VAR_1);

 return 0;
}
