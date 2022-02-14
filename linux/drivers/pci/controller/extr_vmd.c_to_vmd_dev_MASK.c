
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmd_dev {TYPE_1__* dev; } ;
struct pci_dev {int bus; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 struct pci_dev* FUNC_0 (struct device*) ;
 struct vmd_dev* FUNC_1 (int ) ;

__attribute__((used)) static struct device *FUNC_2(struct device *VAR_0)
{
 struct pci_dev *VAR_1 = FUNC_0(VAR_0);
 struct vmd_dev *VAR_2 = FUNC_1(VAR_1->bus);

 return &VAR_2->dev->dev;
}
