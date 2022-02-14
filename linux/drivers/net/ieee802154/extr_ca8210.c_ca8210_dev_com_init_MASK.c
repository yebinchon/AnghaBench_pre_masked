
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ca8210_priv {TYPE_1__* spi; void* irq_workqueue; void* mlme_workqueue; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static int FUNC_2(struct ca8210_priv *VAR_2)
{
 VAR_2->mlme_workqueue = FUNC_0(
  "MLME work queue",
  VAR_1
 );
 if (!VAR_2->mlme_workqueue) {
  FUNC_1(&VAR_2->spi->dev, "alloc of mlme_workqueue failed!\n");
  return -VAR_0;
 }

 VAR_2->irq_workqueue = FUNC_0(
  "ca8210 irq worker",
  VAR_1
 );
 if (!VAR_2->irq_workqueue) {
  FUNC_1(&VAR_2->spi->dev, "alloc of irq_workqueue failed!\n");
  return -VAR_0;
 }

 return 0;
}
