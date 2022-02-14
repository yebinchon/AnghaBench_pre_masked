
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stmmac_tx_queue {unsigned int cur_tx; TYPE_2__* tx_skbuff_dma; struct dma_desc* dma_tx; int ** tx_skbuff; struct stmmac_priv* priv_data; } ;
struct stmmac_priv {int device; TYPE_1__* plat; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct dma_desc {void* des2; } ;
struct TYPE_4__ {unsigned int buf; unsigned int len; } ;
struct TYPE_3__ {scalar_t__ enh_desc; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (unsigned int,int ) ;
 void* FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (int ,scalar_t__,unsigned int,int ) ;
 scalar_t__ FUNC_3 (int ,unsigned int) ;
 unsigned int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct stmmac_priv*,struct dma_desc*,int,unsigned int,int,int ,int,int,int ) ;

__attribute__((used)) static int FUNC_6(void *VAR_5, struct sk_buff *VAR_6, int VAR_7)
{
 struct stmmac_tx_queue *VAR_8 = (struct stmmac_tx_queue *)VAR_5;
 unsigned int VAR_9 = FUNC_4(VAR_6);
 struct stmmac_priv *VAR_10 = VAR_8->priv_data;
 unsigned int VAR_11 = VAR_8->cur_tx;
 unsigned int VAR_12, VAR_13;
 unsigned int VAR_14 = 1, VAR_15;
 struct dma_desc *VAR_16;

 VAR_16 = VAR_8->dma_tx + VAR_11;

 if (VAR_10->plat->enh_desc)
  VAR_12 = VAR_1;
 else
  VAR_12 = VAR_0;

 VAR_15 = VAR_9 - VAR_12;

 VAR_13 = FUNC_2(VAR_10->device, VAR_6->data,
         VAR_12, VAR_2);
 VAR_16->des2 = FUNC_1(VAR_13);
 if (FUNC_3(VAR_10->device, VAR_13))
  return -1;
 VAR_8->tx_skbuff_dma[VAR_11].buf = VAR_13;
 VAR_8->tx_skbuff_dma[VAR_11].len = VAR_12;

 FUNC_5(VAR_10, VAR_16, 1, VAR_12, VAR_7, VAR_4,
   0, 0, VAR_6->len);

 while (VAR_15 != 0) {
  VAR_8->tx_skbuff[VAR_11] = ((void*)0);
  VAR_11 = FUNC_0(VAR_11, VAR_3);
  VAR_16 = VAR_8->dma_tx + VAR_11;

  if (VAR_15 > VAR_12) {
   VAR_13 = FUNC_2(VAR_10->device,
           (VAR_6->data + VAR_12 * VAR_14),
           VAR_12, VAR_2);
   VAR_16->des2 = FUNC_1(VAR_13);
   if (FUNC_3(VAR_10->device, VAR_13))
    return -1;
   VAR_8->tx_skbuff_dma[VAR_11].buf = VAR_13;
   VAR_8->tx_skbuff_dma[VAR_11].len = VAR_12;
   FUNC_5(VAR_10, VAR_16, 0, VAR_12, VAR_7,
     VAR_4, 1, 0, VAR_6->len);
   VAR_15 -= VAR_12;
   VAR_14++;
  } else {
   VAR_13 = FUNC_2(VAR_10->device,
           (VAR_6->data + VAR_12 * VAR_14), VAR_15,
           VAR_2);
   VAR_16->des2 = FUNC_1(VAR_13);
   if (FUNC_3(VAR_10->device, VAR_13))
    return -1;
   VAR_8->tx_skbuff_dma[VAR_11].buf = VAR_13;
   VAR_8->tx_skbuff_dma[VAR_11].len = VAR_15;

   FUNC_5(VAR_10, VAR_16, 0, VAR_15, VAR_7,
     VAR_4, 1, 1, VAR_6->len);
   VAR_15 = 0;
  }
 }

 VAR_8->cur_tx = VAR_11;

 return VAR_11;
}
