
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct iscsi_conn_params {scalar_t__ first_burst_length; scalar_t__ max_send_pdu_length; int immediate_data; int initial_r2t; } ;
struct TYPE_4__ {scalar_t__ exp_cont_len; void* exp_data_acked; } ;
struct TYPE_3__ {int flags2; } ;
struct e4_iscsi_task_context {TYPE_2__ ustorm_ag_context; TYPE_1__ ustorm_st_context; } ;
typedef enum iscsi_task_type { ____Placeholder_iscsi_task_type } iscsi_task_type ;


 scalar_t__ VAR_0 ;




 int FUNC_0 (int ,int ,int) ;
 int VAR_1 ;
 void* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static
void FUNC_3(struct e4_iscsi_task_context *VAR_2,
     struct iscsi_conn_params *VAR_3,
     enum iscsi_task_type VAR_4,
     u32 VAR_5,
     u32 VAR_6,
     u8 VAR_7)
{
 u32 VAR_8 = 0, VAR_9;

 if (VAR_7 &&
     (VAR_4 == 130 ||
      VAR_4 == 131))
  FUNC_0(VAR_2->ustorm_st_context.flags2,
     VAR_1, 1);

 switch (VAR_4) {
 case 130:
  if (!VAR_3->initial_r2t)
   VAR_8 = VAR_3->first_burst_length;
  else if (VAR_3->immediate_data)
   VAR_8 =
       FUNC_2(VAR_3->first_burst_length,
           VAR_3->max_send_pdu_length);

  VAR_2->ustorm_ag_context.exp_data_acked =
       FUNC_1(VAR_7 == 0 ?
      FUNC_2(VAR_6,
          VAR_8) :
      ((u32)(VAR_7 +
             VAR_0)));
  break;
 case 129:
  VAR_9 = FUNC_1(VAR_6);
  VAR_2->ustorm_ag_context.exp_data_acked = VAR_9;
  break;
 case 131:
  VAR_2->ustorm_ag_context.exp_data_acked =
     FUNC_1((VAR_7 == 0 ? 0 :
           VAR_7 +
           VAR_0));
  break;
 case 128:
  VAR_9 = FUNC_1(VAR_5);
  VAR_2->ustorm_ag_context.exp_cont_len = VAR_9;
  break;
 default:
  break;
 }
}
