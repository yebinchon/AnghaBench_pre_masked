
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc92031_priv {int lock; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 struct sc92031_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_0)
{
 struct sc92031_priv *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(&VAR_1->lock);

 FUNC_0(VAR_0);
 FUNC_1(VAR_0);

 FUNC_4(&VAR_1->lock);
}
