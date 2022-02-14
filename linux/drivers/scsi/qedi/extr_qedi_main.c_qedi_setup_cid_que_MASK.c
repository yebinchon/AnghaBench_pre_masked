
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int* cid_que; int cid_q_max_idx; int cid_free_cnt; int ** conn_cid_tbl; scalar_t__ cid_q_cons_idx; scalar_t__ cid_q_prod_idx; int * cid_que_base; } ;
struct qedi_ctx {int max_active_conns; TYPE_1__ cid_que; } ;
struct qedi_conn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct qedi_ctx *VAR_2)
{
 int VAR_3;

 VAR_2->cid_que.cid_que_base = FUNC_1(VAR_2->max_active_conns,
         sizeof(u32), VAR_1);
 if (!VAR_2->cid_que.cid_que_base)
  return -VAR_0;

 VAR_2->cid_que.conn_cid_tbl = FUNC_1(VAR_2->max_active_conns,
         sizeof(struct qedi_conn *),
         VAR_1);
 if (!VAR_2->cid_que.conn_cid_tbl) {
  FUNC_0(VAR_2->cid_que.cid_que_base);
  VAR_2->cid_que.cid_que_base = ((void*)0);
  return -VAR_0;
 }

 VAR_2->cid_que.cid_que = (u32 *)VAR_2->cid_que.cid_que_base;
 VAR_2->cid_que.cid_q_prod_idx = 0;
 VAR_2->cid_que.cid_q_cons_idx = 0;
 VAR_2->cid_que.cid_q_max_idx = VAR_2->max_active_conns;
 VAR_2->cid_que.cid_free_cnt = VAR_2->max_active_conns;

 for (VAR_3 = 0; VAR_3 < VAR_2->max_active_conns; VAR_3++) {
  VAR_2->cid_que.cid_que[VAR_3] = VAR_3;
  VAR_2->cid_que.conn_cid_tbl[VAR_3] = ((void*)0);
 }

 return 0;
}
