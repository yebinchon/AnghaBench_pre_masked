
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; int tx_submit; } ;
struct tsi721_tx_desc {int desc_node; TYPE_2__ txd; } ;
struct tsi721_bdma_chan {int active; int free_list; struct tsi721_tx_desc* tx_desc; int id; scalar_t__ bd_base; } ;
struct dma_chan {TYPE_1__* dev; } ;
struct TYPE_3__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,struct dma_chan*) ;
 int FUNC_1 (struct dma_chan*) ;
 int VAR_5 ;
 int VAR_6 ;
 struct tsi721_tx_desc* FUNC_2 (int,int,int ) ;
 int FUNC_3 (int *,int *) ;
 struct tsi721_bdma_chan* FUNC_4 (struct dma_chan*) ;
 int FUNC_5 (struct tsi721_bdma_chan*) ;
 scalar_t__ FUNC_6 (struct tsi721_bdma_chan*,int ) ;
 int FUNC_7 (struct tsi721_bdma_chan*,int) ;
 int VAR_7 ;
 int FUNC_8 (int ,int *,char*,int ) ;
 int FUNC_9 (int *,char*,int ) ;

__attribute__((used)) static int FUNC_10(struct dma_chan *VAR_8)
{
 struct tsi721_bdma_chan *VAR_9 = FUNC_4(VAR_8);
 struct tsi721_tx_desc *VAR_10;
 int VAR_11;

 FUNC_8(VAR_0, &VAR_8->dev->device, "DMAC%d", VAR_9->id);

 if (VAR_9->bd_base)
  return VAR_6;


 if (FUNC_6(VAR_9, VAR_5)) {
  FUNC_9(&VAR_8->dev->device, "Unable to initialize DMAC%d",
   VAR_9->id);
  return -VAR_2;
 }


 VAR_10 = FUNC_2(VAR_6, sizeof(struct tsi721_tx_desc),
   VAR_4);
 if (!VAR_10) {
  FUNC_5(VAR_9);
  return -VAR_3;
 }

 VAR_9->tx_desc = VAR_10;

 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  FUNC_0(&VAR_10[VAR_11].txd, VAR_8);
  VAR_10[VAR_11].txd.tx_submit = VAR_7;
  VAR_10[VAR_11].txd.flags = VAR_1;
  FUNC_3(&VAR_10[VAR_11].desc_node, &VAR_9->free_list);
 }

 FUNC_1(VAR_8);

 VAR_9->active = 1;
 FUNC_7(VAR_9, 1);

 return VAR_6;
}
