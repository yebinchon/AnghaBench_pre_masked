
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct enic {unsigned int intr_count; TYPE_2__* msix_entry; TYPE_1__* pdev; int vdev; } ;
struct TYPE_4__ {int vector; } ;
struct TYPE_3__ {int irq; } ;





 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct enic *VAR_0)
{
 unsigned int VAR_1;

 switch (FUNC_1(VAR_0->vdev)) {
 case 130:
 case 129:
  FUNC_0(VAR_0->pdev->irq);
  break;
 case 128:
  for (VAR_1 = 0; VAR_1 < VAR_0->intr_count; VAR_1++)
   FUNC_0(VAR_0->msix_entry[VAR_1].vector);
  break;
 default:
  break;
 }
}
