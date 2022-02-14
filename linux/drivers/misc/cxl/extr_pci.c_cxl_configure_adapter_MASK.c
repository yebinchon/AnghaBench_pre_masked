
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_4__ {int release; int * parent; } ;
struct cxl {int tunneled_ops_supported; TYPE_3__* native; TYPE_1__ dev; } ;
struct TYPE_6__ {TYPE_2__* sl_ops; } ;
struct TYPE_5__ {int (* adapter_regs_init ) (struct cxl*,struct pci_dev*) ;int capi_mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct cxl*,struct pci_dev*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct cxl*,struct pci_dev*) ;
 int FUNC_3 (struct cxl*) ;
 int FUNC_4 (struct cxl*,struct pci_dev*) ;
 int VAR_1 ;
 int FUNC_5 (struct cxl*,struct pci_dev*) ;
 int FUNC_6 (struct cxl*) ;
 int FUNC_7 (struct cxl*) ;
 int FUNC_8 (struct cxl*,struct pci_dev*) ;
 int FUNC_9 (int *,char*,int) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*,struct cxl*) ;
 int FUNC_13 (struct pci_dev*) ;
 scalar_t__ FUNC_14 (struct pci_dev*,int,int) ;
 int FUNC_15 (struct pci_dev*,int ) ;
 int FUNC_16 (struct cxl*) ;
 int FUNC_17 (struct pci_dev*) ;
 int FUNC_18 (struct cxl*,struct pci_dev*) ;
 int FUNC_19 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_20(struct cxl *VAR_2, struct pci_dev *VAR_3)
{
 int VAR_4;

 VAR_2->dev.parent = &VAR_3->dev;
 VAR_2->dev.release = VAR_1;
 FUNC_12(VAR_3, VAR_2);

 VAR_4 = FUNC_11(VAR_3);
 if (VAR_4) {
  FUNC_9(&VAR_3->dev, "pci_enable_device failed: %i\n", VAR_4);
  return VAR_4;
 }

 if ((VAR_4 = FUNC_4(VAR_2, VAR_3)))
  return VAR_4;

 if ((VAR_4 = FUNC_8(VAR_2, VAR_3)))
         return VAR_4;

 FUNC_0(VAR_2, VAR_3);

 if ((VAR_4 = FUNC_17(VAR_3)))
  return VAR_4;

 if ((VAR_4 = FUNC_19(VAR_3)))
  return VAR_4;

 if ((VAR_4 = FUNC_7(VAR_2)))
  return VAR_4;

 if ((VAR_4 = FUNC_2(VAR_2, VAR_3)))
  return VAR_4;

 if ((VAR_4 = FUNC_16(VAR_2)))
  goto err;

 if ((VAR_4 = VAR_2->native->sl_ops->adapter_regs_init(VAR_2, VAR_3)))
  goto err;


 FUNC_13(VAR_3);

 VAR_2->tunneled_ops_supported = 0;

 if (FUNC_1()) {
  if (FUNC_14(VAR_3, 0x00020000E0000000ull, 1))
   FUNC_10(&VAR_3->dev, "Tunneled operations unsupported\n");
  else
   VAR_2->tunneled_ops_supported = 1;
 }

 if ((VAR_4 = FUNC_15(VAR_3, VAR_2->native->sl_ops->capi_mode)))
  goto err;



 if ((VAR_4 = FUNC_15(VAR_3, VAR_0)))
  goto err;


 FUNC_5(VAR_2, VAR_3);

 if ((VAR_4 = FUNC_3(VAR_2)))
  goto err;

 return 0;

err:
 FUNC_6(VAR_2);
 return VAR_4;

}
