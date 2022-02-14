
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct qla_qpair {int srb_mempool; } ;
struct TYPE_4__ {int * qpair; } ;
typedef TYPE_1__ srb_t ;


 int FUNC_0 (struct qla_qpair*) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static inline void
FUNC_2(struct qla_qpair *VAR_0, srb_t *VAR_1)
{
 VAR_1->qpair = ((void*)0);
 FUNC_1(VAR_1, VAR_0->srb_mempool);
 FUNC_0(VAR_0);
}
