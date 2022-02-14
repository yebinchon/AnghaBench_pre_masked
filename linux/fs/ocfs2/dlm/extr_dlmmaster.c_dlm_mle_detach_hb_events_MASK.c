
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_master_list_entry {int dummy; } ;
struct dlm_ctxt {int spinlock; } ;


 int FUNC_0 (struct dlm_ctxt*,struct dlm_master_list_entry*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct dlm_ctxt *VAR_0,
         struct dlm_master_list_entry *VAR_1)
{
 FUNC_1(&VAR_0->spinlock);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->spinlock);
}
