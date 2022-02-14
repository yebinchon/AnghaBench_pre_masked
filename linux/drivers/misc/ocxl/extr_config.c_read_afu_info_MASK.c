
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dev; } ;
struct ocxl_fn_config {int dvsec_afu_info_pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,char*,...) ;
 unsigned long VAR_6 ;
 int FUNC_3 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_4 (struct pci_dev*,scalar_t__,int) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct pci_dev *VAR_7, struct ocxl_fn_config *VAR_8,
   int VAR_9, u32 *VAR_10)
{
 u32 VAR_11;
 unsigned long VAR_12 = VAR_6 + (VAR_2 * VAR_3);
 int VAR_13 = VAR_8->dvsec_afu_info_pos;


 if (FUNC_0(VAR_9, 31)) {
  FUNC_2(&VAR_7->dev, "Invalid offset in AFU info DVSEC\n");
  return -VAR_1;
 }

 FUNC_4(VAR_7, VAR_13 + VAR_5, VAR_9);
 FUNC_3(VAR_7, VAR_13 + VAR_5, &VAR_11);
 while (!FUNC_0(VAR_11, 31)) {
  if (FUNC_5(VAR_6, VAR_12)) {
   FUNC_2(&VAR_7->dev,
    "Timeout while reading AFU info DVSEC (offset=%d)\n",
    VAR_9);
   return -VAR_0;
  }
  FUNC_1();
  FUNC_3(VAR_7, VAR_13 + VAR_5, &VAR_11);
 }
 FUNC_3(VAR_7, VAR_13 + VAR_4, VAR_10);
 return 0;
}
