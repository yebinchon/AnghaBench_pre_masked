
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qedi_endpoint {struct qedi_ctx* qedi; struct qedi_conn* conn; } ;
struct qedi_ctx {int dbg_ctx; } ;
struct qedi_conn {int qedi; TYPE_1__* cls_conn; } ;
struct iscsi_eqe_data {int error_code; } ;
struct TYPE_2__ {int dd_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int ,int ,char*,char*,char*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ,struct qedi_conn*) ;

void FUNC_4(struct qedi_endpoint *VAR_1,
         struct iscsi_eqe_data *VAR_2)
{
 struct qedi_conn *VAR_3;
 struct qedi_ctx *VAR_4;
 char VAR_5[] = "iscsi_warning";
 char VAR_6[] = "iscsi_error";
 char VAR_7[] = "Unknown error";
 char *VAR_8;
 int VAR_9 = 0;
 u32 VAR_10 = 0;
 char *VAR_11;

 if (!VAR_1)
  return;

 VAR_3 = VAR_1->conn;
 if (!VAR_3)
  return;

 VAR_4 = VAR_1->qedi;

 FUNC_0(&VAR_4->dbg_ctx, "async event iscsi error:0x%x\n",
   VAR_2->error_code);

 if (VAR_10) {
  VAR_9 = 0;
  VAR_8 = VAR_5;
 } else {
  VAR_9 = 1;
  VAR_8 = VAR_6;
 }

 VAR_11 = FUNC_2(VAR_2->error_code);
 if (!VAR_11) {
  VAR_9 = 0;
  VAR_11 = VAR_7;
 }

 FUNC_1(VAR_0,
     VAR_3->cls_conn->dd_data,
     "qedi: %s - %s\n", VAR_8, VAR_11);

 if (VAR_9)
  FUNC_3(VAR_3->qedi, VAR_3);
}
