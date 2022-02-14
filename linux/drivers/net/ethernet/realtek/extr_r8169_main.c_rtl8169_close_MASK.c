
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int work; int flags; } ;
struct rtl8169_private {int * RxDescArray; int * TxDescArray; int TxPhyAddr; int RxPhyAddr; int phydev; TYPE_1__ wk; struct pci_dev* pci_dev; } ;
struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int *,int ) ;
 struct rtl8169_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct pci_dev*,int ,struct rtl8169_private*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct rtl8169_private*) ;
 int FUNC_10 (struct rtl8169_private*) ;
 int FUNC_11 (struct rtl8169_private*) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_3)
{
 struct rtl8169_private *VAR_4 = FUNC_3(VAR_3);
 struct pci_dev *VAR_5 = VAR_4->pci_dev;

 FUNC_6(&VAR_5->dev);


 FUNC_9(VAR_4);

 FUNC_10(VAR_4);

 FUNC_0(VAR_4->wk.flags, VAR_2);

 FUNC_8(VAR_3);
 FUNC_11(VAR_4);

 FUNC_1(&VAR_4->wk.work);

 FUNC_5(VAR_4->phydev);

 FUNC_4(VAR_5, 0, VAR_4);

 FUNC_2(&VAR_5->dev, VAR_0, VAR_4->RxDescArray,
     VAR_4->RxPhyAddr);
 FUNC_2(&VAR_5->dev, VAR_1, VAR_4->TxDescArray,
     VAR_4->TxPhyAddr);
 VAR_4->TxDescArray = ((void*)0);
 VAR_4->RxDescArray = ((void*)0);

 FUNC_7(&VAR_5->dev);

 return 0;
}
