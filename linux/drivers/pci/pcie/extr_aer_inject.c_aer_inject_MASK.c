
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pcie_device {int irq; struct pci_dev* port; } ;
struct pci_dev {int aer_cap; unsigned int devfn; TYPE_1__* bus; } ;
struct device {int dummy; } ;
struct aer_error_inj {int bus; int cor_status; int uncor_status; int header_log3; int header_log2; int header_log1; int header_log0; int domain; int fn; int dev; } ;
struct aer_error {int uncor_status; int cor_status; int root_status; int source_id; int list; int header_log3; int header_log2; int header_log1; int header_log0; } ;
struct TYPE_3__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 struct aer_error* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct aer_error*,int ,int,unsigned int,int) ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct pcie_device*) ;
 int VAR_18 ;
 int FUNC_5 (struct aer_error*) ;
 struct aer_error* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (struct pci_dev*,char*) ;
 struct pci_dev* FUNC_14 (int ,int,unsigned int) ;
 int FUNC_15 (struct pci_dev*,char*,int,int,int ) ;
 int FUNC_16 (struct pci_dev*) ;
 int FUNC_17 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_18 (struct pci_dev*,char*) ;
 int FUNC_19 (struct pci_dev*,scalar_t__,int) ;
 struct pci_dev* FUNC_20 (struct pci_dev*) ;
 struct device* FUNC_21 (struct pci_dev*,int ) ;
 int FUNC_22 (int *,unsigned long) ;
 int FUNC_23 (int *,unsigned long) ;
 struct pcie_device* FUNC_24 (struct device*) ;

