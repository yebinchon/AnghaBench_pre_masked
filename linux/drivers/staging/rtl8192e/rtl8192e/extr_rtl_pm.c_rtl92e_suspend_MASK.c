
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct r8192_priv {TYPE_2__* rtllib; scalar_t__ polling_timer_on; int gpio_change_rf_wq; int gpio_polling_timer; } ;
struct pci_dev {int dummy; } ;
struct net_device {TYPE_1__* netdev_ops; } ;
typedef int pm_message_t ;
struct TYPE_4__ {scalar_t__ bSupportRemoteWakeUp; } ;
struct TYPE_3__ {int (* ndo_stop ) (struct net_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct net_device*,char*,...) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*,int ,int) ;
 struct net_device* FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*,int ) ;
 int FUNC_12 (struct net_device*,int ) ;
 int FUNC_13 (struct net_device*,int ,int ) ;
 int FUNC_14 (struct net_device*,int ,int) ;
 int FUNC_15 (struct net_device*,int ,int) ;
 struct r8192_priv* FUNC_16 (struct net_device*) ;
 int FUNC_17 (struct net_device*) ;

int FUNC_18(struct pci_dev *VAR_9, pm_message_t VAR_10)
{
 struct net_device *VAR_11 = FUNC_9(VAR_9);
 struct r8192_priv *VAR_12 = FUNC_16(VAR_11);
 u32 VAR_13;

 FUNC_3(VAR_11, "============> r8192E suspend call.\n");
 FUNC_1(&VAR_12->gpio_polling_timer);
 FUNC_0(&VAR_12->gpio_change_rf_wq);
 VAR_12->polling_timer_on = 0;

 if (!FUNC_5(VAR_11)) {
  FUNC_3(VAR_11,
       "RTL819XE:UI is open out of suspend function\n");
  goto out_pci_suspend;
 }

 if (VAR_11->netdev_ops->ndo_stop)
  VAR_11->netdev_ops->ndo_stop(VAR_11);
 FUNC_4(VAR_11);

 if (!VAR_12->rtllib->bSupportRemoteWakeUp) {
  FUNC_13(VAR_11, VAR_8, VAR_4);
  VAR_13 = FUNC_12(VAR_11, VAR_0);
  VAR_13 |= VAR_1;
  FUNC_15(VAR_11, VAR_0, VAR_13);
 } else {
  FUNC_15(VAR_11, VAR_5, 0xffffffff);
  FUNC_15(VAR_11, VAR_6, 0xffffffff);
  FUNC_15(VAR_11, VAR_7, 0xffffffff);
  FUNC_14(VAR_11, VAR_3, 0x5);
  FUNC_14(VAR_11, VAR_2, 0xa);
 }
out_pci_suspend:
 FUNC_3(VAR_11, "WOL is %s\n", VAR_12->rtllib->bSupportRemoteWakeUp ?
       "Supported" : "Not supported");
 FUNC_10(VAR_9);
 FUNC_7(VAR_9);
 FUNC_8(VAR_9, FUNC_6(VAR_9, VAR_10),
   VAR_12->rtllib->bSupportRemoteWakeUp ? 1 : 0);
 FUNC_11(VAR_9, FUNC_6(VAR_9, VAR_10));

 FUNC_2(20);

 return 0;
}
