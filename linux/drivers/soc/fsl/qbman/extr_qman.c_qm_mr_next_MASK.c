
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qm_mr {int fill; int cursor; } ;
struct qm_portal {struct qm_mr mr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct qm_portal *VAR_0)
{
 struct qm_mr *VAR_1 = &VAR_0->mr;

 FUNC_0(VAR_1->fill);
 VAR_1->cursor = FUNC_1(VAR_1->cursor);
 return --VAR_1->fill;
}
