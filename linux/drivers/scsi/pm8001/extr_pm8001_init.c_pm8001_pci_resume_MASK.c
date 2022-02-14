
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct sas_ha_struct {struct pm8001_hba_info* lldd_ha; } ;
struct pm8001_hba_info {scalar_t__ chip_id; size_t number_of_intr; int shost; TYPE_2__* phy; TYPE_1__* chip; int flags; int * irq_vector; int * tasklet; int name; } ;
struct pci_dev {int msix_cap; int current_state; } ;
struct TYPE_6__ {int (* chip_init ) (struct pm8001_hba_info*) ;int (* phy_start_req ) (struct pm8001_hba_info*,size_t) ;int (* interrupt_enable ) (struct pm8001_hba_info*,size_t) ;int (* interrupt_disable ) (struct pm8001_hba_info*,int) ;int (* chip_soft_rst ) (struct pm8001_hba_info*) ;} ;
struct TYPE_5__ {int * enable_completion; } ;
struct TYPE_4__ {size_t n_phy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_1 (struct pm8001_hba_info*,int ) ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int ,int ) ;
 struct sas_ha_struct* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 () ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*,int ) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (struct pm8001_hba_info*) ;
 int VAR_8 ;
 int FUNC_14 (struct sas_ha_struct*) ;
 int FUNC_15 (struct sas_ha_struct*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct pm8001_hba_info*) ;
 int FUNC_18 (struct pm8001_hba_info*) ;
 int FUNC_19 (struct pm8001_hba_info*,int) ;
 int FUNC_20 (struct pm8001_hba_info*,size_t) ;
 int FUNC_21 (struct pm8001_hba_info*,size_t) ;
 int FUNC_22 (struct pm8001_hba_info*,size_t) ;
 int FUNC_23 (int *,int ,unsigned long) ;
 int FUNC_24 (int *) ;

__attribute__((used)) static int FUNC_25(struct pci_dev *VAR_9)
{
 struct sas_ha_struct *VAR_10 = FUNC_6(VAR_9);
 struct pm8001_hba_info *VAR_11;
 int VAR_12;
 u8 VAR_13 = 0, VAR_14;
 u32 VAR_15;
 FUNC_0(VAR_7);
 VAR_11 = VAR_10->lldd_ha;
 VAR_15 = VAR_9->current_state;

 FUNC_12("pdev=0x%p, slot=%s, resuming from previous "
  "operating state [D%d]\n", VAR_9, VAR_11->name, VAR_15);

 FUNC_11(VAR_9, VAR_0);
 FUNC_5(VAR_9, VAR_0, 0);
 FUNC_9(VAR_9);
 VAR_12 = FUNC_4(VAR_9);
 if (VAR_12) {
  FUNC_12("slot=%s Enable device failed during resume\n",
         VAR_11->name);
  goto err_out_enable;
 }

 FUNC_10(VAR_9);
 VAR_12 = FUNC_7(VAR_9);
 if (VAR_12)
  goto err_out_disable;
 FUNC_14(VAR_10);

 if (VAR_11->chip_id == VAR_4) {
  VAR_2->chip_soft_rst(VAR_11);
  FUNC_1(VAR_11,
   FUNC_12("chip soft reset successful\n"));
 }
 VAR_12 = VAR_2->chip_init(VAR_11);
 if (VAR_12)
  goto err_out_disable;


 VAR_2->interrupt_disable(VAR_11, 0xFF);

 VAR_12 = FUNC_13(VAR_11);
 if (VAR_12)
  goto err_out_disable;
 VAR_2->interrupt_enable(VAR_11, 0);
 if (VAR_11->chip_id != VAR_4) {
  for (VAR_13 = 1; VAR_13 < VAR_11->number_of_intr; VAR_13++)
   VAR_2->interrupt_enable(VAR_11, VAR_13);
 }






 if (VAR_11->chip_id == VAR_5 ||
  VAR_11->chip_id == VAR_6) {
  FUNC_2(500);
 }



 VAR_11->flags = VAR_1;
 for (VAR_13 = 0; VAR_13 < VAR_11->chip->n_phy; VAR_13++) {
  VAR_11->phy[VAR_13].enable_completion = &VAR_7;
  VAR_2->phy_start_req(VAR_11, VAR_13);
  FUNC_24(&VAR_7);
 }
 FUNC_15(VAR_10);
 return 0;

err_out_disable:
 FUNC_16(VAR_11->shost);
 FUNC_3(VAR_9);
err_out_enable:
 return VAR_12;
}
