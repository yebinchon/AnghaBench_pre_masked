
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8139_private {int thread; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 struct rtl8139_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct pci_dev*) ;
 struct net_device* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_0)
{
 struct net_device *VAR_1 = FUNC_5 (VAR_0);
 struct rtl8139_private *VAR_2 = FUNC_3(VAR_1);

 FUNC_1 (VAR_1 != ((void*)0));

 FUNC_2(&VAR_2->thread);

 FUNC_6 (VAR_1);

 FUNC_0 (VAR_1);
 FUNC_4 (VAR_0);
}
