
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct ocxl_afu_config {int global_mmio_bar; int pp_mmio_bar; int * name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_2, struct ocxl_afu_config *VAR_3)
{
 int VAR_4;

 if (!VAR_3->name[0]) {
  FUNC_1(&VAR_2->dev, "Empty AFU name\n");
  return -VAR_0;
 }
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (!FUNC_0(VAR_3->name[VAR_4])) {
   FUNC_1(&VAR_2->dev,
    "Invalid character in AFU name\n");
   return -VAR_0;
  }
 }

 if (VAR_3->global_mmio_bar != 0 &&
  VAR_3->global_mmio_bar != 2 &&
  VAR_3->global_mmio_bar != 4) {
  FUNC_1(&VAR_2->dev, "Invalid global MMIO bar number\n");
  return -VAR_0;
 }
 if (VAR_3->pp_mmio_bar != 0 &&
  VAR_3->pp_mmio_bar != 2 &&
  VAR_3->pp_mmio_bar != 4) {
  FUNC_1(&VAR_2->dev, "Invalid per-process MMIO bar number\n");
  return -VAR_0;
 }
 return 0;
}
