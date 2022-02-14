
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netxen_adapter {scalar_t__ portnum; int state; int tx_timeout_task; struct net_device* netdev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct netxen_adapter*) ;
 int FUNC_5 (struct netxen_adapter*) ;
 int FUNC_6 (struct netxen_adapter*) ;
 int FUNC_7 (struct netxen_adapter*,struct net_device*) ;
 int FUNC_8 (struct netxen_adapter*) ;

__attribute__((used)) static void FUNC_9(struct netxen_adapter *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->netdev;

 FUNC_2(VAR_2);

 FUNC_4(VAR_1);

 if (FUNC_3(VAR_2))
  FUNC_7(VAR_1, VAR_2);

 FUNC_0(&VAR_1->tx_timeout_task);

 FUNC_6(VAR_1);

 if (VAR_1->portnum == 0)
  FUNC_5(VAR_1);

 FUNC_8(VAR_1);

 FUNC_1(VAR_0, &VAR_1->state);
}
