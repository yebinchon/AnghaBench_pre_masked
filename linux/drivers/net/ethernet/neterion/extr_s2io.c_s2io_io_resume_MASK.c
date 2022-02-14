
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s2io_nic {int dummy; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dev_addr; } ;


 scalar_t__ VAR_0 ;
 struct s2io_nic* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 struct net_device* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct s2io_nic*) ;
 scalar_t__ FUNC_7 (struct s2io_nic*) ;
 scalar_t__ FUNC_8 (struct net_device*,int ) ;

__attribute__((used)) static void FUNC_9(struct pci_dev *VAR_1)
{
 struct net_device *VAR_2 = FUNC_4(VAR_1);
 struct s2io_nic *VAR_3 = FUNC_0(VAR_2);

 if (FUNC_2(VAR_2)) {
  if (FUNC_7(VAR_3)) {
   FUNC_5("Can't bring device back up after reset.\n");
   return;
  }

  if (FUNC_8(VAR_2, VAR_2->dev_addr) == VAR_0) {
   FUNC_6(VAR_3);
   FUNC_5("Can't restore mac addr after reset.\n");
   return;
  }
 }

 FUNC_1(VAR_2);
 FUNC_3(VAR_2);
}
