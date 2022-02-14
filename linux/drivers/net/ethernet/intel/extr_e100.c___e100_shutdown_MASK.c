
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {int phy_id; } ;
struct nic {int flags; scalar_t__ phy; TYPE_1__ mii; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nic*) ;
 int FUNC_1 (struct nic*) ;
 int FUNC_2 (struct net_device*,int ,int ) ;
 int FUNC_3 (struct net_device*,int ,int ,int) ;
 struct nic* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct pci_dev*) ;
 struct net_device* FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_10(struct pci_dev *VAR_5, bool *VAR_6)
{
 struct net_device *VAR_7 = FUNC_8(VAR_5);
 struct nic *VAR_8 = FUNC_4(VAR_7);

 if (FUNC_6(VAR_7))
  FUNC_1(VAR_8);
 FUNC_5(VAR_7);

 FUNC_9(VAR_5);

 if ((VAR_8->flags & VAR_4) | FUNC_0(VAR_8)) {

  if (VAR_8->phy == VAR_3) {
   u16 VAR_9 = FUNC_2(VAR_7, VAR_8->mii.phy_id,
                              VAR_2);

   FUNC_3(VAR_7, VAR_8->mii.phy_id,
              VAR_2, VAR_9 |
              VAR_1 | VAR_0);
  }
  *VAR_6 = 1;
 } else {
  *VAR_6 = 0;
 }

 FUNC_7(VAR_5);
}
