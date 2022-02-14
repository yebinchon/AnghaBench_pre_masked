
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xcan_priv {int dev; int napi; } ;
struct net_device {int irq; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,struct net_device*) ;
 int FUNC_3 (int *) ;
 struct xcan_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_1)
{
 struct xcan_priv *VAR_2 = FUNC_4(VAR_1);

 FUNC_5(VAR_1);
 FUNC_3(&VAR_2->napi);
 FUNC_7(VAR_1);
 FUNC_2(VAR_1->irq, VAR_1);
 FUNC_1(VAR_1);

 FUNC_0(VAR_1, VAR_0);
 FUNC_6(VAR_2->dev);

 return 0;
}
