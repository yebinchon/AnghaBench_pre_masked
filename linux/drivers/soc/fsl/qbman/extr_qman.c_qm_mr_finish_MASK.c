
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qm_mr {scalar_t__ ci; int cursor; } ;
struct qm_portal {struct qm_mr mr; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static inline void FUNC_2(struct qm_portal *VAR_0)
{
 struct qm_mr *VAR_1 = &VAR_0->mr;

 if (VAR_1->ci != FUNC_0(VAR_1->cursor))
  FUNC_1("Ignoring completed MR entries\n");
}
