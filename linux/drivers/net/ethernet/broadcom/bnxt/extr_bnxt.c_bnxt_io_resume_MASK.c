
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 struct net_device* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_0)
{
 struct net_device *VAR_1 = FUNC_1(VAR_0);

 FUNC_2();

 FUNC_0(VAR_1);

 FUNC_3();
}
