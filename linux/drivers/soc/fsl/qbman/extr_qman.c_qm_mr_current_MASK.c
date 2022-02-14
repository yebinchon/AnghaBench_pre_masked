
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union qm_mr_entry {int dummy; } qm_mr_entry ;
struct qm_mr {union qm_mr_entry const* cursor; int fill; } ;
struct qm_portal {struct qm_mr mr; } ;



__attribute__((used)) static inline const union qm_mr_entry *FUNC_0(struct qm_portal *VAR_0)
{
 struct qm_mr *VAR_1 = &VAR_0->mr;

 if (!VAR_1->fill)
  return ((void*)0);
 return VAR_1->cursor;
}
