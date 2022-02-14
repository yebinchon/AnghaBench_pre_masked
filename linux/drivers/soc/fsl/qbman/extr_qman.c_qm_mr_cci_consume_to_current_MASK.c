
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qm_mr {scalar_t__ cmode; int ci; int cursor; } ;
struct qm_portal {struct qm_mr mr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct qm_portal*,int ,int ) ;

__attribute__((used)) static inline void FUNC_3(struct qm_portal *VAR_2)
{
 struct qm_mr *VAR_3 = &VAR_2->mr;

 FUNC_0(VAR_3->cmode == VAR_1);
 VAR_3->ci = FUNC_1(VAR_3->cursor);
 FUNC_2(VAR_2, VAR_0, VAR_3->ci);
}
