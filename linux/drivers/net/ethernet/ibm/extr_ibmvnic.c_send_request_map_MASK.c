
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* len; void* ioba; int map_id; int cmd; int first; } ;
union ibmvnic_crq {TYPE_1__ request_map; } ;
typedef int u8 ;
typedef int u32 ;
struct ibmvnic_adapter {int dummy; } ;
typedef int dma_addr_t ;
typedef int crq ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct ibmvnic_adapter*,union ibmvnic_crq*) ;
 int FUNC_2 (union ibmvnic_crq*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ibmvnic_adapter *VAR_2, dma_addr_t VAR_3,
       u32 VAR_4, u8 VAR_5)
{
 union ibmvnic_crq VAR_6;

 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.request_map.first = VAR_0;
 VAR_6.request_map.cmd = VAR_1;
 VAR_6.request_map.map_id = VAR_5;
 VAR_6.request_map.ioba = FUNC_0(VAR_3);
 VAR_6.request_map.len = FUNC_0(VAR_4);
 return FUNC_1(VAR_2, &VAR_6);
}
