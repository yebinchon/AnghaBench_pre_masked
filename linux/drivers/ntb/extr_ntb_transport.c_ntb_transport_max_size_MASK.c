
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ntb_transport_qp {int tx_max_frame; struct dma_chan* tx_dma_chan; struct dma_chan* rx_dma_chan; } ;
struct ntb_payload_header {int dummy; } ;
struct dma_chan {TYPE_1__* device; } ;
struct TYPE_2__ {int copy_align; } ;


 unsigned int FUNC_0 (int ,int ) ;
 unsigned int FUNC_1 (unsigned int,int) ;

unsigned int FUNC_2(struct ntb_transport_qp *VAR_0)
{
 unsigned int VAR_1;
 unsigned int VAR_2;
 struct dma_chan *VAR_3, *VAR_4;

 if (!VAR_0)
  return 0;

 VAR_3 = VAR_0->rx_dma_chan;
 VAR_4 = VAR_0->tx_dma_chan;

 VAR_2 = FUNC_0(VAR_3 ? VAR_3->device->copy_align : 0,
    VAR_4 ? VAR_4->device->copy_align : 0);


 VAR_1 = VAR_0->tx_max_frame - sizeof(struct ntb_payload_header);
 VAR_1 = FUNC_1(VAR_1, 1 << VAR_2);

 return VAR_1;
}
