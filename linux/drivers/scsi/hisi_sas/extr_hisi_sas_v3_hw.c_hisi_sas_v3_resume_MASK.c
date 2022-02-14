
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sas_ha_struct {struct hisi_hba* lldd_ha; } ;
struct pci_dev {int current_state; } ;
struct hisi_hba {int flags; TYPE_1__* hw; struct device* dev; struct Scsi_Host* shost; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
typedef int pci_power_t ;
struct TYPE_2__ {int (* phys_init ) (struct hisi_hba*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct device*,char*,unsigned int) ;
 int FUNC_2 (struct device*,char*,int ) ;
 unsigned int FUNC_3 (struct hisi_hba*) ;
 int FUNC_4 (struct pci_dev*) ;
 unsigned int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int ,int ) ;
 struct sas_ha_struct* FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*,int ) ;
 int FUNC_11 (struct sas_ha_struct*) ;
 int FUNC_12 (struct sas_ha_struct*) ;
 int FUNC_13 (struct Scsi_Host*) ;
 int FUNC_14 (struct Scsi_Host*) ;
 int FUNC_15 (struct hisi_hba*) ;

__attribute__((used)) static int FUNC_16(struct pci_dev *VAR_3)
{
 struct sas_ha_struct *VAR_4 = FUNC_7(VAR_3);
 struct hisi_hba *VAR_5 = VAR_4->lldd_ha;
 struct Scsi_Host *VAR_6 = VAR_5->shost;
 struct device *VAR_7 = VAR_5->dev;
 unsigned int VAR_8;
 pci_power_t VAR_9 = VAR_3->current_state;

 FUNC_2(VAR_7, "resuming from operating state [D%d]\n",
   VAR_9);
 FUNC_10(VAR_3, VAR_2);
 FUNC_6(VAR_3, VAR_2, 0);
 FUNC_8(VAR_3);
 VAR_8 = FUNC_5(VAR_3);
 if (VAR_8) {
  FUNC_1(VAR_7, "enable device failed during resume (%d)\n", VAR_8);
  return VAR_8;
 }

 FUNC_9(VAR_3);
 FUNC_14(VAR_6);
 FUNC_0(VAR_0, &VAR_5->flags);

 FUNC_11(VAR_4);
 VAR_8 = FUNC_3(VAR_5);
 if (VAR_8) {
  FUNC_13(VAR_6);
  FUNC_4(VAR_3);
 }
 VAR_5->hw->phys_init(VAR_5);
 FUNC_12(VAR_4);
 FUNC_0(VAR_1, &VAR_5->flags);

 return 0;
}
