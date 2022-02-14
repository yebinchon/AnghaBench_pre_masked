
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct aq_nic_s {int irqvecs; TYPE_1__* aq_hw; struct pci_dev* pdev; int aq_hw_ops; int fwreq_mutex; } ;
typedef unsigned int resource_size_t ;
struct TYPE_7__ {TYPE_3__* aq_hw_caps; } ;
struct TYPE_6__ {int msix_irqs; } ;
struct TYPE_5__ {int mmio; TYPE_4__* aq_nic_cfg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct net_device*,int *) ;
 int FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 () ;
 int FUNC_3 (struct aq_nic_s*) ;
 int FUNC_4 (struct aq_nic_s*) ;
 TYPE_4__* FUNC_5 (struct aq_nic_s*) ;
 int FUNC_6 (struct aq_nic_s*) ;
 int FUNC_7 (struct aq_nic_s*) ;
 int FUNC_8 (struct aq_nic_s*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*,int *,TYPE_3__**) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (unsigned int,unsigned int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (TYPE_1__*) ;
 TYPE_1__* FUNC_15 (int,int ) ;
 int FUNC_16 (int,int ) ;
 int FUNC_17 (int *) ;
 struct aq_nic_s* FUNC_18 (struct net_device*) ;
 int FUNC_19 () ;
 int FUNC_20 (struct pci_dev*,int,int,int) ;
 int FUNC_21 (struct pci_dev*) ;
 int FUNC_22 (struct pci_dev*) ;
 int FUNC_23 (struct pci_dev*) ;
 int FUNC_24 (struct pci_dev*,int) ;
 unsigned int FUNC_25 (struct pci_dev*,int) ;
 unsigned int FUNC_26 (struct pci_dev*,int) ;
 int FUNC_27 (struct pci_dev*,struct aq_nic_s*) ;

__attribute__((used)) static int FUNC_28(struct pci_dev *VAR_9,
   const struct pci_device_id *VAR_10)
{
 struct aq_nic_s *VAR_11;
 int VAR_12;
 struct net_device *VAR_13;
 resource_size_t VAR_14;
 u32 VAR_15;
 u32 VAR_16;

 VAR_12 = FUNC_22(VAR_9);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_9(VAR_9);
 if (VAR_12)
  goto err_pci_func;

 VAR_13 = FUNC_2();
 if (!VAR_13) {
  VAR_12 = -VAR_3;
  goto err_ndev;
 }

 VAR_11 = FUNC_18(VAR_13);
 VAR_11->pdev = VAR_9;
 FUNC_0(VAR_13, &VAR_9->dev);
 FUNC_27(VAR_9, VAR_11);

 FUNC_17(&VAR_11->fwreq_mutex);

 VAR_12 = FUNC_10(VAR_9, &VAR_11->aq_hw_ops,
     &FUNC_5(VAR_11)->aq_hw_caps);
 if (VAR_12)
  goto err_ioremap;

 VAR_11->aq_hw = FUNC_15(sizeof(*VAR_11->aq_hw), VAR_4);
 if (!VAR_11->aq_hw) {
  VAR_12 = -VAR_3;
  goto err_ioremap;
 }
 VAR_11->aq_hw->aq_nic_cfg = FUNC_5(VAR_11);

 for (VAR_15 = 0; VAR_15 < 4; ++VAR_15) {
  if (VAR_5 & FUNC_24(VAR_9, VAR_15)) {
   resource_size_t VAR_17;

   VAR_14 = FUNC_26(VAR_9, VAR_15);
   if (VAR_14 == 0U) {
    VAR_12 = -VAR_2;
    goto err_free_aq_hw;
   }

   VAR_17 = FUNC_25(VAR_9, VAR_15);
   if ((VAR_17 <= 24 )) {
    VAR_12 = -VAR_2;
    goto err_free_aq_hw;
   }

   VAR_11->aq_hw->mmio = FUNC_12(VAR_14, VAR_17);
   if (!VAR_11->aq_hw->mmio) {
    VAR_12 = -VAR_2;
    goto err_free_aq_hw;
   }
   break;
  }
 }

 if (VAR_15 == 4) {
  VAR_12 = -VAR_2;
  goto err_free_aq_hw;
 }

 VAR_16 = FUNC_16((u8)VAR_0,
        FUNC_5(VAR_11)->aq_hw_caps->msix_irqs);
 VAR_16 = FUNC_16(VAR_16, FUNC_19());
 VAR_16 += VAR_1;


 VAR_12 = FUNC_20(VAR_11->pdev, 1, VAR_16,
        VAR_8 | VAR_7 |
        VAR_6);

 if (VAR_12 < 0)
  goto err_hwinit;
 VAR_16 = VAR_12;

 VAR_11->irqvecs = VAR_16;


 FUNC_3(VAR_11);

 FUNC_6(VAR_11);

 VAR_12 = FUNC_7(VAR_11);
 if (VAR_12 < 0)
  goto err_register;

 FUNC_1(VAR_13);

 return 0;

err_register:
 FUNC_4(VAR_11);
 FUNC_8(VAR_11);
err_hwinit:
 FUNC_13(VAR_11->aq_hw->mmio);
err_free_aq_hw:
 FUNC_14(VAR_11->aq_hw);
err_ioremap:
 FUNC_11(VAR_13);
err_ndev:
 FUNC_23(VAR_9);
err_pci_func:
 FUNC_21(VAR_9);
 return VAR_12;
}
