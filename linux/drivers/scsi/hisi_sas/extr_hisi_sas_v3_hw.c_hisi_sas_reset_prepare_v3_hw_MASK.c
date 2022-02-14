
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_ha_struct {struct hisi_hba* lldd_ha; } ;
struct pci_dev {int dummy; } ;
struct hisi_hba {int flags; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct hisi_hba*) ;
 int FUNC_3 (struct hisi_hba*) ;
 struct sas_ha_struct* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_1)
{
 struct sas_ha_struct *VAR_2 = FUNC_4(VAR_1);
 struct hisi_hba *VAR_3 = VAR_2->lldd_ha;
 struct device *VAR_4 = VAR_3->dev;
 int VAR_5;

 FUNC_1(VAR_4, "FLR prepare\n");
 FUNC_5(VAR_0, &VAR_3->flags);
 FUNC_3(VAR_3);

 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5)
  FUNC_0(VAR_4, "FLR: disable host failed rc=%d\n", VAR_5);
}
