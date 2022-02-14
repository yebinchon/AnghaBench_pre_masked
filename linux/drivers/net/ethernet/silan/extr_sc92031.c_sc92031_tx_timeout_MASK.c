
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc92031_priv {int lock; int tx_timeouts; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 struct sc92031_priv* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_0)
{
 struct sc92031_priv *VAR_1 = FUNC_1(VAR_0);


 FUNC_4(VAR_0);

 FUNC_6(&VAR_1->lock);

 VAR_1->tx_timeouts++;

 FUNC_0(VAR_0);

 FUNC_7(&VAR_1->lock);


 FUNC_5(VAR_0);

 if (FUNC_2(VAR_0))
  FUNC_3(VAR_0);
}
