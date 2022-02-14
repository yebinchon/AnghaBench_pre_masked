
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_ha_struct {struct pm8001_hba_info* lldd_ha; } ;
struct pm8001_hba_info {size_t chip_id; int logging_level; int * irq_vector; int * tasklet; int iomb_size; int name; scalar_t__ id; struct Scsi_Host* shost; struct sas_ha_struct* sas; int irq; int * chip; int * dev; struct pci_dev* pdev; } ;
struct pci_device_id {size_t driver_data; } ;
struct pci_dev {int msix_cap; int irq; int dev; } ;
struct Scsi_Host {int dummy; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sas_ha_struct* FUNC_0 (struct Scsi_Host*) ;
 size_t VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (struct pm8001_hba_info*,struct pci_device_id const*) ;
 int * VAR_5 ;
 int FUNC_3 (struct pm8001_hba_info*) ;
 int VAR_6 ;
 int FUNC_4 (struct pm8001_hba_info*) ;
 int VAR_7 ;
 int FUNC_5 (int ,char*,char*,scalar_t__) ;
 int FUNC_6 (int *,int ,unsigned long) ;

__attribute__((used)) static struct pm8001_hba_info *FUNC_7(struct pci_dev *VAR_8,
     const struct pci_device_id *VAR_9,
    struct Scsi_Host *VAR_10)

{
 struct pm8001_hba_info *VAR_11;
 struct sas_ha_struct *VAR_12 = FUNC_0(VAR_10);
 int VAR_13;

 VAR_11 = VAR_12->lldd_ha;
 if (!VAR_11)
  return ((void*)0);

 VAR_11->pdev = VAR_8;
 VAR_11->dev = &VAR_8->dev;
 VAR_11->chip_id = VAR_9->driver_data;
 VAR_11->chip = &VAR_5[VAR_11->chip_id];
 VAR_11->irq = VAR_8->irq;
 VAR_11->sas = VAR_12;
 VAR_11->shost = VAR_10;
 VAR_11->id = VAR_6++;
 VAR_11->logging_level = 0x01;
 FUNC_5(VAR_11->name, "%s%d", VAR_0, VAR_11->id);

 if (VAR_11->chip_id != VAR_4)
  VAR_11->iomb_size = VAR_2;
 else
  VAR_11->iomb_size = VAR_1;
 FUNC_4(VAR_11);
 if (!FUNC_2(VAR_11, VAR_9))
  return VAR_11;
 FUNC_3(VAR_11);
 return ((void*)0);
}
