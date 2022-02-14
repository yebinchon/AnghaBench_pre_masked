
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct TYPE_4__ {struct pci_dev* sb_pdev; } ;
struct TYPE_3__ {struct pci_dev* sb_pdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int,int ,int ,int *,int ,int *) ;
 int FUNC_3 (struct pci_dev*) ;
 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_3,
     const struct pci_device_id *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_3(VAR_3);
 if (VAR_5) {
  FUNC_1(&VAR_3->dev, "failed to enable device\n");
  return VAR_5;
 }

 VAR_0.sb_pdev = VAR_3;
 VAR_2.sb_pdev = VAR_3;

 return FUNC_2(&VAR_3->dev, -1,
        VAR_1,
        FUNC_0(VAR_1),
        ((void*)0), 0, ((void*)0));
}
