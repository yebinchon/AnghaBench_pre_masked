
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int sch_no; } ;
struct qdio_irq {TYPE_4__ schid; } ;
struct TYPE_5__ {scalar_t__ cons; } ;
struct TYPE_6__ {TYPE_1__ erw; } ;
struct TYPE_7__ {TYPE_2__ esw0; } ;
struct irb {struct irb* ecw; TYPE_3__ esw; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct irb*,int) ;

__attribute__((used)) static void FUNC_2(struct qdio_irq *VAR_0, struct irb *VAR_1)
{
 if (VAR_1->esw.esw0.erw.cons) {
  FUNC_0("%4x sense:", VAR_0->schid.sch_no);
  FUNC_1(VAR_1, 64);
  FUNC_1(VAR_1->ecw, 64);
 }
}
