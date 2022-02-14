
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct pci_device_id {int dummy; } ;
struct device {int dummy; } ;
struct pci_dev {struct device dev; } ;
struct bgx {int bgx_id; int max_lmac; int is_rgx; int is_dlm; scalar_t__ lmac_count; int reg_base; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct bgx*) ;
 int FUNC_1 (struct bgx*) ;
 int FUNC_2 (struct bgx*) ;
 int FUNC_3 (struct bgx*,scalar_t__) ;
 int FUNC_4 (struct bgx*,scalar_t__) ;
 struct bgx** VAR_12 ;
 int FUNC_5 (struct device*,char*,...) ;
 struct bgx* FUNC_6 (struct device*,int,int ) ;
 int VAR_13 ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*,int ,scalar_t__*) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*,int ) ;
 int FUNC_13 (struct pci_dev*,int ) ;
 int FUNC_14 (struct pci_dev*,struct bgx*) ;
 int FUNC_15 (struct pci_dev*,int ,int ) ;
 int FUNC_16 (struct pci_dev*) ;
 int FUNC_17 () ;

__attribute__((used)) static int FUNC_18(struct pci_dev *VAR_14, const struct pci_device_id *VAR_15)
{
 int VAR_16;
 struct device *VAR_17 = &VAR_14->dev;
 struct bgx *VAR_18 = ((void*)0);
 u8 VAR_19;
 u16 VAR_20;

 VAR_18 = FUNC_6(VAR_17, sizeof(*VAR_18), VAR_3);
 if (!VAR_18)
  return -VAR_2;
 VAR_18->pdev = VAR_14;

 FUNC_14(VAR_14, VAR_18);

 VAR_16 = FUNC_9(VAR_14);
 if (VAR_16) {
  FUNC_5(VAR_17, "Failed to enable PCI device\n");
  FUNC_14(VAR_14, ((void*)0));
  return VAR_16;
 }

 VAR_16 = FUNC_12(VAR_14, VAR_1);
 if (VAR_16) {
  FUNC_5(VAR_17, "PCI request regions failed 0x%x\n", VAR_16);
  goto err_disable_device;
 }


 VAR_18->reg_base = FUNC_15(VAR_14, VAR_6, 0);
 if (!VAR_18->reg_base) {
  FUNC_5(VAR_17, "BGX: Cannot map CSR memory space, aborting\n");
  VAR_16 = -VAR_2;
  goto err_release_regions;
 }

 FUNC_16(VAR_14);

 FUNC_10(VAR_14, VAR_7, &VAR_20);
 if (VAR_20 != VAR_8) {
  VAR_18->bgx_id = (FUNC_13(VAR_14,
   VAR_6) >> 24) & VAR_0;
  VAR_18->bgx_id += FUNC_7(VAR_14) * VAR_13;
  VAR_18->max_lmac = VAR_5;
  VAR_12[VAR_18->bgx_id] = VAR_18;
 } else {
  VAR_18->is_rgx = 1;
  VAR_18->max_lmac = 1;
  VAR_18->bgx_id = VAR_4 - 1;
  VAR_12[VAR_18->bgx_id] = VAR_18;
  FUNC_17();
 }




 FUNC_10(VAR_14, VAR_9, &VAR_20);
 if ((VAR_20 == VAR_10) ||
     ((VAR_20 == VAR_11) && (VAR_18->bgx_id == 2)))
  VAR_18->is_dlm = 1;

 FUNC_0(VAR_18);

 VAR_16 = FUNC_2(VAR_18);
 if (VAR_16)
  goto err_enable;

 FUNC_1(VAR_18);


 for (VAR_19 = 0; VAR_19 < VAR_18->lmac_count; VAR_19++) {
  VAR_16 = FUNC_4(VAR_18, VAR_19);
  if (VAR_16) {
   FUNC_5(VAR_17, "BGX%d failed to enable lmac%d\n",
    VAR_18->bgx_id, VAR_19);
   while (VAR_19)
    FUNC_3(VAR_18, --VAR_19);
   goto err_enable;
  }
 }

 return 0;

err_enable:
 VAR_12[VAR_18->bgx_id] = ((void*)0);
err_release_regions:
 FUNC_11(VAR_14);
err_disable_device:
 FUNC_8(VAR_14);
 FUNC_14(VAR_14, ((void*)0));
 return VAR_16;
}
