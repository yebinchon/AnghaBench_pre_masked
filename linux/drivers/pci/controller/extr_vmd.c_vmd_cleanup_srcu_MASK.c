
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmd_dev {int msix_count; TYPE_1__* irqs; } ;
struct TYPE_2__ {int srcu; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct vmd_dev *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->msix_count; VAR_1++)
  FUNC_0(&VAR_0->irqs[VAR_1].srcu);
}
