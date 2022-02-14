
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct myrs_hba {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct myrs_hba*) ;
 int FUNC_2 (struct pci_dev*,struct myrs_hba*) ;
 int FUNC_3 (struct myrs_hba*) ;
 struct myrs_hba* FUNC_4 (struct pci_dev*,struct pci_device_id const*) ;
 int FUNC_5 (struct myrs_hba*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(struct pci_dev *VAR_2, const struct pci_device_id *VAR_3)
{
 struct myrs_hba *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_4(VAR_2, VAR_3);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_5(VAR_4);
 if (VAR_5 < 0) {
  FUNC_1(VAR_4);
  return VAR_5;
 }

 if (!FUNC_2(VAR_2, VAR_4)) {
  VAR_5 = -VAR_1;
  goto failed;
 }

 VAR_5 = FUNC_6(VAR_4->host, &VAR_2->dev);
 if (VAR_5) {
  FUNC_0(&VAR_2->dev, "scsi_add_host failed with %d\n", VAR_5);
  FUNC_3(VAR_4);
  goto failed;
 }
 FUNC_7(VAR_4->host);
 return 0;
failed:
 FUNC_1(VAR_4);
 return VAR_5;
}
