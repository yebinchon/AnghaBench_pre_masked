
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ mtu; } ;
struct ibmvnic_adapter {TYPE_1__ desired; } ;


 scalar_t__ VAR_0 ;
 struct ibmvnic_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ibmvnic_adapter*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, int VAR_2)
{
 struct ibmvnic_adapter *VAR_3 = FUNC_0(VAR_1);

 VAR_3->desired.mtu = VAR_2 + VAR_0;

 return FUNC_1(VAR_3);
}
