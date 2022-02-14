
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct pci_dev {int dev; } ;
struct ocxl_afu_config {int dvsec_afu_control_pos; void* actag_supported; void* pasid_supported_log; int idx; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,int ,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,int *) ;
 int FUNC_4 (struct pci_dev*,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_5(struct pci_dev *VAR_3, struct ocxl_afu_config *VAR_4)
{
 int VAR_5;
 u8 VAR_6;
 u16 VAR_7;

 VAR_5 = FUNC_2(VAR_3, VAR_4->idx);
 if (!VAR_5) {
  FUNC_1(&VAR_3->dev, "Can't find AFU control DVSEC for AFU %d\n",
   VAR_4->idx);
  return -VAR_0;
 }
 VAR_4->dvsec_afu_control_pos = VAR_5;

 FUNC_3(VAR_3, VAR_5 + VAR_2, &VAR_6);
 VAR_4->pasid_supported_log = FUNC_0(VAR_6, 0, 4);

 FUNC_4(VAR_3, VAR_5 + VAR_1, &VAR_7);
 VAR_4->actag_supported = FUNC_0(VAR_7, 0, 11);
 return 0;
}
