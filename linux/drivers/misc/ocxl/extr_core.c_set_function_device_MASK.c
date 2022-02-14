
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_2__ {int release; int * parent; } ;
struct ocxl_fn {TYPE_1__ dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct ocxl_fn *VAR_1, struct pci_dev *VAR_2)
{
 int VAR_3;

 VAR_1->dev.parent = &VAR_2->dev;
 VAR_1->dev.release = VAR_0;
 VAR_3 = FUNC_1(&VAR_1->dev, "ocxlfn.%s", FUNC_0(&VAR_2->dev));
 if (VAR_3)
  return VAR_3;
 return 0;
}
