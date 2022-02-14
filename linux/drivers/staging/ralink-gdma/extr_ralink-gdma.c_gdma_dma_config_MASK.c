
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gdma_dmaengine_chan {void* burst_size; int fifo_addr; int slave_id; } ;
struct TYPE_2__ {int dev; } ;
struct gdma_dma_dev {TYPE_1__ ddev; } ;
struct dma_slave_config {int direction; int src_maxburst; int src_addr; int slave_id; int src_addr_width; int dst_maxburst; int dst_addr; int dst_addr_width; scalar_t__ device_fc; } ;
struct dma_chan {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 struct gdma_dma_dev* FUNC_1 (struct gdma_dmaengine_chan*) ;
 void* FUNC_2 (int ) ;
 struct gdma_dmaengine_chan* FUNC_3 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_4(struct dma_chan *VAR_2,
      struct dma_slave_config *VAR_3)
{
 struct gdma_dmaengine_chan *VAR_4 = FUNC_3(VAR_2);
 struct gdma_dma_dev *VAR_5 = FUNC_1(VAR_4);

 if (VAR_3->device_fc) {
  FUNC_0(VAR_5->ddev.dev, "not support flow controller\n");
  return -VAR_1;
 }

 switch (VAR_3->direction) {
 case 128:
  if (VAR_3->dst_addr_width != VAR_0) {
   FUNC_0(VAR_5->ddev.dev, "only support 4 byte buswidth\n");
   return -VAR_1;
  }
  VAR_4->slave_id = VAR_3->slave_id;
  VAR_4->fifo_addr = VAR_3->dst_addr;
  VAR_4->burst_size = FUNC_2(VAR_3->dst_maxburst);
  break;
 case 129:
  if (VAR_3->src_addr_width != VAR_0) {
   FUNC_0(VAR_5->ddev.dev, "only support 4 byte buswidth\n");
   return -VAR_1;
  }
  VAR_4->slave_id = VAR_3->slave_id;
  VAR_4->fifo_addr = VAR_3->src_addr;
  VAR_4->burst_size = FUNC_2(VAR_3->src_maxburst);
  break;
 default:
  FUNC_0(VAR_5->ddev.dev, "direction type %d error\n",
   VAR_3->direction);
  return -VAR_1;
 }

 return 0;
}
