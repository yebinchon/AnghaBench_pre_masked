
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ibmvnic_adapter {scalar_t__ state; int tasklet; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct net_device* FUNC_0 (struct device*) ;
 struct ibmvnic_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1)
{
 struct net_device *VAR_2 = FUNC_0(VAR_1);
 struct ibmvnic_adapter *VAR_3 = FUNC_1(VAR_2);

 if (VAR_3->state != VAR_0)
  return 0;

 FUNC_2(&VAR_3->tasklet);

 return 0;
}
