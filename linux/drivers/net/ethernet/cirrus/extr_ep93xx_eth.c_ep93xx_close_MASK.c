
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ep93xx_priv {int irq; int napi; } ;


 int VAR_0 ;
 int FUNC_0 (struct ep93xx_priv*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,struct net_device*) ;
 int FUNC_3 (int *) ;
 struct ep93xx_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct ep93xx_priv*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_1)
{
 struct ep93xx_priv *VAR_2 = FUNC_4(VAR_1);

 FUNC_3(&VAR_2->napi);
 FUNC_5(VAR_1);

 FUNC_6(VAR_2, VAR_0, 0);
 FUNC_2(VAR_2->irq, VAR_1);
 FUNC_1(VAR_1);
 FUNC_0(VAR_2);

 return 0;
}
