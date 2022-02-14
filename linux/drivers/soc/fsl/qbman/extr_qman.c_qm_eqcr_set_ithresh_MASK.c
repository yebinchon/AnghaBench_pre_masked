
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qm_eqcr {int ithresh; } ;
struct qm_portal {struct qm_eqcr eqcr; } ;


 int VAR_0 ;
 int FUNC_0 (struct qm_portal*,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct qm_portal *VAR_1, u8 VAR_2)
{
 struct qm_eqcr *VAR_3 = &VAR_1->eqcr;

 VAR_3->ithresh = VAR_2;
 FUNC_0(VAR_1, VAR_0, VAR_2);
}
