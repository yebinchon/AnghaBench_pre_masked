
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_avail {int irq_nranges; struct irq_avail* guest; struct irq_avail* status; struct irq_avail* irq_avail; struct irq_avail* bitmap; } ;
struct cxl {int irq_nranges; struct cxl* guest; struct cxl* status; struct cxl* irq_avail; struct cxl* bitmap; } ;


 int FUNC_0 (struct irq_avail*) ;
 int FUNC_1 (struct irq_avail*) ;

__attribute__((used)) static void FUNC_2(struct cxl *VAR_0)
{
 struct irq_avail *VAR_1;
 int VAR_2;

 if (VAR_0->guest) {
  if (VAR_0->guest->irq_avail) {
   for (VAR_2 = 0; VAR_2 < VAR_0->guest->irq_nranges; VAR_2++) {
    VAR_1 = &VAR_0->guest->irq_avail[VAR_2];
    FUNC_1(VAR_1->bitmap);
   }
   FUNC_1(VAR_0->guest->irq_avail);
  }
  FUNC_1(VAR_0->guest->status);
  FUNC_1(VAR_0->guest);
 }
 FUNC_0(VAR_0);
 FUNC_1(VAR_0);
}
