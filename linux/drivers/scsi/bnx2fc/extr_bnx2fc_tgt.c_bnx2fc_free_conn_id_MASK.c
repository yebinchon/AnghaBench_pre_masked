
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct bnx2fc_hba {int hba_lock; int ** tgt_ofld_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct bnx2fc_hba *VAR_0, u32 VAR_1)
{

 FUNC_0(&VAR_0->hba_lock);
 VAR_0->tgt_ofld_list[VAR_1] = ((void*)0);
 FUNC_1(&VAR_0->hba_lock);
}
