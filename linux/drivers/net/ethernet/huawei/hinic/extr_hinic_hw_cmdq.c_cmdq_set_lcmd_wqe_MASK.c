
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int direct_resp; } ;
struct hinic_cmdq_wqe_lcmd {TYPE_1__ completion; } ;
struct hinic_cmdq_wqe {struct hinic_cmdq_wqe_lcmd wqe_lcmd; } ;
struct hinic_cmdq_buf {int dummy; } ;
typedef enum hinic_mod_type { ____Placeholder_hinic_mod_type } hinic_mod_type ;
typedef enum hinic_cmd_ack_type { ____Placeholder_hinic_cmd_ack_type } hinic_cmd_ack_type ;
typedef enum completion_format { ____Placeholder_completion_format } completion_format ;
typedef enum cmdq_cmd_type { ____Placeholder_cmdq_cmd_type } cmdq_cmd_type ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hinic_cmdq_wqe*,int,int,int,int ,int ,int,int ,int ) ;
 int FUNC_1 (struct hinic_cmdq_wqe_lcmd*,struct hinic_cmdq_buf*) ;
 int FUNC_2 (TYPE_1__*,struct hinic_cmdq_buf*) ;

__attribute__((used)) static void FUNC_3(struct hinic_cmdq_wqe *VAR_4,
         enum cmdq_cmd_type VAR_5,
         struct hinic_cmdq_buf *VAR_6,
         struct hinic_cmdq_buf *VAR_7, int VAR_8,
         enum hinic_cmd_ack_type VAR_9,
         enum hinic_mod_type VAR_10, u8 VAR_11, u16 VAR_12)
{
 struct hinic_cmdq_wqe_lcmd *VAR_13 = &VAR_4->wqe_lcmd;
 enum completion_format VAR_14;

 switch (VAR_5) {
 case 128:
  VAR_14 = VAR_2;
  FUNC_2(&VAR_13->completion, VAR_7);
  break;
 case 129:
  VAR_14 = VAR_1;
  VAR_13->completion.direct_resp = 0;
  break;
 }

 FUNC_0(VAR_4, VAR_8, VAR_9, VAR_10, VAR_11,
         VAR_12, VAR_14, VAR_3,
         VAR_0);

 FUNC_1(VAR_13, VAR_6);
}
