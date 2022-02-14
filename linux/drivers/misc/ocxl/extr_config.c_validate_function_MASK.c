
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct ocxl_fn_config {int max_pasid_log; scalar_t__ max_afu_index; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static int FUNC_1(struct pci_dev *VAR_2, struct ocxl_fn_config *VAR_3)
{
 if (VAR_3->max_pasid_log == -1 && VAR_3->max_afu_index >= 0) {
  FUNC_0(&VAR_2->dev,
   "AFUs are defined but no PASIDs are requested\n");
  return -VAR_0;
 }

 if (VAR_3->max_afu_index > VAR_1) {
  FUNC_0(&VAR_2->dev,
   "Max AFU index out of architectural limit (%d vs %d)\n",
   VAR_3->max_afu_index, VAR_1);
  return -VAR_0;
 }
 return 0;
}
