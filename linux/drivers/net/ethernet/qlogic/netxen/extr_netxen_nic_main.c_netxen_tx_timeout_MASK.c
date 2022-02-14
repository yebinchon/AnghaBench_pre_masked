
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netxen_adapter {int tx_timeout_task; int state; } ;
struct net_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 struct netxen_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1)
{
 struct netxen_adapter *VAR_2 = FUNC_1(VAR_1);

 if (FUNC_3(VAR_0, &VAR_2->state))
  return;

 FUNC_0(&VAR_1->dev, "transmit timeout, resetting.\n");
 FUNC_2(&VAR_2->tx_timeout_task);
}
