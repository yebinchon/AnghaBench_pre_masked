
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ req_buf; scalar_t__ req_wr_ptr; scalar_t__ req_buf_size; } ;
struct qedi_conn {TYPE_1__ gen_pdu; } ;
struct qedi_cmd {int * scsi_cmd; struct qedi_conn* conn; } ;
struct iscsi_task {scalar_t__ data_count; int data; struct qedi_cmd* dd_data; } ;
struct iscsi_conn {struct qedi_conn* dd_data; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,scalar_t__) ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (struct iscsi_task*) ;

__attribute__((used)) static int FUNC_3(struct iscsi_conn *VAR_1, struct iscsi_task *VAR_2)
{
 struct qedi_conn *VAR_3 = VAR_1->dd_data;
 struct qedi_cmd *VAR_4 = VAR_2->dd_data;

 FUNC_1(VAR_3->gen_pdu.req_buf, 0, VAR_0);

 VAR_3->gen_pdu.req_buf_size = VAR_2->data_count;

 if (VAR_2->data_count) {
  FUNC_0(VAR_3->gen_pdu.req_buf, VAR_2->data,
         VAR_2->data_count);
  VAR_3->gen_pdu.req_wr_ptr =
   VAR_3->gen_pdu.req_buf + VAR_2->data_count;
 }

 VAR_4->conn = VAR_1->dd_data;
 VAR_4->scsi_cmd = ((void*)0);
 return FUNC_2(VAR_2);
}
