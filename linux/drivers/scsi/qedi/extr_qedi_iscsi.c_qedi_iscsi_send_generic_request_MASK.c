
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int req_buf_size; char* req_buf; } ;
struct qedi_conn {TYPE_2__* cls_conn; TYPE_1__ gen_pdu; } ;
struct qedi_cmd {struct qedi_conn* conn; } ;
struct iscsi_task {TYPE_3__* hdr; struct qedi_cmd* dd_data; } ;
struct TYPE_6__ {int opcode; } ;
struct TYPE_5__ {int dd_data; } ;


 int VAR_0 ;





 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,int) ;
 int FUNC_1 (struct qedi_conn*,struct iscsi_task*) ;
 int FUNC_2 (struct qedi_conn*) ;
 int FUNC_3 (struct qedi_conn*,struct iscsi_task*) ;
 int FUNC_4 (struct qedi_conn*,struct iscsi_task*) ;
 int FUNC_5 (struct qedi_conn*,struct iscsi_task*,char*,int,int) ;
 int FUNC_6 (struct qedi_conn*,struct iscsi_task*) ;

__attribute__((used)) static int FUNC_7(struct iscsi_task *VAR_2)
{
 struct qedi_cmd *VAR_3 = VAR_2->dd_data;
 struct qedi_conn *VAR_4 = VAR_3->conn;
 char *VAR_5;
 int VAR_6;
 int VAR_7 = 0;

 FUNC_2(VAR_4);
 switch (VAR_2->hdr->opcode & VAR_0) {
 case 132:
  FUNC_3(VAR_4, VAR_2);
  break;
 case 130:
  VAR_6 = VAR_4->gen_pdu.req_buf_size;
  VAR_5 = VAR_4->gen_pdu.req_buf;
  if (VAR_6)
   VAR_7 = FUNC_5(VAR_4, VAR_2,
          VAR_5, VAR_6, 1);
  else
   VAR_7 = FUNC_5(VAR_4, VAR_2,
          ((void*)0), 0, 1);
  break;
 case 131:
  VAR_7 = FUNC_4(VAR_4, VAR_2);
  break;
 case 129:
  VAR_7 = FUNC_1(VAR_4, VAR_2);
  break;
 case 128:
  VAR_7 = FUNC_6(VAR_4, VAR_2);
  break;
 default:
  FUNC_0(VAR_1, VAR_4->cls_conn->dd_data,
      "unsupported op 0x%x\n", VAR_2->hdr->opcode);
 }

 return VAR_7;
}
