
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct nic {int watchdog; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 struct nic* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct pci_dev*,int ,int ) ;
 struct net_device* FUNC_6 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_2)
{
 struct net_device *VAR_3 = FUNC_6(VAR_2);
 struct nic *VAR_4 = FUNC_2(VAR_3);


 FUNC_5(VAR_2, VAR_0, 0);

 FUNC_3(VAR_3);
 if (FUNC_4(VAR_3)) {
  FUNC_0(VAR_3);
  FUNC_1(&VAR_4->watchdog, VAR_1);
 }
}
