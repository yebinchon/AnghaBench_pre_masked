
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct c_can_priv {int napi; } ;


 int FUNC_0 (struct net_device*) ;
 struct c_can_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct net_device *VAR_0)
{
 struct c_can_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(&VAR_1->napi);
 FUNC_0(VAR_0);
}
