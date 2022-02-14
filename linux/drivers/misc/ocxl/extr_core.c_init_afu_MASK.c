
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dummy; } ;
struct ocxl_fn {int afu_list; } ;
struct ocxl_afu {int list; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,struct ocxl_afu*) ;
 struct ocxl_afu* FUNC_1 (struct ocxl_fn*) ;
 int FUNC_2 (struct ocxl_afu*,int ,struct pci_dev*) ;
 int FUNC_3 (struct ocxl_afu*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct ocxl_afu*) ;

__attribute__((used)) static int FUNC_6(struct pci_dev *VAR_1, struct ocxl_fn *VAR_2, u8 VAR_3)
{
 int VAR_4;
 struct ocxl_afu *VAR_5;

 VAR_5 = FUNC_1(VAR_2);
 if (!VAR_5)
  return -VAR_0;

 VAR_4 = FUNC_2(VAR_5, VAR_3, VAR_1);
 if (VAR_4) {
  FUNC_5(VAR_5);
  return VAR_4;
 }

 VAR_4 = FUNC_0(VAR_1, VAR_5);
 if (VAR_4) {
  FUNC_3(VAR_5);
  FUNC_5(VAR_5);
  return VAR_4;
 }

 FUNC_4(&VAR_5->list, &VAR_2->afu_list);

 return 0;
}
