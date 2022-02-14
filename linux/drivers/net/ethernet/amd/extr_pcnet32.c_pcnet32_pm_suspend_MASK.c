
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
typedef int pm_message_t ;


 int FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 struct net_device* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct pci_dev *VAR_0, pm_message_t VAR_1)
{
 struct net_device *VAR_2 = FUNC_3(VAR_0);

 if (FUNC_1(VAR_2)) {
  FUNC_0(VAR_2);
  FUNC_6(VAR_2);
 }
 FUNC_4(VAR_0);
 FUNC_5(VAR_0, FUNC_2(VAR_0, VAR_1));
 return 0;
}
