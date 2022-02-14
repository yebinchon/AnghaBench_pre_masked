
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qm_eqcr {int busy; int available; TYPE_1__* cursor; } ;
struct TYPE_2__ {int fqid; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct qm_eqcr *VAR_1)
{
 FUNC_0(VAR_1->busy);
 FUNC_0(!(FUNC_1(VAR_1->cursor->fqid) & ~VAR_0));
 FUNC_0(VAR_1->available >= 1);
}
