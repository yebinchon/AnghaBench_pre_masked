
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct ocxl_fn_config {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct pci_dev*,struct ocxl_fn_config*) ;
 int FUNC_2 (struct pci_dev*,struct ocxl_fn_config*) ;
 int FUNC_3 (struct pci_dev*,struct ocxl_fn_config*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,struct ocxl_fn_config*) ;
 int FUNC_6 (struct pci_dev*,struct ocxl_fn_config*) ;

int FUNC_7(struct pci_dev *VAR_1, struct ocxl_fn_config *VAR_2)
{
 int VAR_3;

 FUNC_5(VAR_1, VAR_2);

 VAR_3 = FUNC_3(VAR_1, VAR_2);
 if (VAR_3) {
  FUNC_0(&VAR_1->dev,
   "Invalid Transaction Layer DVSEC configuration: %d\n",
   VAR_3);
  return -VAR_0;
 }

 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (VAR_3) {
  FUNC_0(&VAR_1->dev,
   "Invalid Function DVSEC configuration: %d\n", VAR_3);
  return -VAR_0;
 }

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3) {
  FUNC_0(&VAR_1->dev, "Invalid AFU configuration: %d\n", VAR_3);
  return -VAR_0;
 }

 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3) {
  FUNC_0(&VAR_1->dev,
   "Invalid vendor specific DVSEC configuration: %d\n",
   VAR_3);
  return -VAR_0;
 }

 VAR_3 = FUNC_6(VAR_1, VAR_2);
 return VAR_3;
}
