
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_transport_qp {int rx_memcpy; int rx_async; struct dma_chan* rx_dma_chan; } ;
struct ntb_queue_entry {scalar_t__ len; int retries; struct ntb_transport_qp* qp; } ;
struct dma_chan {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ntb_queue_entry*,void*) ;
 int FUNC_1 (struct ntb_queue_entry*,void*) ;

__attribute__((used)) static void FUNC_2(struct ntb_queue_entry *VAR_1, void *VAR_2)
{
 struct ntb_transport_qp *VAR_3 = VAR_1->qp;
 struct dma_chan *VAR_4 = VAR_3->rx_dma_chan;
 int VAR_5;

 if (!VAR_4)
  goto err;

 if (VAR_1->len < VAR_0)
  goto err;

 VAR_5 = FUNC_0(VAR_1, VAR_2);
 if (VAR_5 < 0)
  goto err;

 if (!VAR_1->retries)
  VAR_3->rx_async++;

 return;

err:
 FUNC_1(VAR_1, VAR_2);
 VAR_3->rx_memcpy++;
}
