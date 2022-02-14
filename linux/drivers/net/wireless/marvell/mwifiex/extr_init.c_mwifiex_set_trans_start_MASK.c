
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int num_tx_queues; } ;
struct TYPE_2__ {int trans_start; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (struct net_device*) ;

void FUNC_2(struct net_device *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_tx_queues; VAR_2++)
  FUNC_0(VAR_1, VAR_2)->trans_start = VAR_0;

 FUNC_1(VAR_1);
}
