
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qm_eqcr {int busy; struct qm_eqcr_entry* cursor; int available; } ;
struct qm_portal {struct qm_eqcr eqcr; } ;
struct qm_eqcr_entry {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct qm_eqcr_entry*) ;

__attribute__((used)) static inline struct qm_eqcr_entry *FUNC_2(struct qm_portal
         *VAR_0)
{
 struct qm_eqcr *VAR_1 = &VAR_0->eqcr;

 FUNC_0(!VAR_1->busy);
 if (!VAR_1->available)
  return ((void*)0);




 FUNC_1(VAR_1->cursor);
 return VAR_1->cursor;
}
