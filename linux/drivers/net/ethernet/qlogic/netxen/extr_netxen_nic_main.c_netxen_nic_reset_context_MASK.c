
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netxen_adapter {scalar_t__ is_up; int state; struct net_device* netdev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct netxen_adapter*,struct net_device*) ;
 int FUNC_1 (struct netxen_adapter*,struct net_device*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct netxen_adapter*) ;
 int FUNC_7 (struct netxen_adapter*) ;
 scalar_t__ FUNC_8 (int ,int *) ;

int
FUNC_9(struct netxen_adapter *VAR_3)
{
 int VAR_4 = 0;
 struct net_device *VAR_5 = VAR_3->netdev;

 if (FUNC_8(VAR_2, &VAR_3->state))
  return -VAR_0;

 if (VAR_3->is_up == VAR_1) {

  FUNC_4(VAR_5);

  if (FUNC_5(VAR_5))
   FUNC_0(VAR_3, VAR_5);

  FUNC_7(VAR_3);

  if (FUNC_5(VAR_5)) {
   VAR_4 = FUNC_6(VAR_3);
   if (!VAR_4)
    VAR_4 = FUNC_1(VAR_3, VAR_5);

   if (VAR_4)
    goto done;
  }

  FUNC_3(VAR_5);
 }

done:
 FUNC_2(VAR_2, &VAR_3->state);
 return VAR_4;
}
