
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sversion; } ;
struct parisc_device {int irq; TYPE_1__ id; } ;
struct dino_device {int dummy; } ;


 int FUNC_0 (struct dino_device*,int,int *) ;

__attribute__((used)) static void FUNC_1(struct parisc_device *VAR_0, void *VAR_1)
{
 int VAR_2;
 struct dino_device *VAR_3 = VAR_1;

 switch (VAR_0->id.sversion) {
  case 0x00084: VAR_2 = 8; break;
  case 0x0008c: VAR_2 = 10; break;
  case 0x00096: VAR_2 = 8; break;
  default: return;
 }

 FUNC_0(VAR_3, VAR_2, &VAR_0->irq);
}
