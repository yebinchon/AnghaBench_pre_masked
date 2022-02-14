
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_ha_struct {struct hisi_hba* lldd_ha; } ;
struct pci_dev {int dummy; } ;
struct hisi_hba {struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct hisi_hba*) ;
 int FUNC_3 (struct hisi_hba*) ;
 int FUNC_4 (struct hisi_hba*) ;
 struct sas_ha_struct* FUNC_5 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_0)
{
 struct sas_ha_struct *VAR_1 = FUNC_5(VAR_0);
 struct hisi_hba *VAR_2 = VAR_1->lldd_ha;
 struct device *VAR_3 = VAR_2->dev;
 int VAR_4;

 FUNC_3(VAR_2);

 VAR_4 = FUNC_4(VAR_2);
 if (VAR_4) {
  FUNC_0(VAR_3, "FLR: hw init failed rc=%d\n", VAR_4);
  return;
 }

 FUNC_2(VAR_2);
 FUNC_1(VAR_3, "FLR done\n");
}
