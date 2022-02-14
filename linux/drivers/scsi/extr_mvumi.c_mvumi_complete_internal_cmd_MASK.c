
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvumi_sense_data {int dummy; } ;
struct mvumi_rsp_frame {scalar_t__ req_status; int rsp_flag; int payload; } ;
struct mvumi_hba {int int_cmd_wait_q; } ;
struct mvumi_cmd {scalar_t__ cmd_status; int sync_cmd; scalar_t__ data_buf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct mvumi_hba *VAR_2,
      struct mvumi_cmd *VAR_3,
     struct mvumi_rsp_frame *VAR_4)
{
 if (FUNC_1(&VAR_3->sync_cmd)) {
  VAR_3->cmd_status = VAR_4->req_status;

  if ((VAR_4->req_status == VAR_1) &&
    (VAR_4->rsp_flag & VAR_0) &&
    VAR_3->data_buf) {
   FUNC_2(VAR_3->data_buf, VAR_4->payload,
     sizeof(struct mvumi_sense_data));
  }
  FUNC_0(&VAR_3->sync_cmd);
  FUNC_3(&VAR_2->int_cmd_wait_q);
 }
}
