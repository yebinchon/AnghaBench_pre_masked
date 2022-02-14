
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct rtl8169_private {int * TxDescArray; int TxPhyAddr; int * RxDescArray; int RxPhyAddr; int phydev; int napi; TYPE_1__ wk; struct pci_dev* pci_dev; } ;
struct pci_dev {int dev; } ;
struct net_device {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (int *,int ,int *,int ) ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 struct rtl8169_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct rtl8169_private*,int ,struct net_device*,char*) ;
 int FUNC_6 (struct pci_dev*,int ,struct rtl8169_private*) ;
 int FUNC_7 (struct pci_dev*,int ,int ,int *,struct rtl8169_private*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct rtl8169_private*) ;
 int FUNC_13 (struct rtl8169_private*) ;
 int FUNC_14 (struct net_device*,struct rtl8169_private*) ;
 int FUNC_15 (struct rtl8169_private*) ;
 int VAR_6 ;
 int FUNC_16 (struct rtl8169_private*) ;
 int FUNC_17 (struct rtl8169_private*) ;
 int FUNC_18 (struct rtl8169_private*) ;
 int FUNC_19 (struct rtl8169_private*) ;
 int FUNC_20 (struct rtl8169_private*) ;
 int FUNC_21 (struct rtl8169_private*) ;
 int FUNC_22 (struct rtl8169_private*) ;
 int FUNC_23 (int ,int ) ;

__attribute__((used)) static int FUNC_24(struct net_device *VAR_7)
{
 struct rtl8169_private *VAR_8 = FUNC_3(VAR_7);
 struct pci_dev *VAR_9 = VAR_8->pci_dev;
 int VAR_10 = -VAR_0;

 FUNC_9(&VAR_9->dev);





 VAR_8->TxDescArray = FUNC_0(&VAR_9->dev, VAR_3,
          &VAR_8->TxPhyAddr, VAR_1);
 if (!VAR_8->TxDescArray)
  goto err_pm_runtime_put;

 VAR_8->RxDescArray = FUNC_0(&VAR_9->dev, VAR_2,
          &VAR_8->RxPhyAddr, VAR_1);
 if (!VAR_8->RxDescArray)
  goto err_free_tx_0;

 VAR_10 = FUNC_15(VAR_8);
 if (VAR_10 < 0)
  goto err_free_rx_1;

 FUNC_21(VAR_8);

 VAR_10 = FUNC_7(VAR_9, 0, VAR_6, ((void*)0), VAR_8,
     VAR_7->name);
 if (VAR_10 < 0)
  goto err_release_fw_2;

 VAR_10 = FUNC_12(VAR_8);
 if (VAR_10)
  goto err_free_irq;

 FUNC_18(VAR_8);

 FUNC_23(VAR_4, VAR_8->wk.flags);

 FUNC_2(&VAR_8->napi);

 FUNC_14(VAR_7, VAR_8);

 FUNC_19(VAR_8);

 FUNC_17(VAR_8);

 if (!FUNC_13(VAR_8))
  FUNC_5(VAR_8, VAR_5, VAR_7, "counter reset/update failed\n");

 FUNC_8(VAR_8->phydev);
 FUNC_4(VAR_7);

 FUNC_22(VAR_8);

 FUNC_11(&VAR_9->dev);
out:
 return VAR_10;

err_free_irq:
 FUNC_6(VAR_9, 0, VAR_8);
err_release_fw_2:
 FUNC_20(VAR_8);
 FUNC_16(VAR_8);
err_free_rx_1:
 FUNC_1(&VAR_9->dev, VAR_2, VAR_8->RxDescArray,
     VAR_8->RxPhyAddr);
 VAR_8->RxDescArray = ((void*)0);
err_free_tx_0:
 FUNC_1(&VAR_9->dev, VAR_3, VAR_8->TxDescArray,
     VAR_8->TxPhyAddr);
 VAR_8->TxDescArray = ((void*)0);
err_pm_runtime_put:
 FUNC_10(&VAR_9->dev);
 goto out;
}
