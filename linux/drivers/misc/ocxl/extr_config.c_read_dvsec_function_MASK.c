
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dev; } ;
struct ocxl_fn_config {int dvsec_function_pos; int max_afu_index; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (struct pci_dev*,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_6(struct pci_dev *VAR_3, struct ocxl_fn_config *VAR_4)
{
 int VAR_5, VAR_6;
 u32 VAR_7;

 VAR_5 = FUNC_4(VAR_3, VAR_1);
 if (!VAR_5) {
  FUNC_3(&VAR_3->dev, "Can't find function DVSEC\n");
  return -VAR_0;
 }
 VAR_4->dvsec_function_pos = VAR_5;

 FUNC_5(VAR_3, VAR_5 + VAR_2, &VAR_7);
 VAR_6 = FUNC_0(VAR_7, 31);
 if (!VAR_6) {
  VAR_4->max_afu_index = -1;
  FUNC_2(&VAR_3->dev, "Function doesn't define any AFU\n");
  goto out;
 }
 VAR_4->max_afu_index = FUNC_1(VAR_7, 24, 29);

out:
 FUNC_2(&VAR_3->dev, "Function DVSEC:\n");
 FUNC_2(&VAR_3->dev, "  Max AFU index = %d\n", VAR_4->max_afu_index);
 return 0;
}
