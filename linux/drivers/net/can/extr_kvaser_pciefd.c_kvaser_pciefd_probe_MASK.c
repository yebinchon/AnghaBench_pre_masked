
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int irq; int dev; } ;
struct kvaser_pciefd {scalar_t__ reg_base; struct pci_dev* pci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 struct kvaser_pciefd* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int ,struct kvaser_pciefd*) ;
 int FUNC_2 (int,scalar_t__) ;
 int VAR_19 ;
 int FUNC_3 (struct kvaser_pciefd*) ;
 int FUNC_4 (struct kvaser_pciefd*) ;
 int FUNC_5 (struct kvaser_pciefd*) ;
 int FUNC_6 (struct kvaser_pciefd*) ;
 int FUNC_7 (struct kvaser_pciefd*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 scalar_t__ FUNC_11 (struct pci_dev*,int ,int ) ;
 int FUNC_12 (struct pci_dev*,scalar_t__) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct pci_dev*,int ) ;
 int FUNC_15 (struct pci_dev*,struct kvaser_pciefd*) ;
 int FUNC_16 (struct pci_dev*) ;
 int FUNC_17 (int ,int ,int ,int ,struct kvaser_pciefd*) ;

__attribute__((used)) static int FUNC_18(struct pci_dev *VAR_20,
          const struct pci_device_id *VAR_21)
{
 int VAR_22;
 struct kvaser_pciefd *VAR_23;

 VAR_23 = FUNC_0(&VAR_20->dev, sizeof(*VAR_23), VAR_1);
 if (!VAR_23)
  return -VAR_0;

 FUNC_15(VAR_20, VAR_23);
 VAR_23->pci = VAR_20;

 VAR_22 = FUNC_10(VAR_20);
 if (VAR_22)
  return VAR_22;

 VAR_22 = FUNC_14(VAR_20, VAR_3);
 if (VAR_22)
  goto err_disable_pci;

 VAR_23->reg_base = FUNC_11(VAR_20, 0, 0);
 if (!VAR_23->reg_base) {
  VAR_22 = -VAR_0;
  goto err_release_regions;
 }

 VAR_22 = FUNC_4(VAR_23);
 if (VAR_22)
  goto err_pci_iounmap;

 VAR_22 = FUNC_6(VAR_23);
 if (VAR_22)
  goto err_pci_iounmap;

 FUNC_16(VAR_20);

 VAR_22 = FUNC_5(VAR_23);
 if (VAR_22)
  goto err_teardown_can_ctrls;

 FUNC_2(VAR_14 | VAR_15,
    VAR_23->reg_base + VAR_18);

 FUNC_2(VAR_14 | VAR_15 |
    VAR_12 | VAR_13 |
    VAR_16 | VAR_17,
    VAR_23->reg_base + VAR_11);


 FUNC_2(VAR_5,
    VAR_23->reg_base + VAR_6);
 FUNC_2(VAR_5,
    VAR_23->reg_base + VAR_4);


 FUNC_2(VAR_7,
    VAR_23->reg_base + VAR_9);
 FUNC_2(VAR_8,
    VAR_23->reg_base + VAR_9);

 VAR_22 = FUNC_17(VAR_23->pci->irq, VAR_19,
     VAR_2, VAR_3, VAR_23);
 if (VAR_22)
  goto err_teardown_can_ctrls;

 VAR_22 = FUNC_3(VAR_23);
 if (VAR_22)
  goto err_free_irq;

 return 0;

err_free_irq:
 FUNC_1(VAR_23->pci->irq, VAR_23);

err_teardown_can_ctrls:
 FUNC_7(VAR_23);
 FUNC_2(0, VAR_23->reg_base + VAR_10);
 FUNC_8(VAR_20);

err_pci_iounmap:
 FUNC_12(VAR_20, VAR_23->reg_base);

err_release_regions:
 FUNC_13(VAR_20);

err_disable_pci:
 FUNC_9(VAR_20);

 return VAR_22;
}
