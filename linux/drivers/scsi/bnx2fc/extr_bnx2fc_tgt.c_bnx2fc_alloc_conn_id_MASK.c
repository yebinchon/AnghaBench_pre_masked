
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct bnx2fc_rport {size_t fcoe_conn_id; } ;
struct bnx2fc_hba {size_t next_conn_id; int hba_lock; struct bnx2fc_rport** tgt_ofld_list; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static u32 FUNC_2(struct bnx2fc_hba *VAR_1,
    struct bnx2fc_rport *VAR_2)
{
 u32 VAR_3, VAR_4;
 FUNC_0(&VAR_1->hba_lock);
 VAR_4 = VAR_1->next_conn_id;
 VAR_3 = VAR_1->next_conn_id++;
 if (VAR_1->next_conn_id == VAR_0)
  VAR_1->next_conn_id = 0;

 while (VAR_1->tgt_ofld_list[VAR_3] != ((void*)0)) {
  VAR_3++;
  if (VAR_3 == VAR_0)
   VAR_3 = 0;

  if (VAR_3 == VAR_4) {

   FUNC_1(&VAR_1->hba_lock);
   return -1;
  }
 }
 VAR_1->tgt_ofld_list[VAR_3] = VAR_2;
 VAR_2->fcoe_conn_id = VAR_3;
 FUNC_1(&VAR_1->hba_lock);
 return VAR_3;
}
