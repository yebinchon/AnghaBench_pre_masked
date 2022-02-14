
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ionic_tx_stats {int dma_map_err; } ;
struct ionic_queue {int name; TYPE_2__* lif; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {TYPE_3__* netdev; TYPE_1__* ionic; } ;
struct TYPE_4__ {struct device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,void*,size_t,int ) ;
 scalar_t__ FUNC_1 (struct device*,int ) ;
 int FUNC_2 (char*,int ,int ) ;
 struct ionic_tx_stats* FUNC_3 (struct ionic_queue*) ;

__attribute__((used)) static dma_addr_t FUNC_4(struct ionic_queue *VAR_1, void *VAR_2, size_t VAR_3)
{
 struct ionic_tx_stats *VAR_4 = FUNC_3(VAR_1);
 struct device *VAR_5 = VAR_1->lif->ionic->dev;
 dma_addr_t VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_2, VAR_3, VAR_0);
 if (FUNC_1(VAR_5, VAR_6)) {
  FUNC_2("%s: DMA single map failed on %s!\n",
         VAR_1->lif->netdev->name, VAR_1->name);
  VAR_4->dma_map_err++;
  return 0;
 }
 return VAR_6;
}
