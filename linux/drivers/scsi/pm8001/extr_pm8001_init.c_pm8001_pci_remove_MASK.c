
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sas_ha_struct {struct sas_ha_struct* sas_port; struct sas_ha_struct* sas_phy; struct pm8001_hba_info* lldd_ha; } ;
struct pm8001_hba_info {int number_of_intr; scalar_t__ chip_id; int shost; int * tasklet; int irq; struct sas_ha_struct* irq_vector; int list; } ;
struct pci_dev {int msix_cap; } ;
struct TYPE_2__ {int (* chip_soft_rst ) (struct pm8001_hba_info*) ;int (* interrupt_disable ) (struct pm8001_hba_info*,int) ;} ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,struct sas_ha_struct*) ;
 int FUNC_1 (struct sas_ha_struct*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 struct sas_ha_struct* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int) ;
 int FUNC_7 () ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pm8001_hba_info*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct sas_ha_struct*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct pm8001_hba_info*,int) ;
 int FUNC_14 (struct pm8001_hba_info*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static void FUNC_17(struct pci_dev *VAR_3)
{
 struct sas_ha_struct *VAR_4 = FUNC_5(VAR_3);
 struct pm8001_hba_info *VAR_5;
 int VAR_6, VAR_7;
 VAR_5 = VAR_4->lldd_ha;
 FUNC_11(VAR_4);
 FUNC_10(VAR_5->shost);
 FUNC_2(&VAR_5->list);
 VAR_0->interrupt_disable(VAR_5, 0xFF);
 VAR_0->chip_soft_rst(VAR_5);
 FUNC_0(VAR_5->irq, VAR_4);
 FUNC_12(VAR_5->shost);
 FUNC_9(VAR_5);
 FUNC_1(VAR_4->sas_phy);
 FUNC_1(VAR_4->sas_port);
 FUNC_1(VAR_4);
 FUNC_8(VAR_3);
 FUNC_3(VAR_3);
}
