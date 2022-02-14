
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct Scsi_Host* shost; } ;
struct sas_ha_struct {TYPE_1__ core; struct hisi_hba* lldd_ha; } ;
struct device {int dummy; } ;
struct pci_dev {struct device dev; } ;
struct hisi_hba {int timer; } ;
struct Scsi_Host {int dummy; } ;


 int FUNC_0 (int *) ;
 struct sas_ha_struct* FUNC_1 (struct device*) ;
 int FUNC_2 (struct hisi_hba*) ;
 int FUNC_3 (struct hisi_hba*) ;
 int FUNC_4 (struct hisi_hba*) ;
 int FUNC_5 (struct pci_dev*,struct hisi_hba*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct Scsi_Host*) ;
 int FUNC_9 (struct sas_ha_struct*) ;
 int FUNC_10 (struct Scsi_Host*) ;
 scalar_t__ FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct pci_dev *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;
 struct sas_ha_struct *VAR_2 = FUNC_1(VAR_1);
 struct hisi_hba *VAR_3 = VAR_2->lldd_ha;
 struct Scsi_Host *VAR_4 = VAR_2->core.shost;

 FUNC_2(VAR_3);

 if (FUNC_11(&VAR_3->timer))
  FUNC_0(&VAR_3->timer);

 FUNC_9(VAR_2);
 FUNC_8(VAR_2->core.shost);

 FUNC_5(VAR_0, VAR_3);
 FUNC_4(VAR_3);
 FUNC_7(VAR_0);
 FUNC_6(VAR_0);
 FUNC_3(VAR_3);
 FUNC_10(VAR_4);
}
