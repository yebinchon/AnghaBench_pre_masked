
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kobj; } ;
struct pci_dev {TYPE_1__ dev; } ;
struct pch_phub_reg {int pch_phub_base_address; } ;
struct TYPE_4__ {int attr; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (struct pch_phub_reg*) ;
 int VAR_1 ;
 int FUNC_1 (struct pci_dev*) ;
 struct pch_phub_reg* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int ) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_2)
{
 struct pch_phub_reg *VAR_3 = FUNC_2(VAR_2);

 FUNC_6(&VAR_2->dev.kobj, &VAR_0.attr);
 FUNC_5(&VAR_2->dev.kobj, &VAR_1);
 FUNC_3(VAR_2, VAR_3->pch_phub_base_address);
 FUNC_4(VAR_2);
 FUNC_1(VAR_2);
 FUNC_0(VAR_3);
}
