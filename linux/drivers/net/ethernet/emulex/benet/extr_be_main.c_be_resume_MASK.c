
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct be_adapter {struct net_device* netdev; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct be_adapter*) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct be_adapter *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->netdev;
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2)
  return VAR_2;

 FUNC_4();
 if (FUNC_3(VAR_1))
  VAR_2 = FUNC_0(VAR_1);
 FUNC_5();

 if (VAR_2)
  return VAR_2;

 FUNC_2(VAR_1);

 return 0;
}
