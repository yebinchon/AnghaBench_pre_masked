
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qm_eqcr {scalar_t__ pmode; int vbit; scalar_t__ busy; int available; struct qm_eqcr_entry* cursor; } ;
struct qm_portal {struct qm_eqcr eqcr; } ;
struct qm_eqcr_entry {int _ncw_verb; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct qm_eqcr_entry*) ;
 int FUNC_3 (struct qm_eqcr*) ;
 int FUNC_4 (struct qm_eqcr*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static inline void FUNC_5(struct qm_portal *VAR_1, u8 VAR_2)
{
 struct qm_eqcr *VAR_3 = &VAR_1->eqcr;
 struct qm_eqcr_entry *VAR_4;

 FUNC_3(VAR_3);
 FUNC_0(VAR_3->pmode == VAR_0);
 FUNC_1();
 VAR_4 = VAR_3->cursor;
 VAR_4->_ncw_verb = VAR_2 | VAR_3->vbit;
 FUNC_2(VAR_4);
 FUNC_4(VAR_3);
 VAR_3->available--;



}
