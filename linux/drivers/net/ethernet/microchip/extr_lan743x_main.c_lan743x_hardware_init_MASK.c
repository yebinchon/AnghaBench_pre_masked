
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct lan743x_tx {int ring_lock; scalar_t__ channel_number; struct lan743x_adapter* adapter; } ;
struct TYPE_4__ {int irq; } ;
struct lan743x_adapter {struct lan743x_tx* tx; TYPE_3__* rx; int dp_lock; TYPE_2__* pdev; TYPE_1__ intr; } ;
struct TYPE_6__ {int channel_number; struct lan743x_adapter* adapter; } ;
struct TYPE_5__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lan743x_adapter*,int ,int) ;
 int FUNC_1 (struct lan743x_adapter*) ;
 int FUNC_2 (struct lan743x_adapter*) ;
 int FUNC_3 (struct lan743x_adapter*) ;
 int FUNC_4 (struct lan743x_adapter*) ;
 int FUNC_5 (struct lan743x_adapter*) ;
 int FUNC_6 (struct lan743x_adapter*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct lan743x_adapter *VAR_2,
     struct pci_dev *VAR_3)
{
 struct lan743x_tx *VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_2->intr.irq = VAR_2->pdev->irq;
 FUNC_0(VAR_2, VAR_0, 0xFFFFFFFF);
 FUNC_7(&VAR_2->dp_lock);

 VAR_6 = FUNC_2(VAR_2);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_3(VAR_2);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_4(VAR_2);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_5(VAR_2);
 if (VAR_6)
  return VAR_6;

 FUNC_6(VAR_2);

 VAR_6 = FUNC_1(VAR_2);
 if (VAR_6)
  return VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_2->rx[VAR_5].adapter = VAR_2;
  VAR_2->rx[VAR_5].channel_number = VAR_5;
 }

 VAR_4 = &VAR_2->tx[0];
 VAR_4->adapter = VAR_2;
 VAR_4->channel_number = 0;
 FUNC_8(&VAR_4->ring_lock);
 return 0;
}
