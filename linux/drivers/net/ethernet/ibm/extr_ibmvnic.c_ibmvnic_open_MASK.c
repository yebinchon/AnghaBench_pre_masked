
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ibmvnic_adapter {scalar_t__ state; scalar_t__ failover_pending; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct ibmvnic_adapter*) ;
 int FUNC_3 (struct net_device*,char*) ;
 struct ibmvnic_adapter* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct ibmvnic_adapter*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2)
{
 struct ibmvnic_adapter *VAR_3 = FUNC_4(VAR_2);
 int VAR_4;




 if (VAR_3->failover_pending) {
  VAR_3->state = VAR_1;
  return 0;
 }

 if (VAR_3->state != VAR_0) {
  VAR_4 = FUNC_1(VAR_2);
  if (VAR_4)
   return VAR_4;

  VAR_4 = FUNC_2(VAR_3);
  if (VAR_4) {
   FUNC_3(VAR_2, "failed to initialize resources\n");
   FUNC_5(VAR_3);
   return VAR_4;
  }
 }

 VAR_4 = FUNC_0(VAR_2);

 return VAR_4;
}
