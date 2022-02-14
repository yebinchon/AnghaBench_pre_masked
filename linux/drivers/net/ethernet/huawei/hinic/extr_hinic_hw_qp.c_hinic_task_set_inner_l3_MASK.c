
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hinic_sq_task {int pkt_info1; int pkt_info0; } ;
typedef enum hinic_l3_offload_type { ____Placeholder_hinic_l3_offload_type } hinic_l3_offload_type ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_2(struct hinic_sq_task *VAR_2,
        enum hinic_l3_offload_type VAR_3,
        u32 VAR_4)
{
 VAR_2->pkt_info0 |= FUNC_0(VAR_3, VAR_1);
 VAR_2->pkt_info1 |= FUNC_1(VAR_4, VAR_0);
}
