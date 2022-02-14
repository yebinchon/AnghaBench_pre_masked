
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct ocxl_fn_config {scalar_t__ max_afu_index; int dvsec_afu_info_pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct pci_dev*,int ) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_2, struct ocxl_fn_config *VAR_3)
{
 int VAR_4;

 if (VAR_3->max_afu_index < 0) {
  VAR_3->dvsec_afu_info_pos = -1;
  return 0;
 }

 VAR_4 = FUNC_1(VAR_2, VAR_1);
 if (!VAR_4) {
  FUNC_0(&VAR_2->dev, "Can't find AFU information DVSEC\n");
  return -VAR_0;
 }
 VAR_3->dvsec_afu_info_pos = VAR_4;
 return 0;
}
