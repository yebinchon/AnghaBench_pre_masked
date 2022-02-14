
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ixgbevf_adapter {int state; struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbevf_adapter*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct ixgbevf_adapter*) ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static void FUNC_9(struct ixgbevf_adapter *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->netdev;

 if (!FUNC_7(VAR_1,
    &VAR_3->state))
  return;


 if (FUNC_8(VAR_0, &VAR_3->state) ||
     FUNC_8(VAR_2, &VAR_3->state))
  return;





 FUNC_5();

 if (FUNC_4(VAR_4))
  FUNC_1(VAR_4);

 FUNC_0(VAR_3);
 FUNC_2(VAR_3);

 if (FUNC_4(VAR_4))
  FUNC_3(VAR_4);

 FUNC_6();
}
