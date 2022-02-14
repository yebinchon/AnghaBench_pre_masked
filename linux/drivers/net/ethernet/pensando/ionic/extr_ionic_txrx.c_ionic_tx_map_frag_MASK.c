
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ionic_tx_stats {int dma_map_err; } ;
struct ionic_queue {int name; TYPE_3__* lif; } ;
struct device {int dummy; } ;
typedef int skb_frag_t ;
typedef int dma_addr_t ;
struct TYPE_6__ {TYPE_2__* netdev; TYPE_1__* ionic; } ;
struct TYPE_5__ {int name; } ;
struct TYPE_4__ {struct device* dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct device*,int ) ;
 int FUNC_1 (char*,int ,int ) ;
 struct ionic_tx_stats* FUNC_2 (struct ionic_queue*) ;
 int FUNC_3 (struct device*,int const*,size_t,size_t,int ) ;

__attribute__((used)) static dma_addr_t FUNC_4(struct ionic_queue *VAR_1, const skb_frag_t *VAR_2,
        size_t VAR_3, size_t VAR_4)
{
 struct ionic_tx_stats *VAR_5 = FUNC_2(VAR_1);
 struct device *VAR_6 = VAR_1->lif->ionic->dev;
 dma_addr_t VAR_7;

 VAR_7 = FUNC_3(VAR_6, VAR_2, VAR_3, VAR_4, VAR_0);
 if (FUNC_0(VAR_6, VAR_7)) {
  FUNC_1("%s: DMA frag map failed on %s!\n",
         VAR_1->lif->netdev->name, VAR_1->name);
  VAR_5->dma_map_err++;
 }
 return VAR_7;
}
