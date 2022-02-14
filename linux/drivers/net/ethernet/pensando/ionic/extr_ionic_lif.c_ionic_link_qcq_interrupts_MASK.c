
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int index; int vector; } ;
struct TYPE_3__ {int lif; } ;
struct ionic_qcq {int flags; TYPE_2__ intr; TYPE_1__ cq; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ionic_qcq *VAR_1,
          struct ionic_qcq *VAR_2)
{
 if (FUNC_0(VAR_2->flags & VAR_0)) {
  FUNC_1(VAR_2->cq.lif, VAR_2->intr.index);
  VAR_2->flags &= ~VAR_0;
 }

 VAR_2->intr.vector = VAR_1->intr.vector;
 VAR_2->intr.index = VAR_1->intr.index;
}
