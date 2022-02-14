
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipc_ids {int max_idx; int last_idx; int next_id; int ipcs_idr; int key_ht; int rwsem; scalar_t__ seq; scalar_t__ in_use; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;

void FUNC_3(struct ipc_ids *VAR_1)
{
 VAR_1->in_use = 0;
 VAR_1->seq = 0;
 FUNC_1(&VAR_1->rwsem);
 FUNC_2(&VAR_1->key_ht, &VAR_0);
 FUNC_0(&VAR_1->ipcs_idr);
 VAR_1->max_idx = -1;
 VAR_1->last_idx = -1;



}
