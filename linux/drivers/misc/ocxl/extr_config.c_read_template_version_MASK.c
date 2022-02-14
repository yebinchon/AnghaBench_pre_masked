
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct ocxl_fn_config {int dummy; } ;


 void* FUNC_0 (int ,int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct pci_dev*,struct ocxl_fn_config*,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_1, struct ocxl_fn_config *VAR_2,
  u16 *VAR_3, u16 *VAR_4)
{
 u32 VAR_5;
 u8 VAR_6, VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_0, &VAR_5);
 if (VAR_8)
  return VAR_8;

 *VAR_3 = FUNC_0(VAR_5, 16, 31);
 VAR_6 = FUNC_0(VAR_5, 8, 15);
 VAR_7 = FUNC_0(VAR_5, 0, 7);
 *VAR_4 = (VAR_6 << 8) + VAR_7;
 return 0;
}
