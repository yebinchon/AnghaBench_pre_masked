
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct fe_priv {int txrx_stats; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 struct fe_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct pci_dev*) ;
 struct net_device* FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct net_device*) ;

__attribute__((used)) static void FUNC_13(struct pci_dev *VAR_0)
{
 struct net_device *VAR_1 = FUNC_10(VAR_0);
 struct fe_priv *VAR_2 = FUNC_5(VAR_1);

 FUNC_1(VAR_2->txrx_stats);

 FUNC_12(VAR_1);

 FUNC_7(VAR_0);


 FUNC_8(VAR_1);

 FUNC_6(VAR_1);


 FUNC_2(VAR_1);
 FUNC_4(FUNC_3(VAR_1));
 FUNC_11(VAR_0);
 FUNC_9(VAR_0);
 FUNC_0(VAR_1);
}
