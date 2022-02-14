
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int irq; } ;
struct ifi_canfd_priv {int napi; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 struct ifi_canfd_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_1)
{
 struct ifi_canfd_priv *VAR_2 = FUNC_5(VAR_1);

 FUNC_6(VAR_1);
 FUNC_4(&VAR_2->napi);

 FUNC_3(VAR_1);

 FUNC_2(VAR_1->irq, VAR_1);

 FUNC_1(VAR_1);

 FUNC_0(VAR_1, VAR_0);

 return 0;
}
