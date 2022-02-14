
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vmd_dev {int irq_domain; int bus; TYPE_2__* dev; } ;
struct pci_dev {int dummy; } ;
struct TYPE_3__ {int kobj; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int FUNC_0 (int ) ;
 struct vmd_dev* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (struct vmd_dev*) ;
 int FUNC_6 (struct vmd_dev*) ;
 int FUNC_7 (struct vmd_dev*) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_0)
{
 struct vmd_dev *VAR_1 = FUNC_1(VAR_0);

 FUNC_4(&VAR_1->dev->dev.kobj, "domain");
 FUNC_3(VAR_1->bus);
 FUNC_2(VAR_1->bus);
 FUNC_5(VAR_1);
 FUNC_7(VAR_1);
 FUNC_6(VAR_1);
 FUNC_0(VAR_1->irq_domain);
}
