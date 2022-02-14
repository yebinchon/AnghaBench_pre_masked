
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qm_dqrr {int pi; scalar_t__ pmode; int vbit; int fill; int ring; } ;
struct qm_portal {struct qm_dqrr dqrr; } ;
struct qm_dqrr_entry {int verb; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct qm_dqrr_entry*) ;
 struct qm_dqrr_entry* FUNC_2 (int ,int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline void FUNC_3(struct qm_portal *VAR_3)
{
 struct qm_dqrr *VAR_4 = &VAR_3->dqrr;
 struct qm_dqrr_entry *VAR_5 = FUNC_2(VAR_4->ring, VAR_4->pi);

 FUNC_0(VAR_4->pmode == VAR_2);





 FUNC_1(VAR_5);

 if ((VAR_5->verb & VAR_1) == VAR_4->vbit) {
  VAR_4->pi = (VAR_4->pi + 1) & (VAR_0 - 1);
  if (!VAR_4->pi)
   VAR_4->vbit ^= VAR_1;
  VAR_4->fill++;
 }
}
