
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct sxgbe_rx_norm_desc {int dummy; } ;
struct sxgbe_priv_data {size_t cur_rx_qnum; unsigned int dma_rx_size; int napi; TYPE_3__* hw; TYPE_1__** rxq; int dev; int rxcsum_insertion; int xstats; } ;
struct sk_buff {int ip_summed; struct sxgbe_rx_norm_desc* data; } ;
struct TYPE_6__ {TYPE_2__* desc; } ;
struct TYPE_5__ {int (* rx_wbstatus ) (struct sxgbe_rx_norm_desc*,int *,int*) ;int (* get_rx_frame_len ) (struct sxgbe_rx_norm_desc*) ;scalar_t__ (* get_rx_owner ) (struct sxgbe_rx_norm_desc*) ;} ;
struct TYPE_4__ {unsigned int cur_rx; struct sk_buff** rx_skbuff; struct sxgbe_rx_norm_desc* dma_rx; } ;


 int VAR_0 ;
 struct sxgbe_rx_norm_desc* VAR_1 ;
 int FUNC_0 (int *,struct sk_buff*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sxgbe_rx_norm_desc*) ;
 int FUNC_4 (struct sk_buff*,int) ;
 scalar_t__ FUNC_5 (struct sxgbe_rx_norm_desc*) ;
 int FUNC_6 (struct sxgbe_rx_norm_desc*,int *,int*) ;
 int FUNC_7 (struct sxgbe_rx_norm_desc*) ;
 int FUNC_8 (struct sxgbe_priv_data*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct sxgbe_priv_data *VAR_2, int VAR_3)
{
 u8 VAR_4 = VAR_2->cur_rx_qnum;
 unsigned int VAR_5 = VAR_2->dma_rx_size;
 unsigned int VAR_6 = VAR_2->rxq[VAR_4]->cur_rx;
 unsigned int VAR_7 = 0;
 unsigned int VAR_8 = 0;
 int VAR_9;
 int VAR_10;

 while (VAR_8 < VAR_3) {
  struct sxgbe_rx_norm_desc *VAR_11;
  struct sk_buff *VAR_12;
  int VAR_13;

  VAR_11 = VAR_2->rxq[VAR_4]->dma_rx + VAR_6;

  if (VAR_2->hw->desc->get_rx_owner(VAR_11))
   break;

  VAR_8++;

  VAR_7 = (++VAR_2->rxq[VAR_4]->cur_rx) % VAR_5;
  FUNC_3(VAR_2->rxq[VAR_4]->dma_rx + VAR_7);





  VAR_10 = VAR_2->hw->desc->rx_wbstatus(VAR_11, &VAR_2->xstats,
           &VAR_9);
  if (FUNC_9(VAR_10 < 0)) {
   VAR_6 = VAR_7;
   continue;
  }
  if (FUNC_9(!VAR_2->rxcsum_insertion))
   VAR_9 = VAR_0;

  VAR_12 = VAR_2->rxq[VAR_4]->rx_skbuff[VAR_6];

  if (FUNC_9(!VAR_12))
   FUNC_1(VAR_2->dev, "rx descriptor is not consistent\n");

  FUNC_3(VAR_12->data - VAR_1);
  VAR_2->rxq[VAR_4]->rx_skbuff[VAR_6] = ((void*)0);

  VAR_13 = VAR_2->hw->desc->get_rx_frame_len(VAR_11);

  FUNC_4(VAR_12, VAR_13);

  VAR_12->ip_summed = VAR_9;
  if (VAR_9 == VAR_0)
   FUNC_2(VAR_12);
  else
   FUNC_0(&VAR_2->napi, VAR_12);

  VAR_6 = VAR_7;
 }

 FUNC_8(VAR_2);

 return VAR_8;
}
