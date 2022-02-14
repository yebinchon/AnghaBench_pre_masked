
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_master_list_entry {struct dlm_ctxt* dlm; } ;
struct dlm_ctxt {int spinlock; int master_lock; } ;


 int FUNC_0 (struct dlm_master_list_entry*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct dlm_master_list_entry *VAR_0)
{
 struct dlm_ctxt *VAR_1;
 VAR_1 = VAR_0->dlm;

 FUNC_1(&VAR_1->spinlock);
 FUNC_1(&VAR_1->master_lock);
 FUNC_0(VAR_0);
 FUNC_2(&VAR_1->master_lock);
 FUNC_2(&VAR_1->spinlock);
}
