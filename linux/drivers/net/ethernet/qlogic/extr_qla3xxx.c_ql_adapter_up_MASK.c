
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ql3_adapter {TYPE_1__* pdev; int flags; scalar_t__ msi; int hw_lock; int napi; int adapter_timer; struct net_device* ndev; } ;
struct net_device {int name; } ;
struct TYPE_3__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,struct net_device*) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct net_device*,char*,...) ;
 int FUNC_5 (struct net_device*,char*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int VAR_7 ;
 int FUNC_8 (struct ql3_adapter*) ;
 scalar_t__ FUNC_9 (struct ql3_adapter*) ;
 int FUNC_10 (struct ql3_adapter*) ;
 int FUNC_11 (struct ql3_adapter*,int ) ;
 int FUNC_12 (struct ql3_adapter*) ;
 int FUNC_13 (int ,int ,unsigned long,int ,struct net_device*) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *,unsigned long) ;
 scalar_t__ FUNC_17 (int ,int *) ;

__attribute__((used)) static int FUNC_18(struct ql3_adapter *VAR_8)
{
 struct net_device *VAR_9 = VAR_8->ndev;
 int VAR_10;
 unsigned long VAR_11 = VAR_2;
 unsigned long VAR_12;

 if (FUNC_9(VAR_8)) {
  FUNC_4(VAR_9, "Unable to  allocate buffers\n");
  return -VAR_0;
 }

 if (VAR_8->msi) {
  if (FUNC_7(VAR_8->pdev)) {
   FUNC_4(VAR_9,
       "User requested MSI, but MSI failed to initialize.  Continuing without MSI.\n");
   VAR_8->msi = 0;
  } else {
   FUNC_5(VAR_9, "MSI Enabled...\n");
   FUNC_14(VAR_5, &VAR_8->flags);
   VAR_11 &= ~VAR_2;
  }
 }

 VAR_10 = FUNC_13(VAR_8->pdev->irq, VAR_7,
     VAR_11, VAR_9->name, VAR_9);
 if (VAR_10) {
  FUNC_4(VAR_9,
      "Failed to reserve interrupt %d - already in use\n",
      VAR_8->pdev->irq);
  goto err_irq;
 }

 FUNC_15(&VAR_8->hw_lock, VAR_12);

 VAR_10 = FUNC_12(VAR_8);
 if (VAR_10) {
  VAR_10 = FUNC_8(VAR_8);
  if (VAR_10) {
   FUNC_4(VAR_9, "Unable to initialize adapter\n");
   goto err_init;
  }
  FUNC_4(VAR_9, "Releasing driver lock\n");
  FUNC_11(VAR_8, VAR_4);
 } else {
  FUNC_4(VAR_9, "Could not acquire driver lock\n");
  goto err_lock;
 }

 FUNC_16(&VAR_8->hw_lock, VAR_12);

 FUNC_14(VAR_3, &VAR_8->flags);

 FUNC_2(&VAR_8->adapter_timer, VAR_6 + VAR_1 * 1);

 FUNC_3(&VAR_8->napi);
 FUNC_10(VAR_8);
 return 0;

err_init:
 FUNC_11(VAR_8, VAR_4);
err_lock:
 FUNC_16(&VAR_8->hw_lock, VAR_12);
 FUNC_1(VAR_8->pdev->irq, VAR_9);
err_irq:
 if (VAR_8->msi && FUNC_17(VAR_5, &VAR_8->flags)) {
  FUNC_5(VAR_9, "calling pci_disable_msi()\n");
  FUNC_0(VAR_5, &VAR_8->flags);
  FUNC_6(VAR_8->pdev);
 }
 return VAR_10;
}
