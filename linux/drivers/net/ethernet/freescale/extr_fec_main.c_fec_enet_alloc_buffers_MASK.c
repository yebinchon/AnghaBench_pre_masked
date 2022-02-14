
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct fec_enet_private {unsigned int num_rx_queues; unsigned int num_tx_queues; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct net_device*,unsigned int) ;
 scalar_t__ FUNC_1 (struct net_device*,unsigned int) ;
 struct fec_enet_private* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1)
{
 struct fec_enet_private *VAR_2 = FUNC_2(VAR_1);
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_rx_queues; VAR_3++)
  if (FUNC_0(VAR_1, VAR_3))
   return -VAR_0;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_tx_queues; VAR_3++)
  if (FUNC_1(VAR_1, VAR_3))
   return -VAR_0;
 return 0;
}
