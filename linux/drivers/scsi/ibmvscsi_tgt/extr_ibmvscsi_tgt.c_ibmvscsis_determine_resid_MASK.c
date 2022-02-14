
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct srp_rsp {void* data_in_res_cnt; int flags; void* data_out_res_cnt; } ;
struct se_cmd {int se_cmd_flags; scalar_t__ data_direction; int residual_count; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct se_cmd *VAR_8,
          struct srp_rsp *VAR_9)
{
 u32 VAR_10 = VAR_8->residual_count;

 if (!VAR_10)
  return;

 if (VAR_8->se_cmd_flags & VAR_3) {
  if (VAR_8->data_direction == VAR_1) {

   VAR_9->flags = VAR_7;
   VAR_9->data_out_res_cnt = FUNC_0(VAR_10);
  } else if (VAR_8->data_direction == VAR_0) {

   VAR_9->flags = VAR_5;
   VAR_9->data_in_res_cnt = FUNC_0(VAR_10);
  }
 } else if (VAR_8->se_cmd_flags & VAR_2) {
  if (VAR_8->data_direction == VAR_1) {

   VAR_9->flags = VAR_6;
   VAR_9->data_out_res_cnt = FUNC_0(VAR_10);
  } else if (VAR_8->data_direction == VAR_0) {

   VAR_9->flags = VAR_4;
   VAR_9->data_in_res_cnt = FUNC_0(VAR_10);
  }
 }
}
