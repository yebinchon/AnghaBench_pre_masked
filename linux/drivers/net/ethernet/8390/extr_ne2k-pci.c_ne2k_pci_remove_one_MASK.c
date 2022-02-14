
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int base_addr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct pci_dev*) ;
 struct net_device* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_1)
{
 struct net_device *VAR_2 = FUNC_3(VAR_1);

 FUNC_0(!VAR_2);
 FUNC_5(VAR_2);
 FUNC_4(VAR_2->base_addr, VAR_0);
 FUNC_1(VAR_2);
 FUNC_2(VAR_1);
}
