
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cmd; int first; } ;
union ibmvnic_crq {TYPE_1__ generic; } ;
struct ibmvnic_adapter {int netdev; } ;
typedef int crq ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ibmvnic_adapter*,union ibmvnic_crq*) ;
 int FUNC_1 (union ibmvnic_crq*,int ,int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct ibmvnic_adapter *VAR_2)
{
 union ibmvnic_crq VAR_3;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.generic.first = VAR_1;
 VAR_3.generic.cmd = VAR_0;
 FUNC_2(VAR_2->netdev, "Sending CRQ init\n");

 return FUNC_0(VAR_2, &VAR_3);
}
