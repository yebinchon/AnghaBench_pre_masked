
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcifront_device {TYPE_1__* xdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 () ;
 struct pcifront_device* VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct pcifront_device *VAR_3)
{
 int VAR_4 = 0;

 FUNC_3(&VAR_2);

 if (!VAR_1) {
  FUNC_1(&VAR_3->xdev->dev, "Installing PCI frontend\n");
  VAR_1 = VAR_3;
 } else
  VAR_4 = -VAR_0;

 FUNC_4(&VAR_2);

 if (!VAR_4 && !FUNC_5()) {
  VAR_4 = FUNC_2();
  if (VAR_4)
   FUNC_0(&VAR_3->xdev->dev, "Could not setup SWIOTLB!\n");
 }
 return VAR_4;
}
