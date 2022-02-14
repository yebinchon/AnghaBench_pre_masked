
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct pci_dev {int dev; } ;
struct cxl {int user_image_loaded; int perst_select_user; int perst_loads_image; int slices; int ps_size; int user_irqs; TYPE_1__* native; int base_image; int caia_minor; int caia_major; int psl_rev; int vsec_status; } ;
struct TYPE_2__ {int ps_off; int afu_desc_off; int afu_desc_size; } ;


 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int,int *) ;
 int FUNC_3 (struct pci_dev*,int,int *) ;
 int FUNC_4 (struct pci_dev*,int,int *) ;
 int FUNC_5 (struct pci_dev*,int,int*) ;
 int FUNC_6 (struct pci_dev*,int,scalar_t__*) ;
 int FUNC_7 (struct pci_dev*,int,int*) ;
 int FUNC_8 (struct pci_dev*,int,int *) ;
 int FUNC_9 (struct pci_dev*,int,int*) ;
 int FUNC_10 (struct pci_dev*,int,int*) ;
 int FUNC_11 (struct pci_dev*,int,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_15(struct cxl *VAR_5, struct pci_dev *VAR_6)
{
 int VAR_7;
 u32 VAR_8, VAR_9;
 u32 VAR_10, VAR_11;
 u16 VAR_12;
 u8 VAR_13;

 if (!(VAR_7 = FUNC_13(VAR_6))) {
  FUNC_12(&VAR_6->dev, "ABORTING: CXL VSEC not found!\n");
  return -VAR_4;
 }

 FUNC_6(VAR_6, VAR_7, &VAR_12);
 if (VAR_12 < VAR_0) {
  FUNC_12(&VAR_6->dev, "ABORTING: CXL VSEC too short\n");
  return -VAR_3;
 }

 FUNC_11(VAR_6, VAR_7, &VAR_5->vsec_status);
 FUNC_8(VAR_6, VAR_7, &VAR_5->psl_rev);
 FUNC_3(VAR_6, VAR_7, &VAR_5->caia_major);
 FUNC_4(VAR_6, VAR_7, &VAR_5->caia_minor);
 FUNC_2(VAR_6, VAR_7, &VAR_5->base_image);
 FUNC_5(VAR_6, VAR_7, &VAR_13);
 VAR_5->user_image_loaded = !!(VAR_13 & VAR_2);
 VAR_5->perst_select_user = !!(VAR_13 & VAR_2);
 VAR_5->perst_loads_image = !!(VAR_13 & VAR_1);

 FUNC_7(VAR_6, VAR_7, &VAR_5->slices);
 FUNC_0(VAR_6, VAR_7, &VAR_8);
 FUNC_1(VAR_6, VAR_7, &VAR_9);
 FUNC_9(VAR_6, VAR_7, &VAR_10);
 FUNC_10(VAR_6, VAR_7, &VAR_11);



 VAR_5->native->ps_off = VAR_10 * 64 * 1024;
 VAR_5->ps_size = VAR_11 * 64 * 1024;
 VAR_5->native->afu_desc_off = VAR_8 * 64 * 1024;
 VAR_5->native->afu_desc_size = VAR_9 * 64 * 1024;


 VAR_5->user_irqs = FUNC_14(VAR_6) - 1 - 2*VAR_5->slices;

 return 0;
}
