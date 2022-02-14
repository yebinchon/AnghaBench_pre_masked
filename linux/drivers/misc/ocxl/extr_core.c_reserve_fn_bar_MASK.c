
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {int parent; } ;
struct ocxl_fn {int * bar_used; TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,int,char*) ;
 struct pci_dev* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ocxl_fn *VAR_1, int VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_1(VAR_1->dev.parent);
 int VAR_4, VAR_5;

 if (VAR_2 != 0 && VAR_2 != 2 && VAR_2 != 4)
  return -VAR_0;

 VAR_5 = VAR_2 >> 1;
 if (VAR_1->bar_used[VAR_5]++ == 0) {
  VAR_4 = FUNC_0(VAR_3, VAR_2, "ocxl");
  if (VAR_4)
   return VAR_4;
 }
 return 0;
}
