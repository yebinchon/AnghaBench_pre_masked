
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ibmvnic_adapter {int resetting; } ;


 int FUNC_0 (struct ibmvnic_adapter*) ;
 int FUNC_1 (struct ibmvnic_adapter*) ;
 int FUNC_2 (struct ibmvnic_adapter*) ;
 int FUNC_3 (struct ibmvnic_adapter*) ;
 struct ibmvnic_adapter* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_0)
{
 struct ibmvnic_adapter *VAR_1 = FUNC_4(VAR_0);


 if (FUNC_7(0, &VAR_1->resetting))
  FUNC_5(VAR_0);
 else
  FUNC_6(VAR_0);

 FUNC_3(VAR_1);
 FUNC_2(VAR_1);

 FUNC_0(VAR_1);
 FUNC_1(VAR_1);
}
