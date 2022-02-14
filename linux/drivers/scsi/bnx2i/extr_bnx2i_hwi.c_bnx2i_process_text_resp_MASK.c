
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iscsi_text_rsp {void* max_cmdsn; void* exp_cmdsn; int statsn; void* ttt; int itt; int dlength; scalar_t__ hlength; int flags; int opcode; } ;
struct iscsi_task {TYPE_2__* hdr; } ;
struct iscsi_session {int back_lock; } ;
struct iscsi_hdr {int dummy; } ;
struct iscsi_conn {int dummy; } ;
struct cqe {int dummy; } ;
struct bnx2i_text_response {int itt; int data_length; int max_cmd_sn; int exp_cmd_sn; int ttt; int response_flags; int op_code; } ;
struct TYPE_6__ {scalar_t__* resp_buf; scalar_t__* resp_wr_ptr; int resp_hdr; } ;
struct bnx2i_conn {TYPE_3__ gen_pdu; TYPE_1__* cls_conn; } ;
struct TYPE_5__ {int exp_statsn; int itt; } ;
struct TYPE_4__ {struct iscsi_conn* dd_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct iscsi_conn*,struct iscsi_hdr*,scalar_t__*,scalar_t__*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 struct iscsi_task* FUNC_3 (struct iscsi_conn*,int) ;
 int FUNC_4 (struct iscsi_text_rsp*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct iscsi_session *VAR_1,
       struct bnx2i_conn *VAR_2,
       struct cqe *VAR_3)
{
 struct iscsi_conn *VAR_4 = VAR_2->cls_conn->dd_data;
 struct iscsi_task *VAR_5;
 struct bnx2i_text_response *VAR_6;
 struct iscsi_text_rsp *VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_6 = (struct bnx2i_text_response *) VAR_3;
 FUNC_5(&VAR_1->back_lock);
 VAR_5 = FUNC_3(VAR_4, VAR_6->itt & VAR_0);
 if (!VAR_5)
  goto done;

 VAR_7 = (struct iscsi_text_rsp *)&VAR_2->gen_pdu.resp_hdr;
 FUNC_4(VAR_7, 0, sizeof(struct iscsi_hdr));
 VAR_7->opcode = VAR_6->op_code;
 VAR_7->flags = VAR_6->response_flags;
 VAR_7->hlength = 0;

 FUNC_2(VAR_7->dlength, VAR_6->data_length);
 VAR_7->itt = VAR_5->hdr->itt;
 VAR_7->ttt = FUNC_1(VAR_6->ttt);
 VAR_7->statsn = VAR_5->hdr->exp_statsn;
 VAR_7->exp_cmdsn = FUNC_1(VAR_6->exp_cmd_sn);
 VAR_7->max_cmdsn = FUNC_1(VAR_6->max_cmd_sn);
 VAR_8 = VAR_6->data_length;
 VAR_2->gen_pdu.resp_wr_ptr = VAR_2->gen_pdu.resp_buf +
       VAR_8;
 VAR_9 = 0;
 if (VAR_8 & 0x3)
  VAR_9 = 4 - (VAR_8 % 4);

 if (VAR_9) {
  int VAR_10 = 0;
  for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
   VAR_2->gen_pdu.resp_wr_ptr[0] = 0;
   VAR_2->gen_pdu.resp_wr_ptr++;
  }
 }
 FUNC_0(VAR_4, (struct iscsi_hdr *)VAR_7,
        VAR_2->gen_pdu.resp_buf,
        VAR_2->gen_pdu.resp_wr_ptr -
        VAR_2->gen_pdu.resp_buf);
done:
 FUNC_6(&VAR_1->back_lock);
 return 0;
}
