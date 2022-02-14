
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_2__ {int cid_q_prod_idx; size_t* cid_que; int cid_q_max_idx; int ** conn_cid_tbl; int cid_free_cnt; } ;
struct bnx2i_hba {TYPE_1__ cid_que; } ;



__attribute__((used)) static void FUNC_0(struct bnx2i_hba *VAR_0, u16 VAR_1)
{
 int VAR_2;

 if (VAR_1 == (u16) -1)
  return;

 VAR_0->cid_que.cid_free_cnt++;

 VAR_2 = VAR_0->cid_que.cid_q_prod_idx;
 VAR_0->cid_que.cid_que[VAR_2] = VAR_1;
 VAR_0->cid_que.conn_cid_tbl[VAR_1] = ((void*)0);
 VAR_0->cid_que.cid_q_prod_idx++;
 if (VAR_0->cid_que.cid_q_prod_idx == VAR_0->cid_que.cid_q_max_idx)
  VAR_0->cid_que.cid_q_prod_idx = 0;
}
