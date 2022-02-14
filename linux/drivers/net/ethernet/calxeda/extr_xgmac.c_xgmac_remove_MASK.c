
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgmac_priv {int base; int napi; int pmt_irq; } ;
struct resource {int start; } ;
struct platform_device {int dummy; } ;
struct net_device {int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 struct xgmac_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 struct net_device* FUNC_5 (struct platform_device*) ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct resource*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_1)
{
 struct net_device *VAR_2 = FUNC_5(VAR_1);
 struct xgmac_priv *VAR_3 = FUNC_3(VAR_2);
 struct resource *VAR_4;

 FUNC_10(VAR_3->base);


 FUNC_0(VAR_2->irq, VAR_2);
 FUNC_0(VAR_3->pmt_irq, VAR_2);

 FUNC_9(VAR_2);
 FUNC_4(&VAR_3->napi);

 FUNC_2(VAR_3->base);
 VAR_4 = FUNC_6(VAR_1, VAR_0, 0);
 FUNC_7(VAR_4->start, FUNC_8(VAR_4));

 FUNC_1(VAR_2);

 return 0;
}
