
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct spider_net_hw_descr {int buf_size; int dmac_cmd_status; int buf_addr; scalar_t__ data_error; scalar_t__ data_status; scalar_t__ valid_size; scalar_t__ result_size; } ;
struct spider_net_descr {TYPE_2__* skb; struct spider_net_hw_descr* hwdescr; } ;
struct TYPE_6__ {int rx_iommu_map_error; int alloc_rx_skb_error; } ;
struct spider_net_card {TYPE_1__ spider_stats; TYPE_4__* netdev; int pdev; } ;
typedef int dma_addr_t ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 () ;
 TYPE_2__* FUNC_3 (TYPE_4__*,int) ;
 scalar_t__ FUNC_4 (struct spider_net_card*) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,scalar_t__,int,int ) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 () ;

__attribute__((used)) static int
FUNC_9(struct spider_net_card *VAR_7,
       struct spider_net_descr *VAR_8)
{
 struct spider_net_hw_descr *VAR_9 = VAR_8->hwdescr;
 dma_addr_t VAR_10;
 int VAR_11;
 int VAR_12;


 VAR_12 = (VAR_5 + VAR_6 - 1) &
  (~(VAR_6 - 1));




 VAR_8->skb = FUNC_3(VAR_7->netdev,
          VAR_12 + VAR_6 - 1);
 if (!VAR_8->skb) {
  if (FUNC_4(VAR_7) && FUNC_2())
   FUNC_0(&VAR_7->netdev->dev,
           "Not enough memory to allocate rx buffer\n");
  VAR_7->spider_stats.alloc_rx_skb_error++;
  return -VAR_0;
 }
 VAR_9->buf_size = VAR_12;
 VAR_9->result_size = 0;
 VAR_9->valid_size = 0;
 VAR_9->data_status = 0;
 VAR_9->data_error = 0;

 VAR_11 = ((unsigned long)VAR_8->skb->data) &
  (VAR_6 - 1);
 if (VAR_11)
  FUNC_7(VAR_8->skb, VAR_6 - VAR_11);

 VAR_10 = FUNC_6(VAR_7->pdev, VAR_8->skb->data,
   VAR_5, VAR_1);
 if (FUNC_5(VAR_7->pdev, VAR_10)) {
  FUNC_1(VAR_8->skb);
  VAR_8->skb = ((void*)0);
  if (FUNC_4(VAR_7) && FUNC_2())
   FUNC_0(&VAR_7->netdev->dev, "Could not iommu-map rx buffer\n");
  VAR_7->spider_stats.rx_iommu_map_error++;
  VAR_9->dmac_cmd_status = VAR_3;
 } else {
  VAR_9->buf_addr = VAR_10;
  FUNC_8();
  VAR_9->dmac_cmd_status = VAR_2 |
      VAR_4;
 }

 return 0;
}
