
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int irq; } ;
struct at91_priv {int clk; int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,struct net_device*) ;
 int FUNC_5 (int *) ;
 struct at91_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_2)
{
 struct at91_priv *VAR_3 = FUNC_6(VAR_2);

 FUNC_7(VAR_2);
 FUNC_5(&VAR_3->napi);
 FUNC_0(VAR_2, VAR_1);

 FUNC_4(VAR_2->irq, VAR_2);
 FUNC_2(VAR_3->clk);

 FUNC_3(VAR_2);

 FUNC_1(VAR_2, VAR_0);

 return 0;
}
