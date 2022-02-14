
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qm_dqrr {struct qm_dqrr_entry const* cursor; int fill; } ;
struct qm_portal {struct qm_dqrr dqrr; } ;
struct qm_dqrr_entry {int dummy; } ;



__attribute__((used)) static inline const struct qm_dqrr_entry *FUNC_0(
      struct qm_portal *VAR_0)
{
 struct qm_dqrr *VAR_1 = &VAR_0->dqrr;

 if (!VAR_1->fill)
  return ((void*)0);
 return VAR_1->cursor;
}
