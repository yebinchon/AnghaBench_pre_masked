
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_task {int data_count; int data; struct bnx2i_cmd* dd_data; } ;
struct iscsi_conn {struct bnx2i_conn* dd_data; } ;
struct bnx2i_hba {int dummy; } ;
struct TYPE_2__ {int req_buf; int req_buf_size; int req_wr_ptr; } ;
struct bnx2i_conn {TYPE_1__ gen_pdu; struct bnx2i_hba* hba; } ;
struct bnx2i_cmd {int * scsi_cmd; struct bnx2i_conn* conn; } ;


 int FUNC_0 (struct bnx2i_hba*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (struct iscsi_task*) ;
 int FUNC_2 (struct bnx2i_cmd*) ;
 int FUNC_3 (int,int ,int) ;
 int FUNC_4 (int,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_5(struct iscsi_conn *VAR_3, struct iscsi_task *VAR_4)
{
 struct bnx2i_conn *VAR_5 = VAR_3->dd_data;
 struct bnx2i_hba *VAR_6 = VAR_5->hba;
 struct bnx2i_cmd *VAR_7 = VAR_4->dd_data;

 FUNC_4(VAR_5->gen_pdu.req_buf, 0, VAR_0);

 FUNC_2(VAR_7);
 VAR_5->gen_pdu.req_buf_size = VAR_4->data_count;


 FUNC_0(VAR_6, VAR_2, 1);
 FUNC_0(VAR_6, VAR_1, VAR_4->data_count);

 if (VAR_4->data_count) {
  FUNC_3(VAR_5->gen_pdu.req_buf, VAR_4->data,
         VAR_4->data_count);
  VAR_5->gen_pdu.req_wr_ptr =
   VAR_5->gen_pdu.req_buf + VAR_4->data_count;
 }
 VAR_7->conn = VAR_3->dd_data;
 VAR_7->scsi_cmd = ((void*)0);
 return FUNC_1(VAR_4);
}
