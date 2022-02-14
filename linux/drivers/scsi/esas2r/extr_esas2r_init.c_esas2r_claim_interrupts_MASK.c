
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct esas2r_adapter {scalar_t__ intr_mode; TYPE_1__* pcid; int flags2; int name; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int ,...) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ,int ,unsigned long,int ,struct esas2r_adapter*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct esas2r_adapter *VAR_7)
{
 unsigned long VAR_8 = 0;

 if (VAR_7->intr_mode == VAR_3)
  VAR_8 |= VAR_4;

 FUNC_0(VAR_2,
     "esas2r_claim_interrupts irq=%d (%p, %s, %lx)",
     VAR_7->pcid->irq, VAR_7, VAR_7->name, VAR_8);

 if (FUNC_1(VAR_7->pcid->irq,
   (VAR_7->intr_mode ==
    VAR_3) ? VAR_5 :
   VAR_6,
   VAR_8,
   VAR_7->name,
   VAR_7)) {
  FUNC_0(VAR_1, "unable to request IRQ %02X",
      VAR_7->pcid->irq);
  return;
 }

 FUNC_2(VAR_0, &VAR_7->flags2);
 FUNC_0(VAR_2,
     "claimed IRQ %d flags: 0x%lx",
     VAR_7->pcid->irq, VAR_8);
}
