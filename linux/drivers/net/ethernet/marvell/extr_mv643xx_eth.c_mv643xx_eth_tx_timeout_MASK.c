
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mv643xx_eth_private {int tx_timeout_task; } ;


 int FUNC_0 (struct net_device*,char*) ;
 struct mv643xx_eth_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 struct mv643xx_eth_private *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_0, "tx timeout\n");

 FUNC_2(&VAR_1->tx_timeout_task);
}
