
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct ism_dev {TYPE_1__* smcd; struct pci_dev* pdev; int lock; } ;
struct TYPE_3__ {struct ism_dev* priv; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct ism_dev*) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (struct ism_dev*) ;
 int VAR_5 ;
 int FUNC_6 (struct ism_dev*) ;
 struct ism_dev* FUNC_7 (int,int ) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*,int ) ;
 int FUNC_12 (struct pci_dev*,int ) ;
 int FUNC_13 (struct pci_dev*) ;
 TYPE_1__* FUNC_14 (int *,int ,int *,int ) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct pci_dev *VAR_6, const struct pci_device_id *VAR_7)
{
 struct ism_dev *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_7(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 FUNC_16(&VAR_8->lock);
 FUNC_2(&VAR_6->dev, VAR_8);
 VAR_8->pdev = VAR_6;

 VAR_9 = FUNC_9(VAR_6);
 if (VAR_9)
  goto err;

 VAR_9 = FUNC_11(VAR_6, VAR_0);
 if (VAR_9)
  goto err_disable;

 VAR_9 = FUNC_12(VAR_6, FUNC_0(64));
 if (VAR_9)
  goto err_resource;

 FUNC_4(&VAR_6->dev, VAR_4 - 1);
 FUNC_3(&VAR_6->dev, VAR_4);
 FUNC_13(VAR_6);

 VAR_8->smcd = FUNC_14(&VAR_6->dev, FUNC_1(&VAR_6->dev), &VAR_5,
       VAR_3);
 if (!VAR_8->smcd)
  goto err_resource;

 VAR_8->smcd->priv = VAR_8;
 VAR_9 = FUNC_5(VAR_8);
 if (VAR_9)
  goto err_free;

 return 0;

err_free:
 FUNC_15(VAR_8->smcd);
err_resource:
 FUNC_10(VAR_6);
err_disable:
 FUNC_8(VAR_6);
err:
 FUNC_6(VAR_8);
 FUNC_2(&VAR_6->dev, ((void*)0));
 return VAR_9;
}
