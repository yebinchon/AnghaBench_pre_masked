
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int map_id; int cmd; int first; } ;
union ibmvnic_crq {TYPE_1__ request_unmap; } ;
typedef int u8 ;
struct ibmvnic_adapter {int dummy; } ;
typedef int crq ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ibmvnic_adapter*,union ibmvnic_crq*) ;
 int FUNC_1 (union ibmvnic_crq*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct ibmvnic_adapter *VAR_2, u8 VAR_3)
{
 union ibmvnic_crq VAR_4;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.request_unmap.first = VAR_0;
 VAR_4.request_unmap.cmd = VAR_1;
 VAR_4.request_unmap.map_id = VAR_3;
 return FUNC_0(VAR_2, &VAR_4);
}
