
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct gdma_dmaengine_chan {int id; size_t next_sg; int fifo_addr; int slave_id; int burst_size; TYPE_2__* desc; } ;
struct gdma_dma_sg {int src_addr; int dst_addr; int len; } ;
struct TYPE_3__ {int dev; } ;
struct gdma_dma_dev {TYPE_1__ ddev; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int direction; struct gdma_dma_sg* sg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int,...) ;
 struct gdma_dma_dev* FUNC_5 (struct gdma_dmaengine_chan*) ;
 int FUNC_6 (struct gdma_dma_dev*,int ) ;
 int FUNC_7 (struct gdma_dma_dev*,int ,int) ;
 int FUNC_8 (struct gdma_dma_dev*,int) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 () ;

__attribute__((used)) static int FUNC_11(struct gdma_dmaengine_chan *VAR_15)
{
 struct gdma_dma_dev *VAR_16 = FUNC_5(VAR_15);
 dma_addr_t VAR_17, VAR_18;
 struct gdma_dma_sg *VAR_19;
 u32 VAR_20, VAR_21;


 VAR_20 = FUNC_6(VAR_16, FUNC_0(VAR_15->id));
 if (FUNC_9(VAR_20 & VAR_7)) {
  FUNC_4(VAR_16->ddev.dev, "chan %d is start(%08x).\n",
   VAR_15->id, VAR_20);
  FUNC_8(VAR_16, VAR_15->id);
  return -VAR_3;
 }

 VAR_19 = &VAR_15->desc->sg[VAR_15->next_sg];
 if (VAR_15->desc->direction == VAR_1) {
  VAR_17 = VAR_19->src_addr;
  VAR_18 = VAR_15->fifo_addr;
  VAR_20 = VAR_6;
  VAR_21 = (32 << VAR_14) |
   (VAR_15->slave_id << VAR_12);
 } else if (VAR_15->desc->direction == VAR_0) {
  VAR_17 = VAR_15->fifo_addr;
  VAR_18 = VAR_19->dst_addr;
  VAR_20 = VAR_8;
  VAR_21 = (VAR_15->slave_id << VAR_14) |
   (32 << VAR_12) |
   VAR_11;
 } else if (VAR_15->desc->direction == VAR_2) {
  VAR_17 = VAR_19->src_addr;
  VAR_18 = VAR_19->dst_addr;
  VAR_20 = VAR_9;
  VAR_21 = (32 << VAR_14) |
   (32 << VAR_12) |
   VAR_11;
 } else {
  FUNC_4(VAR_16->ddev.dev, "direction type %d error\n",
   VAR_15->desc->direction);
  return -VAR_3;
 }

 VAR_20 |= (VAR_19->len << VAR_10) |
   (VAR_15->burst_size << VAR_4) |
   VAR_5 | VAR_7;
 VAR_21 |= VAR_15->id << VAR_13;

 VAR_15->next_sg++;
 FUNC_7(VAR_16, FUNC_3(VAR_15->id), VAR_17);
 FUNC_7(VAR_16, FUNC_2(VAR_15->id), VAR_18);
 FUNC_7(VAR_16, FUNC_1(VAR_15->id), VAR_21);


 FUNC_10();
 FUNC_7(VAR_16, FUNC_0(VAR_15->id), VAR_20);

 return 0;
}
