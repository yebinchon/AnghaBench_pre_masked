
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snic_disc {int * cb; int * rtgt_info; scalar_t__ rtgt_cnt; scalar_t__ req_cnt; int state; scalar_t__ nxt_tgt_id; scalar_t__ disc_id; int mutex; int tgt_list; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct snic_disc *VAR_1)
{
 FUNC_0(&VAR_1->tgt_list);
 FUNC_1(&VAR_1->mutex);
 VAR_1->disc_id = 0;
 VAR_1->nxt_tgt_id = 0;
 VAR_1->state = VAR_0;
 VAR_1->req_cnt = 0;
 VAR_1->rtgt_cnt = 0;
 VAR_1->rtgt_info = ((void*)0);
 VAR_1->cb = ((void*)0);
}
