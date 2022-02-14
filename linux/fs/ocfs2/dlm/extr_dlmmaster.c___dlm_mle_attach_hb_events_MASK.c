
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_master_list_entry {int hb_events; } ;
struct dlm_ctxt {int mle_hb_events; int spinlock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static inline void FUNC_2(struct dlm_ctxt *VAR_0,
           struct dlm_master_list_entry *VAR_1)
{
 FUNC_0(&VAR_0->spinlock);

 FUNC_1(&VAR_1->hb_events, &VAR_0->mle_hb_events);
}
