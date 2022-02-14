
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int status; struct mt76_queue_entry* context; TYPE_1__* dev; } ;
struct mt76_queue_entry {int done; } ;
struct mt76_dev {int tx_tasklet; int dev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,char*,int ) ;
 struct mt76_dev* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct urb*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct urb *VAR_0)
{
 struct mt76_dev *VAR_1 = FUNC_1(&VAR_0->dev->dev);
 struct mt76_queue_entry *VAR_2 = VAR_0->context;

 if (FUNC_2(VAR_0))
  FUNC_0(VAR_1->dev, "tx urb failed: %d\n", VAR_0->status);
 VAR_2->done = 1;

 FUNC_3(&VAR_1->tx_tasklet);
}
