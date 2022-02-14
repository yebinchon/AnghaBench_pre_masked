
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int freq; } ;
struct TYPE_4__ {TYPE_1__ clock; } ;
struct sja1000_priv {int * reg_base; int cdr; int ocr; TYPE_2__ can; int post_irq; int write_reg; int read_reg; int irq_flags; struct ems_pci_card* priv; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {scalar_t__ vendor; int dev; int irq; } ;
struct net_device {int dev_id; int irq; } ;
struct ems_pci_card {int version; scalar_t__ channels; int * conf_addr; int * base_addr; struct net_device** net_dev; struct pci_dev* pci_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (struct net_device*,int *) ;
 struct net_device* FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*,int,int *,int ) ;
 int FUNC_4 (struct ems_pci_card*) ;
 scalar_t__ FUNC_5 (struct sja1000_priv*) ;
 int FUNC_6 (struct pci_dev*) ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_7 (struct ems_pci_card*,int) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_8 (struct net_device*) ;
 struct ems_pci_card* FUNC_9 (int,int ) ;
 struct sja1000_priv* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct pci_dev*) ;
 scalar_t__ FUNC_12 (struct pci_dev*) ;
 void* FUNC_13 (struct pci_dev*,int,int) ;
 int FUNC_14 (struct pci_dev*,struct ems_pci_card*) ;
 int FUNC_15 (struct net_device*) ;
 int FUNC_16 (int,int *) ;

__attribute__((used)) static int FUNC_17(struct pci_dev *VAR_30,
       const struct pci_device_id *VAR_31)
{
 struct sja1000_priv *VAR_32;
 struct net_device *VAR_33;
 struct ems_pci_card *VAR_34;
 int VAR_35, VAR_36, VAR_37;
 int VAR_38, VAR_39;


 if (FUNC_12(VAR_30) < 0) {
  FUNC_2(&VAR_30->dev, "Enabling PCI device failed\n");
  return -VAR_12;
 }


 VAR_34 = FUNC_9(sizeof(struct ems_pci_card), VAR_14);
 if (VAR_34 == ((void*)0)) {
  FUNC_11(VAR_30);
  return -VAR_13;
 }

 FUNC_14(VAR_30, VAR_34);

 VAR_34->pci_dev = VAR_30;

 VAR_34->channels = 0;

 if (VAR_30->vendor == VAR_16) {
  VAR_34->version = 2;
  VAR_35 = VAR_11;
  VAR_37 = VAR_9;
  VAR_36 = VAR_10;
 } else {
  VAR_34->version = 1;
  VAR_35 = VAR_8;
  VAR_37 = VAR_6;
  VAR_36 = VAR_7;
 }


 VAR_34->conf_addr = FUNC_13(VAR_30, 0, VAR_36);
 if (VAR_34->conf_addr == ((void*)0)) {
  VAR_38 = -VAR_13;
  goto failure_cleanup;
 }

 VAR_34->base_addr = FUNC_13(VAR_30, VAR_37, VAR_0);
 if (VAR_34->base_addr == ((void*)0)) {
  VAR_38 = -VAR_13;
  goto failure_cleanup;
 }

 if (VAR_34->version == 1) {

  FUNC_16(VAR_21, VAR_34->conf_addr + VAR_20);


  if (FUNC_7(VAR_34, 0) != 0x55 ||
      FUNC_7(VAR_34, 1) != 0xAA ||
      FUNC_7(VAR_34, 2) != 0x01 ||
      FUNC_7(VAR_34, 3) != 0xCB ||
      FUNC_7(VAR_34, 4) != 0x11) {
   FUNC_2(&VAR_30->dev,
    "Not EMS Dr. Thomas Wuensche interface\n");
   VAR_38 = -VAR_12;
   goto failure_cleanup;
  }
 }

 FUNC_4(VAR_34);


 for (VAR_39 = 0; VAR_39 < VAR_35; VAR_39++) {
  VAR_33 = FUNC_1(0);
  if (VAR_33 == ((void*)0)) {
   VAR_38 = -VAR_13;
   goto failure_cleanup;
  }

  VAR_34->net_dev[VAR_39] = VAR_33;
  VAR_32 = FUNC_10(VAR_33);
  VAR_32->priv = VAR_34;
  VAR_32->irq_flags = VAR_15;

  VAR_33->irq = VAR_30->irq;
  VAR_32->reg_base = VAR_34->base_addr + VAR_1
     + (VAR_39 * VAR_3);
  if (VAR_34->version == 1) {
   VAR_32->read_reg = VAR_25;
   VAR_32->write_reg = VAR_26;
   VAR_32->post_irq = VAR_24;
  } else {
   VAR_32->read_reg = VAR_28;
   VAR_32->write_reg = VAR_29;
   VAR_32->post_irq = VAR_27;
  }


  if (FUNC_5(VAR_32)) {
   VAR_32->can.clock.freq = VAR_2;
   VAR_32->ocr = VAR_5;
   VAR_32->cdr = VAR_4;

   FUNC_0(VAR_33, &VAR_30->dev);
   VAR_33->dev_id = VAR_39;

   if (VAR_34->version == 1)

    FUNC_16(VAR_19 | VAR_18,
           VAR_34->conf_addr + VAR_17);
   else

    FUNC_16(VAR_23,
           VAR_34->conf_addr + VAR_22);


   VAR_38 = FUNC_15(VAR_33);
   if (VAR_38) {
    FUNC_2(&VAR_30->dev, "Registering device failed "
       "(err=%d)\n", VAR_38);
    FUNC_8(VAR_33);
    goto failure_cleanup;
   }

   VAR_34->channels++;

   FUNC_3(&VAR_30->dev, "Channel #%d at 0x%p, irq %d\n",
     VAR_39 + 1, VAR_32->reg_base, VAR_33->irq);
  } else {
   FUNC_8(VAR_33);
  }
 }

 return 0;

failure_cleanup:
 FUNC_2(&VAR_30->dev, "Error: %d. Cleaning Up.\n", VAR_38);

 FUNC_6(VAR_30);

 return VAR_38;
}
