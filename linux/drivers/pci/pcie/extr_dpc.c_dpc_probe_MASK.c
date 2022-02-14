
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct device {int dummy; } ;
struct pcie_device {int irq; struct device device; struct pci_dev* port; } ;
struct pci_dev {int dummy; } ;
struct dpc_dev {int rp_extensions; int rp_log_size; scalar_t__ cap_pos; struct pcie_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct dpc_dev* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (struct device*,int ,int ,int ,int ,char*,struct dpc_dev*) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (struct pci_dev*,int ,int) ;
 int FUNC_4 (struct pci_dev*,char*,int) ;
 scalar_t__ FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (struct pci_dev*,char*,int,int ,int ,int ,int,int ) ;
 int FUNC_7 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_8 (struct pci_dev*,char*,int ,int) ;
 int FUNC_9 (struct pci_dev*,scalar_t__,int) ;
 scalar_t__ FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pcie_device*,struct dpc_dev*) ;

__attribute__((used)) static int FUNC_12(struct pcie_device *VAR_17)
{
 struct dpc_dev *VAR_18;
 struct pci_dev *VAR_19 = VAR_17->port;
 struct device *VAR_20 = &VAR_17->device;
 int VAR_21;
 u16 VAR_22, VAR_23;

 if (FUNC_10(VAR_19))
  return -VAR_1;

 VAR_18 = FUNC_1(VAR_20, sizeof(*VAR_18), VAR_2);
 if (!VAR_18)
  return -VAR_0;

 VAR_18->cap_pos = FUNC_5(VAR_19, VAR_14);
 VAR_18->dev = VAR_17;
 FUNC_11(VAR_17, VAR_18);

 VAR_21 = FUNC_2(VAR_20, VAR_17->irq, VAR_16,
        VAR_15, VAR_3,
        "pcie-dpc", VAR_18);
 if (VAR_21) {
  FUNC_8(VAR_19, "request IRQ%d failed: %d\n", VAR_17->irq,
    VAR_21);
  return VAR_21;
 }

 FUNC_7(VAR_19, VAR_18->cap_pos + VAR_4, &VAR_23);
 FUNC_7(VAR_19, VAR_18->cap_pos + VAR_9, &VAR_22);

 VAR_18->rp_extensions = (VAR_23 & VAR_7);
 if (VAR_18->rp_extensions) {
  VAR_18->rp_log_size = (VAR_23 & VAR_13) >> 8;
  if (VAR_18->rp_log_size < 4 || VAR_18->rp_log_size > 9) {
   FUNC_4(VAR_19, "RP PIO log size %u is invalid\n",
    VAR_18->rp_log_size);
   VAR_18->rp_log_size = 0;
  }
 }

 VAR_22 = (VAR_22 & 0xfff4) | VAR_10 | VAR_11;
 FUNC_9(VAR_19, VAR_18->cap_pos + VAR_9, VAR_22);

 FUNC_6(VAR_19, "error containment capabilities: Int Msg #%d, RPExt%c PoisonedTLP%c SwTrigger%c RP PIO Log %d, DL_ActiveErr%c\n",
   VAR_23 & VAR_12, FUNC_0(VAR_23, VAR_7),
   FUNC_0(VAR_23, VAR_6),
   FUNC_0(VAR_23, VAR_8), VAR_18->rp_log_size,
   FUNC_0(VAR_23, VAR_5));

 FUNC_3(VAR_19, VAR_14, sizeof(u16));
 return VAR_21;
}
