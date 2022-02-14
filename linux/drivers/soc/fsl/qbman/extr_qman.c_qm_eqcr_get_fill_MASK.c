
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qm_eqcr {int available; } ;
struct qm_portal {struct qm_eqcr eqcr; } ;


 int VAR_0 ;

__attribute__((used)) static inline u8 FUNC_0(struct qm_portal *VAR_1)
{
 struct qm_eqcr *VAR_2 = &VAR_1->eqcr;

 return VAR_0 - 1 - VAR_2->available;
}
