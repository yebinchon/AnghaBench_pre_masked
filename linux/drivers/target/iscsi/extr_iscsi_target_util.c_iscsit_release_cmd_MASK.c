
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_cmd {int dummy; } ;
struct iscsi_session {int se_sess; } ;
struct iscsi_cmd {int text_in_ptr; int iov_data; int overflow_buf; int tmr_req; int seq_list; int pdu_list; int buf_ptr; struct iscsi_session* sess; TYPE_1__* conn; int i_conn_node; struct se_cmd se_cmd; } ;
struct TYPE_2__ {struct iscsi_session* sess; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,struct se_cmd*) ;

void FUNC_5(struct iscsi_cmd *VAR_0)
{
 struct iscsi_session *VAR_1;
 struct se_cmd *VAR_2 = &VAR_0->se_cmd;

 FUNC_1(!FUNC_3(&VAR_0->i_conn_node));

 if (VAR_0->conn)
  VAR_1 = VAR_0->conn->sess;
 else
  VAR_1 = VAR_0->sess;

 FUNC_0(!VAR_1 || !VAR_1->se_sess);

 FUNC_2(VAR_0->buf_ptr);
 FUNC_2(VAR_0->pdu_list);
 FUNC_2(VAR_0->seq_list);
 FUNC_2(VAR_0->tmr_req);
 FUNC_2(VAR_0->overflow_buf);
 FUNC_2(VAR_0->iov_data);
 FUNC_2(VAR_0->text_in_ptr);

 FUNC_4(VAR_1->se_sess, VAR_2);
}
