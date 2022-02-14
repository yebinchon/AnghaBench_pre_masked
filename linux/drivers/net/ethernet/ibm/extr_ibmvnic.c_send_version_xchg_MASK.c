
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int version; int cmd; int first; } ;
union ibmvnic_crq {TYPE_1__ version_exchange; } ;
struct ibmvnic_adapter {int dummy; } ;
typedef int crq ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ibmvnic_adapter*,union ibmvnic_crq*) ;
 int VAR_2 ;
 int FUNC_2 (union ibmvnic_crq*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ibmvnic_adapter *VAR_3)
{
 union ibmvnic_crq VAR_4;

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.version_exchange.first = VAR_0;
 VAR_4.version_exchange.cmd = VAR_1;
 VAR_4.version_exchange.version = FUNC_0(VAR_2);

 return FUNC_1(VAR_3, &VAR_4);
}
