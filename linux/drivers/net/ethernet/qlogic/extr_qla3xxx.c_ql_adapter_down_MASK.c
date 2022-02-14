
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ql3_adapter {int hw_lock; int index; int napi; int adapter_timer; TYPE_1__* pdev; int flags; struct net_device* ndev; scalar_t__ msi; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct net_device*,char*,...) ;
 int FUNC_5 (struct net_device*,char*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct ql3_adapter*) ;
 int FUNC_10 (struct ql3_adapter*) ;
 int FUNC_11 (struct ql3_adapter*) ;
 scalar_t__ FUNC_12 (struct ql3_adapter*) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;
 scalar_t__ FUNC_15 (int ,int *) ;

__attribute__((used)) static int FUNC_16(struct ql3_adapter *VAR_3, int VAR_4)
{
 struct net_device *VAR_5 = VAR_3->ndev;
 int VAR_6 = 0;

 FUNC_7(VAR_5);
 FUNC_6(VAR_5);

 FUNC_0(VAR_0, &VAR_3->flags);
 FUNC_0(VAR_1, &VAR_3->flags);

 FUNC_10(VAR_3);

 FUNC_2(VAR_3->pdev->irq, VAR_5);

 if (VAR_3->msi && FUNC_15(VAR_2, &VAR_3->flags)) {
  FUNC_5(VAR_3->ndev, "calling pci_disable_msi()\n");
  FUNC_0(VAR_2, &VAR_3->flags);
  FUNC_8(VAR_3->pdev);
 }

 FUNC_1(&VAR_3->adapter_timer);

 FUNC_3(&VAR_3->napi);

 if (VAR_4) {
  int VAR_7;
  unsigned long VAR_8;

  FUNC_13(&VAR_3->hw_lock, VAR_8);
  if (FUNC_12(VAR_3)) {
   VAR_7 = FUNC_9(VAR_3);
   if (VAR_7) {
    FUNC_4(VAR_5, "ql_adapter_reset(%d) FAILED!\n",
        VAR_3->index);
   }
   FUNC_4(VAR_5,
       "Releasing driver lock via chip reset\n");
  } else {
   FUNC_4(VAR_5,
       "Could not acquire driver lock to do reset!\n");
   VAR_6 = -1;
  }
  FUNC_14(&VAR_3->hw_lock, VAR_8);
 }
 FUNC_11(VAR_3);
 return VAR_6;
}
