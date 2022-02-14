
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct r8192_priv {scalar_t__ polling_timer_on; TYPE_2__* rtllib; int gpio_polling_timer; } ;
struct pci_dev {int dummy; } ;
struct net_device {TYPE_1__* netdev_ops; } ;
struct TYPE_4__ {int bSupportRemoteWakeUp; } ;
struct TYPE_3__ {int (* ndo_open ) (struct net_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int FUNC_1 (struct net_device*,char*) ;
 int FUNC_2 (struct net_device*,char*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int ,int ) ;
 struct net_device* FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*,int,int*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*,int ) ;
 int FUNC_11 (struct pci_dev*,int,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct net_device*,int ,int ) ;
 struct r8192_priv* FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct net_device*) ;

int FUNC_16(struct pci_dev *VAR_4)
{
 struct net_device *VAR_5 = FUNC_7(VAR_4);
 struct r8192_priv *VAR_6 = FUNC_14(VAR_5);
 int VAR_7;
 u32 VAR_8;

 FUNC_2(VAR_5, "================>r8192E resume call.\n");

 FUNC_10(VAR_4, VAR_1);

 VAR_7 = FUNC_5(VAR_4);
 if (VAR_7) {
  FUNC_1(VAR_5, "pci_enable_device failed on resume\n");
  return VAR_7;
 }
 FUNC_9(VAR_4);

 FUNC_8(VAR_4, 0x40, &VAR_8);
 if ((VAR_8 & 0x0000ff00) != 0)
  FUNC_11(VAR_4, 0x40, VAR_8 & 0xffff00ff);

 FUNC_6(VAR_4, VAR_1, 0);

 if (VAR_6->polling_timer_on == 0)
  FUNC_12(&VAR_6->gpio_polling_timer);

 if (!FUNC_4(VAR_5)) {
  FUNC_2(VAR_5,
       "RTL819XE:UI is open out of resume function\n");
  goto out;
 }

 FUNC_3(VAR_5);
 if (VAR_5->netdev_ops->ndo_open)
  VAR_5->netdev_ops->ndo_open(VAR_5);

 if (!VAR_6->rtllib->bSupportRemoteWakeUp)
  FUNC_13(VAR_5, VAR_3, VAR_2);

out:
 FUNC_0(VAR_0, "<================r8192E resume call.\n");
 return 0;
}
