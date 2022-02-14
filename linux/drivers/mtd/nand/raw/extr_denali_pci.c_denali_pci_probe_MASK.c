
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {int dev; int irq; } ;
struct denali_controller {int clk_rate; int clk_x_rate; int nbanks; void* reg; void* host; int * dev; int * ecc_caps; int irq; } ;
struct TYPE_4__ {int options; } ;
struct TYPE_5__ {TYPE_1__ ecc; } ;
struct denali_chip {int nsels; TYPE_3__* sels; TYPE_2__ chip; } ;
typedef scalar_t__ resource_size_t ;
struct TYPE_6__ {int bank; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct denali_controller*,struct denali_chip*) ;
 int FUNC_1 (struct denali_controller*) ;
 int VAR_5 ;
 int FUNC_2 (struct denali_controller*) ;
 int FUNC_3 (int *,char*) ;
 void* FUNC_4 (int *,int,int ) ;
 void* FUNC_5 (scalar_t__,unsigned long) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (struct pci_dev*,int ) ;
 unsigned long FUNC_8 (struct pci_dev*,int) ;
 scalar_t__ FUNC_9 (struct pci_dev*,int) ;
 int FUNC_10 (struct pci_dev*,struct denali_controller*) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*) ;
 int VAR_6 ;
 int FUNC_13 (struct denali_chip*,int ,int) ;

__attribute__((used)) static int FUNC_14(struct pci_dev *VAR_7, const struct pci_device_id *VAR_8)
{
 resource_size_t VAR_9, VAR_10;
 unsigned long VAR_11, VAR_12;
 struct denali_controller *VAR_13;
 struct denali_chip *VAR_14;
 int VAR_15, VAR_16, VAR_17;

 VAR_13 = FUNC_4(&VAR_7->dev, sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 VAR_16 = FUNC_12(VAR_7);
 if (VAR_16) {
  FUNC_3(&VAR_7->dev, "Spectra: pci_enable_device failed.\n");
  return VAR_16;
 }

 if (VAR_8->driver_data == VAR_3) {
  VAR_10 = FUNC_9(VAR_7, 0);
  VAR_12 = FUNC_8(VAR_7, 1);
  VAR_9 = FUNC_9(VAR_7, 1);
  VAR_11 = FUNC_8(VAR_7, 1);
 } else {
  VAR_9 = FUNC_9(VAR_7, 0);
  VAR_11 = FUNC_8(VAR_7, 0);
  VAR_10 = FUNC_9(VAR_7, 1);
  VAR_12 = FUNC_8(VAR_7, 1);
  if (!VAR_12) {
   VAR_10 = VAR_9 + VAR_11;
   VAR_12 = VAR_11;
  }
 }

 FUNC_11(VAR_7);
 VAR_13->dev = &VAR_7->dev;
 VAR_13->irq = VAR_7->irq;
 VAR_13->ecc_caps = &VAR_5;
 VAR_13->clk_rate = 50000000;
 VAR_13->clk_x_rate = 200000000;

 VAR_16 = FUNC_7(VAR_7, VAR_0);
 if (VAR_16) {
  FUNC_3(&VAR_7->dev, "Spectra: Unable to request memory regions\n");
  return VAR_16;
 }

 VAR_13->reg = FUNC_5(VAR_9, VAR_11);
 if (!VAR_13->reg) {
  FUNC_3(&VAR_7->dev, "Spectra: Unable to remap memory region\n");
  return -VAR_1;
 }

 VAR_13->host = FUNC_5(VAR_10, VAR_12);
 if (!VAR_13->host) {
  FUNC_3(&VAR_7->dev, "Spectra: ioremap_nocache failed!");
  VAR_16 = -VAR_1;
  goto out_unmap_reg;
 }

 VAR_16 = FUNC_1(VAR_13);
 if (VAR_16)
  goto out_unmap_host;

 VAR_15 = VAR_13->nbanks;

 VAR_14 = FUNC_4(VAR_13->dev, FUNC_13(VAR_14, VAR_6, VAR_15),
        VAR_2);
 if (!VAR_14) {
  VAR_16 = -VAR_1;
  goto out_remove_denali;
 }

 VAR_14->chip.ecc.options |= VAR_4;

 VAR_14->nsels = VAR_15;

 for (VAR_17 = 0; VAR_17 < VAR_15; VAR_17++)
  VAR_14->sels[VAR_17].bank = VAR_17;

 VAR_16 = FUNC_0(VAR_13, VAR_14);
 if (VAR_16)
  goto out_remove_denali;

 FUNC_10(VAR_7, VAR_13);

 return 0;

out_remove_denali:
 FUNC_2(VAR_13);
out_unmap_host:
 FUNC_6(VAR_13->host);
out_unmap_reg:
 FUNC_6(VAR_13->reg);
 return VAR_16;
}
