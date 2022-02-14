
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa168_eth_private {int tx_timeout_task; int tx_desc_count; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,char*,int ) ;
 struct pxa168_eth_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 struct pxa168_eth_private *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_0, "TX timeout  desc_count %d\n", VAR_1->tx_desc_count);

 FUNC_2(&VAR_1->tx_timeout_task);
}
