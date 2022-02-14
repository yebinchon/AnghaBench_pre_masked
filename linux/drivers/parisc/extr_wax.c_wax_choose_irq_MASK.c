
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sversion; } ;
struct parisc_device {int aux_irq; TYPE_1__ id; int irq; } ;


 int FUNC_0 (void*,int,int *) ;

__attribute__((used)) static void FUNC_1(struct parisc_device *VAR_0, void *VAR_1)
{
 int VAR_2;

 switch (VAR_0->id.sversion) {
  case 0x73: VAR_2 = 1; break;
  case 0x8c: VAR_2 = 6; break;
  case 0x90: VAR_2 = 10; break;
  default: return;
 }

 FUNC_0(VAR_1, VAR_2, &VAR_0->irq);

 switch (VAR_0->id.sversion) {
  case 0x73: VAR_2 = 2; break;
  case 0x90: VAR_2 = 0; break;
  default: return;
 }

 FUNC_0(VAR_1, VAR_2, &VAR_0->aux_irq);
}
