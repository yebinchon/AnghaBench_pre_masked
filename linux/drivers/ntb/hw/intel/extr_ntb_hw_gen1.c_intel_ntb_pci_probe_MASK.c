
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct TYPE_4__ {int * ops; } ;
struct intel_ntb_dev {TYPE_2__ ntb; TYPE_1__* reg; } ;
struct TYPE_3__ {int (* poll_link ) (struct intel_ntb_dev*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct intel_ntb_dev*) ;
 int VAR_3 ;
 int FUNC_3 (struct intel_ntb_dev*) ;
 int FUNC_4 (struct intel_ntb_dev*,struct pci_dev*) ;
 int FUNC_5 (struct intel_ntb_dev*) ;
 struct intel_ntb_dev* FUNC_6 (int,int ,int) ;
 int FUNC_7 (struct intel_ntb_dev*) ;
 int FUNC_8 (struct intel_ntb_dev*) ;
 int FUNC_9 (struct intel_ntb_dev*,struct pci_dev*) ;
 int FUNC_10 (struct intel_ntb_dev*) ;
 int FUNC_11 (TYPE_2__*) ;
 scalar_t__ FUNC_12 (struct pci_dev*) ;
 scalar_t__ FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct intel_ntb_dev*) ;
 int FUNC_15 (struct intel_ntb_dev*) ;
 int FUNC_16 (struct intel_ntb_dev*) ;

__attribute__((used)) static int FUNC_17(struct pci_dev *VAR_4,
          const struct pci_device_id *VAR_5)
{
 struct intel_ntb_dev *VAR_6;
 int VAR_7, VAR_8;

 VAR_8 = FUNC_1(&VAR_4->dev);

 if (FUNC_12(VAR_4)) {
  VAR_6 = FUNC_6(sizeof(*VAR_6), VAR_2, VAR_8);
  if (!VAR_6) {
   VAR_7 = -VAR_1;
   goto err_ndev;
  }

  FUNC_9(VAR_6, VAR_4);

  VAR_7 = FUNC_4(VAR_6, VAR_4);
  if (VAR_7)
   goto err_init_pci;

  VAR_7 = FUNC_16(VAR_6);
  if (VAR_7)
   goto err_init_dev;

 } else if (FUNC_13(VAR_4)) {
  VAR_6 = FUNC_6(sizeof(*VAR_6), VAR_2, VAR_8);
  if (!VAR_6) {
   VAR_7 = -VAR_1;
   goto err_ndev;
  }

  FUNC_9(VAR_6, VAR_4);
  VAR_6->ntb.ops = &VAR_3;

  VAR_7 = FUNC_4(VAR_6, VAR_4);
  if (VAR_7)
   goto err_init_pci;

  VAR_7 = FUNC_2(VAR_6);
  if (VAR_7)
   goto err_init_dev;

 } else {
  VAR_7 = -VAR_0;
  goto err_ndev;
 }

 FUNC_10(VAR_6);

 VAR_6->reg->poll_link(VAR_6);

 FUNC_8(VAR_6);

 VAR_7 = FUNC_11(&VAR_6->ntb);
 if (VAR_7)
  goto err_register;

 FUNC_0(&VAR_4->dev, "NTB device registered.\n");

 return 0;

err_register:
 FUNC_7(VAR_6);
 if (FUNC_12(VAR_4) || FUNC_13(VAR_4))
  FUNC_15(VAR_6);
err_init_dev:
 FUNC_3(VAR_6);
err_init_pci:
 FUNC_5(VAR_6);
err_ndev:
 return VAR_7;
}
