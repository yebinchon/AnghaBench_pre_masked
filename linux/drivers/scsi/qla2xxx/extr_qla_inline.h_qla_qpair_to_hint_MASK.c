
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct qla_tgt {struct qla_qpair_hint* qphints; TYPE_1__* ha; } ;
struct qla_qpair_hint {struct qla_qpair* qpair; } ;
struct qla_qpair {int dummy; } ;
struct TYPE_2__ {size_t max_qpairs; } ;



__attribute__((used)) static inline struct qla_qpair_hint *
FUNC_0(struct qla_tgt *VAR_0, struct qla_qpair *VAR_1)
{
 struct qla_qpair_hint *VAR_2;
 u16 VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->ha->max_qpairs + 1; VAR_3++) {
  VAR_2 = &VAR_0->qphints[VAR_3];
  if (VAR_2->qpair == VAR_1)
   return VAR_2;
 }

 return ((void*)0);
}
