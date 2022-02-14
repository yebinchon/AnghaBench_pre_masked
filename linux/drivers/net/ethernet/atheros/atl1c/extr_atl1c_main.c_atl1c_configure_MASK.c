
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct atl1c_adapter {struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct atl1c_adapter*) ;
 scalar_t__ FUNC_1 (struct atl1c_adapter*) ;
 int FUNC_2 (struct atl1c_adapter*) ;
 int FUNC_3 (struct atl1c_adapter*) ;
 int FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct atl1c_adapter *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->netdev;
 int VAR_4;

 FUNC_2(VAR_2);
 FUNC_4(VAR_3);
 FUNC_3(VAR_2);

 VAR_4 = FUNC_0(VAR_2);
 if (FUNC_5(VAR_4 == 0))
  return -VAR_1;

 if (FUNC_1(VAR_2))
  return -VAR_0;

 return 0;
}
