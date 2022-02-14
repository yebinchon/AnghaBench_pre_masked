
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int timer; int ndev; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,scalar_t__) ;
 struct ql_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct ql_adapter*,int ,int ,char*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 struct net_device* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_3)
{
 struct net_device *VAR_4 = FUNC_5(VAR_3);
 struct ql_adapter *VAR_5 = FUNC_1(VAR_4);
 int VAR_6 = 0;

 if (FUNC_4(VAR_4)) {
  VAR_6 = FUNC_6(VAR_4);
  if (VAR_6) {
   FUNC_3(VAR_5, VAR_1, VAR_5->ndev,
      "Device initialization failed after reset.\n");
   return;
  }
 } else {
  FUNC_3(VAR_5, VAR_1, VAR_5->ndev,
     "Device was not running prior to EEH.\n");
 }
 FUNC_0(&VAR_5->timer, VAR_2 + (5*VAR_0));
 FUNC_2(VAR_4);
}
