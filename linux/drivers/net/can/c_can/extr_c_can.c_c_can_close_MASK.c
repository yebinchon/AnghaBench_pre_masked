
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int irq; } ;
struct c_can_priv {int napi; } ;


 int VAR_0 ;
 int FUNC_0 (struct c_can_priv*) ;
 int FUNC_1 (struct c_can_priv*,int) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,struct net_device*) ;
 int FUNC_6 (int *) ;
 struct c_can_priv* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_1)
{
 struct c_can_priv *VAR_2 = FUNC_7(VAR_1);

 FUNC_8(VAR_1);
 FUNC_6(&VAR_2->napi);
 FUNC_2(VAR_1);
 FUNC_5(VAR_1->irq, VAR_1);
 FUNC_4(VAR_1);

 FUNC_1(VAR_2, 0);
 FUNC_0(VAR_2);

 FUNC_3(VAR_1, VAR_0);

 return 0;
}
