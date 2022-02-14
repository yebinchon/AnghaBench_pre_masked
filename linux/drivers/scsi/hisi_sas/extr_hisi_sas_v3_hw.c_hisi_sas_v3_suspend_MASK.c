
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_ha_struct {struct hisi_hba* lldd_ha; } ;
struct pci_dev {int pm_cap; } ;
struct hisi_hba {int flags; int wq; struct Scsi_Host* shost; struct device* dev; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
typedef int pm_message_t ;
typedef int pci_power_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,char*,int ) ;
 int FUNC_3 (struct hisi_hba*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct hisi_hba*) ;
 int FUNC_6 (struct hisi_hba*) ;
 int FUNC_7 (struct pci_dev*,int ) ;
 int FUNC_8 (struct pci_dev*) ;
 struct sas_ha_struct* FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*,int ) ;
 int FUNC_12 (struct sas_ha_struct*) ;
 int FUNC_13 (struct Scsi_Host*) ;
 int FUNC_14 (struct Scsi_Host*) ;
 int FUNC_15 (int ,int *) ;
 scalar_t__ FUNC_16 (int ,int *) ;

__attribute__((used)) static int FUNC_17(struct pci_dev *VAR_3, pm_message_t VAR_4)
{
 struct sas_ha_struct *VAR_5 = FUNC_9(VAR_3);
 struct hisi_hba *VAR_6 = VAR_5->lldd_ha;
 struct device *VAR_7 = VAR_6->dev;
 struct Scsi_Host *VAR_8 = VAR_6->shost;
 pci_power_t VAR_9;
 int VAR_10;

 if (!VAR_3->pm_cap) {
  FUNC_1(VAR_7, "PCI PM not supported\n");
  return -VAR_0;
 }

 if (FUNC_16(VAR_2, &VAR_6->flags))
  return -1;

 FUNC_13(VAR_8);
 FUNC_15(VAR_1, &VAR_6->flags);
 FUNC_4(VAR_6->wq);

 VAR_10 = FUNC_3(VAR_6);
 if (VAR_10) {
  FUNC_1(VAR_7, "PM suspend: disable host failed rc=%d\n", VAR_10);
  FUNC_0(VAR_1, &VAR_6->flags);
  FUNC_0(VAR_2, &VAR_6->flags);
  FUNC_14(VAR_8);
  return VAR_10;
 }

 FUNC_5(VAR_6);

 VAR_9 = FUNC_7(VAR_3, VAR_4);
 FUNC_2(VAR_7, "entering operating state [D%d]\n",
   VAR_9);
 FUNC_10(VAR_3);
 FUNC_8(VAR_3);
 FUNC_11(VAR_3, VAR_9);

 FUNC_6(VAR_6);

 FUNC_12(VAR_5);
 return 0;
}
