
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef void* u32 ;
struct TYPE_2__ {int reg1_map; } ;
struct ustorm_iscsi_task_st_ctx {TYPE_1__ reg1; void* exp_data_transfer_len; void* rem_rcv_len; } ;
struct e4_ustorm_iscsi_task_ag_ctx {int flags2; void* exp_data_acked; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 void* FUNC_1 (void*) ;

__attribute__((used)) static
void FUNC_2(struct ustorm_iscsi_task_st_ctx *VAR_2,
   struct e4_ustorm_iscsi_task_ag_ctx *VAR_3,
   u32 VAR_4, u32 VAR_5,
   u8 VAR_6, bool VAR_7)
{
 u32 VAR_8;

 VAR_2->rem_rcv_len = FUNC_1(VAR_4);
 VAR_3->exp_data_acked = FUNC_1(VAR_5);
 VAR_8 = FUNC_1(VAR_5);
 VAR_2->exp_data_transfer_len = VAR_8;
 FUNC_0(VAR_2->reg1.reg1_map, VAR_1, VAR_6);
 FUNC_0(VAR_3->flags2,
    VAR_0,
    VAR_7 ? 1 : 0);
}
