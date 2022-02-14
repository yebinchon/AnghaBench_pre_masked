
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {int parent; } ;
struct ocxl_fn {scalar_t__* bar_used; TYPE_1__ dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct pci_dev*,int) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ocxl_fn *VAR_0, int VAR_1)
{
 struct pci_dev *VAR_2 = FUNC_2(VAR_0->dev.parent);
 int VAR_3;

 if (VAR_1 != 0 && VAR_1 != 2 && VAR_1 != 4)
  return;

 VAR_3 = VAR_1 >> 1;
 if (--VAR_0->bar_used[VAR_3] == 0)
  FUNC_1(VAR_2, VAR_1);
 FUNC_0(VAR_0->bar_used[VAR_3] < 0);
}
