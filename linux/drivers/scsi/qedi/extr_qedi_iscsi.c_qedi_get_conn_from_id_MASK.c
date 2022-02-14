
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {struct qedi_conn** conn_cid_tbl; } ;
struct qedi_ctx {size_t max_active_conns; TYPE_1__ cid_que; int dbg_ctx; } ;
struct qedi_conn {int dummy; } ;


 int FUNC_0 (int *,char*,...) ;

struct qedi_conn *FUNC_1(struct qedi_ctx *VAR_0, u32 VAR_1)
{
 if (!VAR_0->cid_que.conn_cid_tbl) {
  FUNC_0(&VAR_0->dbg_ctx, "missing conn<->cid table\n");
  return ((void*)0);

 } else if (VAR_1 >= VAR_0->max_active_conns) {
  FUNC_0(&VAR_0->dbg_ctx, "wrong cid #%d\n", VAR_1);
  return ((void*)0);
 }
 return VAR_0->cid_que.conn_cid_tbl[VAR_1];
}
