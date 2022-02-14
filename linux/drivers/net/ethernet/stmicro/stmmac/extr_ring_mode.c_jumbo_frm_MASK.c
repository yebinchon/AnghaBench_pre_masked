
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stmmac_tx_queue {unsigned int cur_tx; TYPE_2__* tx_skbuff_dma; struct dma_desc* dma_tx; scalar_t__ dma_etx; int ** tx_skbuff; struct stmmac_priv* priv_data; } ;
struct stmmac_priv {int device; scalar_t__ extend_desc; TYPE_1__* plat; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct dma_desc {void* des3; void* des2; } ;
struct TYPE_4__ {unsigned int buf; unsigned int len; int is_jumbo; } ;
struct TYPE_3__ {scalar_t__ enh_desc; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (unsigned int,int ) ;
 int VAR_5 ;
 void* FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (int ,scalar_t__,unsigned int,int ) ;
 scalar_t__ FUNC_3 (int ,unsigned int) ;
 unsigned int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct stmmac_priv*,struct dma_desc*,int,unsigned int,int,int ,int,int,int ) ;

__attribute__((used)) static int FUNC_7(void *VAR_6, struct sk_buff *VAR_7, int VAR_8)
{
 struct stmmac_tx_queue *VAR_9 = (struct stmmac_tx_queue *)VAR_6;
 unsigned int VAR_10 = FUNC_4(VAR_7);
 struct stmmac_priv *VAR_11 = VAR_9->priv_data;
 unsigned int VAR_12 = VAR_9->cur_tx;
 unsigned int VAR_13, VAR_14, VAR_15;
 struct dma_desc *VAR_16;

 if (VAR_11->extend_desc)
  VAR_16 = (struct dma_desc *)(VAR_9->dma_etx + VAR_12);
 else
  VAR_16 = VAR_9->dma_tx + VAR_12;

 if (VAR_11->plat->enh_desc)
  VAR_13 = VAR_2;
 else
  VAR_13 = VAR_0;

 VAR_14 = VAR_10 - VAR_13;

 if (VAR_10 > VAR_2) {

  VAR_15 = FUNC_2(VAR_11->device, VAR_7->data, VAR_13,
          VAR_3);
  VAR_16->des2 = FUNC_1(VAR_15);
  if (FUNC_3(VAR_11->device, VAR_15))
   return -1;

  VAR_9->tx_skbuff_dma[VAR_12].buf = VAR_15;
  VAR_9->tx_skbuff_dma[VAR_12].len = VAR_13;
  VAR_9->tx_skbuff_dma[VAR_12].is_jumbo = 1;

  VAR_16->des3 = FUNC_1(VAR_15 + VAR_1);
  FUNC_6(VAR_11, VAR_16, 1, VAR_13, VAR_8,
    VAR_5, 0, 0, VAR_7->len);
  VAR_9->tx_skbuff[VAR_12] = ((void*)0);
  VAR_12 = FUNC_0(VAR_12, VAR_4);

  if (VAR_11->extend_desc)
   VAR_16 = (struct dma_desc *)(VAR_9->dma_etx + VAR_12);
  else
   VAR_16 = VAR_9->dma_tx + VAR_12;

  VAR_15 = FUNC_2(VAR_11->device, VAR_7->data + VAR_13, VAR_14,
          VAR_3);
  VAR_16->des2 = FUNC_1(VAR_15);
  if (FUNC_3(VAR_11->device, VAR_15))
   return -1;
  VAR_9->tx_skbuff_dma[VAR_12].buf = VAR_15;
  VAR_9->tx_skbuff_dma[VAR_12].len = VAR_14;
  VAR_9->tx_skbuff_dma[VAR_12].is_jumbo = 1;

  VAR_16->des3 = FUNC_1(VAR_15 + VAR_1);
  FUNC_6(VAR_11, VAR_16, 0, VAR_14, VAR_8,
    VAR_5, 1, !FUNC_5(VAR_7),
    VAR_7->len);
 } else {
  VAR_15 = FUNC_2(VAR_11->device, VAR_7->data,
          VAR_10, VAR_3);
  VAR_16->des2 = FUNC_1(VAR_15);
  if (FUNC_3(VAR_11->device, VAR_15))
   return -1;
  VAR_9->tx_skbuff_dma[VAR_12].buf = VAR_15;
  VAR_9->tx_skbuff_dma[VAR_12].len = VAR_10;
  VAR_9->tx_skbuff_dma[VAR_12].is_jumbo = 1;
  VAR_16->des3 = FUNC_1(VAR_15 + VAR_1);
  FUNC_6(VAR_11, VAR_16, 1, VAR_10, VAR_8,
    VAR_5, 0, !FUNC_5(VAR_7),
    VAR_7->len);
 }

 VAR_9->cur_tx = VAR_12;

 return VAR_12;
}
