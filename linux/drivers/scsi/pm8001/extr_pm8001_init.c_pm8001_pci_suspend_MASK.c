
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sas_ha_struct {struct pm8001_hba_info* lldd_ha; } ;
struct pm8001_hba_info {int number_of_intr; scalar_t__ chip_id; int name; int * tasklet; int irq; struct sas_ha_struct* irq_vector; int shost; } ;
struct pci_dev {int msix_cap; int dev; int pm_cap; } ;
typedef int pm_message_t ;
struct TYPE_2__ {int (* chip_soft_rst ) (struct pm8001_hba_info*) ;int (* interrupt_disable ) (struct pm8001_hba_info*,int) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct sas_ha_struct*) ;
 int FUNC_3 (struct pci_dev*,int ) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 struct sas_ha_struct* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int) ;
 int FUNC_8 () ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*,int ) ;
 int FUNC_11 (char*,struct pci_dev*,int ,int ) ;
 int VAR_4 ;
 int FUNC_12 (struct sas_ha_struct*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct pm8001_hba_info*,int) ;
 int FUNC_15 (struct pm8001_hba_info*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(struct pci_dev *VAR_5, pm_message_t VAR_6)
{
 struct sas_ha_struct *VAR_7 = FUNC_6(VAR_5);
 struct pm8001_hba_info *VAR_8;
 int VAR_9, VAR_10;
 u32 VAR_11;
 VAR_8 = VAR_7->lldd_ha;
 FUNC_12(VAR_7);
 FUNC_1(VAR_4);
 FUNC_13(VAR_8->shost);
 if (!VAR_5->pm_cap) {
  FUNC_0(&VAR_5->dev, " PCI PM not supported\n");
  return -VAR_0;
 }
 VAR_1->interrupt_disable(VAR_8, 0xFF);
 VAR_1->chip_soft_rst(VAR_8);







 FUNC_2(VAR_8->irq, VAR_7);
 VAR_11 = FUNC_3(VAR_5, VAR_6);
 FUNC_11("pdev=0x%p, slot=%s, entering "
        "operating state [D%d]\n", VAR_5,
        VAR_8->name, VAR_11);
 FUNC_9(VAR_5);
 FUNC_4(VAR_5);
 FUNC_10(VAR_5, VAR_11);
 return 0;
}
