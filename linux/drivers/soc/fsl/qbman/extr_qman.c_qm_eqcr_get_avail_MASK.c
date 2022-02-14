
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qm_eqcr {int available; } ;
struct qm_portal {struct qm_eqcr eqcr; } ;



__attribute__((used)) static inline u8 FUNC_0(struct qm_portal *VAR_0)
{
 struct qm_eqcr *VAR_1 = &VAR_0->eqcr;

 return VAR_1->available;
}
