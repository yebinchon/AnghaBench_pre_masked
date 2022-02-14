
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mwifiex_ds_11n_amsdu_aggr_ctrl {int enable; } ;
struct host_cmd_ds_amsdu_aggr_ctrl {int curr_buf_size; void* enable; void* action; } ;
struct TYPE_2__ {struct host_cmd_ds_amsdu_aggr_ctrl amsdu_aggr_ctrl; } ;
struct host_cmd_ds_command {void* size; void* command; TYPE_1__ params; } ;




 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;

int FUNC_1(struct host_cmd_ds_command *VAR_2,
    int VAR_3,
    struct mwifiex_ds_11n_amsdu_aggr_ctrl *VAR_4)
{
 struct host_cmd_ds_amsdu_aggr_ctrl *VAR_5 =
  &VAR_2->params.amsdu_aggr_ctrl;
 u16 VAR_6 = (u16) VAR_3;

 VAR_2->command = FUNC_0(VAR_0);
 VAR_2->size = FUNC_0(sizeof(struct host_cmd_ds_amsdu_aggr_ctrl)
    + VAR_1);
 VAR_5->action = FUNC_0(VAR_6);
 switch (VAR_6) {
 case 128:
  VAR_5->enable = FUNC_0(VAR_4->enable);
  VAR_5->curr_buf_size = 0;
  break;
 case 129:
 default:
  VAR_5->curr_buf_size = 0;
  break;
 }
 return 0;
}
