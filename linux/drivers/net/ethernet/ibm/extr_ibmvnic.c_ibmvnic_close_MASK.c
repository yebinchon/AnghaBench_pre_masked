
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ibmvnic_adapter {int state; scalar_t__ failover_pending; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 struct ibmvnic_adapter* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1)
{
 struct ibmvnic_adapter *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;




 if (VAR_2->failover_pending) {
  VAR_2->state = VAR_0;
  return 0;
 }

 VAR_3 = FUNC_0(VAR_1);
 FUNC_1(VAR_1);

 return VAR_3;
}
