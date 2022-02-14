
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pm8001_hba_info {int shost; TYPE_1__* irq_vector; struct pci_dev* pdev; } ;
struct pci_dev {int irq; scalar_t__ msix_cap; } ;
struct TYPE_2__ {struct pm8001_hba_info* drv_inst; scalar_t__ irq_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct pm8001_hba_info*) ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static u32 FUNC_6(struct pm8001_hba_info *VAR_3)
{
 struct pci_dev *VAR_4;
 int VAR_5;

 VAR_4 = VAR_3->pdev;
intx:

 VAR_3->irq_vector[0].irq_id = 0;
 VAR_3->irq_vector[0].drv_inst = VAR_3;
 VAR_5 = FUNC_5(VAR_4->irq, VAR_2, VAR_1,
  VAR_0, FUNC_1(VAR_3->shost));
 return VAR_5;
}
