
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct pci_dev *VAR_1)
{
 struct net_device *VAR_2 = FUNC_2(VAR_1);

 FUNC_4(VAR_1, VAR_0);
 FUNC_3(VAR_1);

 if (FUNC_1(VAR_2)) {
  FUNC_5(VAR_2);
  FUNC_0(VAR_2);
 }
 return 0;
}
