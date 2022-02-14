
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct be_adapter {struct net_device* netdev; } ;


 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct be_adapter *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->netdev;

 FUNC_4();
 FUNC_2(VAR_1);
 if (FUNC_3(VAR_1))
  FUNC_1(VAR_1);
 FUNC_5();

 FUNC_0(VAR_0);
}
