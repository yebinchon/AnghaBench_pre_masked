
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct nb8800_priv {int tx_lock; } ;


 int FUNC_0 (struct net_device*) ;
 struct nb8800_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 struct nb8800_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(&VAR_1->tx_lock);
 FUNC_0(VAR_0);
 FUNC_3(&VAR_1->tx_lock);
}