__attribute__((used)) static int FUNC_25(struct aer_error_inj *VAR_19)
{
 struct aer_error *VAR_20, *VAR_21;
 struct aer_error *VAR_22 = ((void*)0), *VAR_23 = ((void*)0);
 struct pci_dev *VAR_24, *VAR_25;
 struct pcie_device *VAR_26;
 struct device *VAR_27;
 unsigned long VAR_28;
 unsigned int VAR_29 = FUNC_0(VAR_19->dev, VAR_19->fn);
 int VAR_30, VAR_31;
 u32 VAR_32, VAR_33, VAR_34, VAR_35 = 0, VAR_36 = 0;
 int VAR_37 = 0;

 VAR_24 = FUNC_14(VAR_19->domain, VAR_19->bus, VAR_29);
 if (!VAR_24)
  return -VAR_1;
 VAR_25 = FUNC_20(VAR_24);
 if (!VAR_25) {
  FUNC_13(VAR_24, "Root port not found\n");
  VAR_37 = -VAR_1;
  goto out_put;
 }

 VAR_30 = VAR_24->aer_cap;
 if (!VAR_30) {
  FUNC_13(VAR_24, "Device doesn't support AER\n");
  VAR_37 = -VAR_3;
  goto out_put;
 }
 FUNC_17(VAR_24, VAR_30 + VAR_15, &VAR_32);
 FUNC_17(VAR_24, VAR_30 + VAR_6, &VAR_33);
 FUNC_17(VAR_24, VAR_30 + VAR_14,
         &VAR_34);

 VAR_31 = VAR_25->aer_cap;
 if (!VAR_31) {
  FUNC_13(VAR_25, "Root port doesn't support AER\n");
  VAR_37 = -VAR_3;
  goto out_put;
 }

 VAR_22 = FUNC_6(sizeof(struct aer_error), VAR_4);
 if (!VAR_22) {
  VAR_37 = -VAR_2;
  goto out_put;
 }
 VAR_23 = FUNC_6(sizeof(struct aer_error), VAR_4);
 if (!VAR_23) {
  VAR_37 = -VAR_2;
  goto out_put;
 }

 if (VAR_16) {
  VAR_35 = VAR_33;
  VAR_33 &= !(VAR_19->cor_status);
  FUNC_19(VAR_24, VAR_30 + VAR_6,
           VAR_33);

  VAR_36 = VAR_34;
  VAR_34 &= !(VAR_19->uncor_status);
  FUNC_19(VAR_24, VAR_30 + VAR_14,
           VAR_34);
 }

 FUNC_22(&VAR_18, VAR_28);

 VAR_20 = FUNC_1(VAR_24);
 if (!VAR_20) {
  VAR_20 = VAR_22;
  VAR_22 = ((void*)0);
  FUNC_2(VAR_20, VAR_19->domain, VAR_19->bus, VAR_29,
          VAR_30);
  FUNC_7(&VAR_20->list, &VAR_17);
 }
 VAR_20->uncor_status |= VAR_19->uncor_status;
 VAR_20->cor_status |= VAR_19->cor_status;
 VAR_20->header_log0 = VAR_19->header_log0;
 VAR_20->header_log1 = VAR_19->header_log1;
 VAR_20->header_log2 = VAR_19->header_log2;
 VAR_20->header_log3 = VAR_19->header_log3;

 if (!VAR_16 && VAR_19->cor_status &&
     !(VAR_19->cor_status & ~VAR_33)) {
  VAR_37 = -VAR_0;
  FUNC_18(VAR_24, "The correctable error(s) is masked by device\n");
  FUNC_23(&VAR_18, VAR_28);
  goto out_put;
 }
 if (!VAR_16 && VAR_19->uncor_status &&
     !(VAR_19->uncor_status & ~VAR_34)) {
  VAR_37 = -VAR_0;
  FUNC_18(VAR_24, "The uncorrectable error(s) is masked by device\n");
  FUNC_23(&VAR_18, VAR_28);
  goto out_put;
 }

 VAR_21 = FUNC_1(VAR_25);
 if (!VAR_21) {
  VAR_21 = VAR_23;
  VAR_23 = ((void*)0);
  FUNC_2(VAR_21, FUNC_12(VAR_25->bus),
          VAR_25->bus->number, VAR_25->devfn,
          VAR_31);
  FUNC_7(&VAR_21->list, &VAR_17);
 }
 if (VAR_19->cor_status) {
  if (VAR_21->root_status & VAR_7)
   VAR_21->root_status |= VAR_10;
  else
   VAR_21->root_status |= VAR_7;
  VAR_21->source_id &= 0xffff0000;
  VAR_21->source_id |= (VAR_19->bus << 8) | VAR_29;
 }
 if (VAR_19->uncor_status) {
  if (VAR_21->root_status & VAR_13)
   VAR_21->root_status |= VAR_11;
  if (VAR_32 & VAR_19->uncor_status) {
   VAR_21->root_status |= VAR_8;
   if (!(VAR_21->root_status & VAR_13))
    VAR_21->root_status |= VAR_9;
  } else
   VAR_21->root_status |= VAR_12;
  VAR_21->root_status |= VAR_13;
  VAR_21->source_id &= 0x0000ffff;
  VAR_21->source_id |= ((VAR_19->bus << 8) | VAR_29) << 16;
 }
 FUNC_23(&VAR_18, VAR_28);

 if (VAR_16) {
  FUNC_19(VAR_24, VAR_30 + VAR_6,
           VAR_35);
  FUNC_19(VAR_24, VAR_30 + VAR_14,
           VAR_36);
 }

 VAR_37 = FUNC_10(VAR_24->bus);
 if (VAR_37)
  goto out_put;
 VAR_37 = FUNC_10(VAR_25->bus);
 if (VAR_37)
  goto out_put;

 VAR_27 = FUNC_21(VAR_25, VAR_5);
 if (VAR_27) {
  VAR_26 = FUNC_24(VAR_27);
  if (!FUNC_4(VAR_26)) {
   FUNC_18(VAR_26->port, "AER service is not initialized\n");
   VAR_37 = -VAR_3;
   goto out_put;
  }
  FUNC_15(VAR_26->port, "Injecting errors %08x/%08x into device %s\n",
    VAR_19->cor_status, VAR_19->uncor_status, FUNC_16(VAR_24));
  FUNC_8();
  FUNC_3(VAR_26->irq);
  FUNC_9();
 } else {
  FUNC_13(VAR_25, "AER device not found\n");
  VAR_37 = -VAR_1;
 }
out_put:
 FUNC_5(VAR_22);
 FUNC_5(VAR_23);
 FUNC_11(VAR_24);
 return VAR_37;
}
