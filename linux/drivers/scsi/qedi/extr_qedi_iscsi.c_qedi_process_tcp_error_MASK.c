
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qedi_endpoint {TYPE_1__* qedi; struct qedi_conn* conn; } ;
struct qedi_conn {int qedi; } ;
struct iscsi_eqe_data {int error_code; } ;
struct TYPE_2__ {int dbg_ctx; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int ,struct qedi_conn*) ;

void FUNC_2(struct qedi_endpoint *VAR_0,
       struct iscsi_eqe_data *VAR_1)
{
 struct qedi_conn *VAR_2;

 if (!VAR_0)
  return;

 VAR_2 = VAR_0->conn;
 if (!VAR_2)
  return;

 FUNC_0(&VAR_0->qedi->dbg_ctx, "async event TCP error:0x%x\n",
   VAR_1->error_code);

 FUNC_1(VAR_2->qedi, VAR_2);
}
