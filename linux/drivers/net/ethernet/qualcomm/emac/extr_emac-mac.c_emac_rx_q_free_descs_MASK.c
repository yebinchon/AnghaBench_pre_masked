
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {unsigned int count; size_t size; scalar_t__ consume_idx; scalar_t__ produce_idx; int v_addr; int rfbuff; } ;
struct TYPE_7__ {size_t size; scalar_t__ consume_idx; scalar_t__ produce_idx; int v_addr; } ;
struct emac_rx_queue {TYPE_4__ rfd; TYPE_3__ rrd; } ;
struct emac_buffer {int * skb; scalar_t__ dma_addr; int length; } ;
struct emac_adapter {struct emac_rx_queue rx_q; TYPE_2__* netdev; } ;
struct device {int dummy; } ;
struct TYPE_5__ {struct device* parent; } ;
struct TYPE_6__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 struct emac_buffer* FUNC_0 (struct emac_rx_queue*,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,scalar_t__,int ,int ) ;
 int FUNC_3 (int ,int ,size_t) ;

__attribute__((used)) static void FUNC_4(struct emac_adapter *VAR_1)
{
 struct device *VAR_2 = VAR_1->netdev->dev.parent;
 struct emac_rx_queue *VAR_3 = &VAR_1->rx_q;
 unsigned int VAR_4;
 size_t VAR_5;


 if (!VAR_3->rfd.rfbuff)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_3->rfd.count; VAR_4++) {
  struct emac_buffer *VAR_6 = FUNC_0(VAR_3, VAR_4);

  if (VAR_6->dma_addr) {
   FUNC_2(VAR_2, VAR_6->dma_addr, VAR_6->length,
      VAR_0);
   VAR_6->dma_addr = 0;
  }
  if (VAR_6->skb) {
   FUNC_1(VAR_6->skb);
   VAR_6->skb = ((void*)0);
  }
 }

 VAR_5 = sizeof(struct emac_buffer) * VAR_3->rfd.count;
 FUNC_3(VAR_3->rfd.rfbuff, 0, VAR_5);


 FUNC_3(VAR_3->rrd.v_addr, 0, VAR_3->rrd.size);
 VAR_3->rrd.produce_idx = 0;
 VAR_3->rrd.consume_idx = 0;

 FUNC_3(VAR_3->rfd.v_addr, 0, VAR_3->rfd.size);
 VAR_3->rfd.produce_idx = 0;
 VAR_3->rfd.consume_idx = 0;
}
