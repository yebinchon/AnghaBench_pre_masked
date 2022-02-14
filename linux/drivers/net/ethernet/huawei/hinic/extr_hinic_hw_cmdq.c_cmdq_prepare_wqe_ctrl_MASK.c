
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct hinic_ctrl {int ctrl_info; } ;
struct TYPE_7__ {scalar_t__ status_info; } ;
struct hinic_cmdq_wqe_scmd {struct hinic_ctrl ctrl; TYPE_3__ status; } ;
struct TYPE_5__ {scalar_t__ status_info; } ;
struct hinic_cmdq_wqe_lcmd {struct hinic_ctrl ctrl; TYPE_1__ status; } ;
struct TYPE_6__ {struct hinic_cmdq_wqe_scmd wqe_scmd; } ;
struct hinic_cmdq_wqe {TYPE_2__ direct_wqe; struct hinic_cmdq_wqe_lcmd wqe_lcmd; } ;
typedef enum hinic_mod_type { ____Placeholder_hinic_mod_type } hinic_mod_type ;
typedef enum hinic_cmd_ack_type { ____Placeholder_hinic_cmd_ack_type } hinic_cmd_ack_type ;
typedef enum data_format { ____Placeholder_data_format } data_format ;
typedef enum ctrl_sect_len { ____Placeholder_ctrl_sect_len } ctrl_sect_len ;
typedef enum completion_format { ____Placeholder_completion_format } completion_format ;
typedef enum bufdesc_len { ____Placeholder_bufdesc_len } bufdesc_len ;
struct TYPE_8__ {int header_info; int saved_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_4__* FUNC_0 (struct hinic_cmdq_wqe*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int VAR_15 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static void FUNC_5(struct hinic_cmdq_wqe *VAR_19, int VAR_20,
      enum hinic_cmd_ack_type VAR_21,
      enum hinic_mod_type VAR_22, u8 VAR_23, u16 VAR_24,
      enum completion_format VAR_25,
      enum data_format VAR_26,
      enum bufdesc_len VAR_27)
{
 struct hinic_cmdq_wqe_lcmd *VAR_28;
 struct hinic_cmdq_wqe_scmd *VAR_29;
 enum ctrl_sect_len VAR_30;
 struct hinic_ctrl *VAR_31;
 u32 VAR_32;

 if (VAR_26 == VAR_14) {
  VAR_28 = &VAR_19->wqe_lcmd;

  VAR_28->status.status_info = 0;
  VAR_31 = &VAR_28->ctrl;
  VAR_30 = VAR_12;
 } else {
  VAR_29 = &VAR_19->direct_wqe.wqe_scmd;

  VAR_29->status.status_info = 0;
  VAR_31 = &VAR_29->ctrl;
  VAR_30 = VAR_10;
 }

 VAR_31->ctrl_info = FUNC_1(VAR_24, VAR_17) |
     FUNC_1(VAR_23, VAR_4) |
     FUNC_1(VAR_22, VAR_16) |
     FUNC_1(VAR_21, VAR_0);

 FUNC_0(VAR_19)->header_info =
  FUNC_2(VAR_27, VAR_2) |
  FUNC_2(VAR_25, VAR_6) |
  FUNC_2(VAR_26, VAR_13) |
  FUNC_2(VAR_3, VAR_8) |
  FUNC_2(VAR_7, VAR_9) |
  FUNC_2(VAR_30, VAR_11) |
  FUNC_2(VAR_20, VAR_18);

 VAR_32 = FUNC_0(VAR_19)->saved_data;
 VAR_32 = FUNC_3(VAR_32, VAR_1);

 if ((VAR_23 == VAR_5) && (VAR_22 == VAR_15))
  FUNC_0(VAR_19)->saved_data |=
      FUNC_4(1, VAR_1);
 else
  FUNC_0(VAR_19)->saved_data = VAR_32;
}
