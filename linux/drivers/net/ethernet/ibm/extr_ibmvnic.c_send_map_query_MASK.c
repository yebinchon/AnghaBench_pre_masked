
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cmd; int first; } ;
union ibmvnic_crq {TYPE_1__ query_map; } ;
struct ibmvnic_adapter {int dummy; } ;
typedef int crq ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ibmvnic_adapter*,union ibmvnic_crq*) ;
 int FUNC_1 (union ibmvnic_crq*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ibmvnic_adapter *VAR_2)
{
 union ibmvnic_crq VAR_3;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.query_map.first = VAR_0;
 VAR_3.query_map.cmd = VAR_1;
 FUNC_0(VAR_2, &VAR_3);
}
