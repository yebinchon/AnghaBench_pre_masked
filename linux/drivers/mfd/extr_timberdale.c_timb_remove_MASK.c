
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timberdale_device {int ctl_mapbase; int ctl_membase; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct timberdale_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 struct timberdale_device* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_2)
{
 struct timberdale_device *VAR_3 = FUNC_6(VAR_2);

 FUNC_3(&VAR_2->dev);

 FUNC_0(&VAR_2->dev, &VAR_1);

 FUNC_1(VAR_3->ctl_membase);
 FUNC_7(VAR_3->ctl_mapbase, VAR_0);

 FUNC_5(VAR_2);
 FUNC_4(VAR_2);
 FUNC_2(VAR_3);
}
