
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct stmmac_tx_queue {size_t cur_tx; struct dma_desc* dma_tx; int * tx_skbuff; } ;
struct TYPE_2__ {int addr64; } ;
struct stmmac_priv {TYPE_1__ dma_cap; struct stmmac_tx_queue* tx_queue; } ;
struct dma_desc {int des0; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 size_t FUNC_0 (size_t,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct stmmac_priv*,struct dma_desc*,int ,size_t,int ,int,int,int ,int ) ;
 int FUNC_4 (struct stmmac_priv*,struct dma_desc*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct stmmac_priv *VAR_2, dma_addr_t VAR_3,
     int VAR_4, bool VAR_5, u32 VAR_6)
{
 struct stmmac_tx_queue *VAR_7 = &VAR_2->tx_queue[VAR_6];
 struct dma_desc *VAR_8;
 u32 VAR_9;
 int VAR_10;

 VAR_10 = VAR_4;

 while (VAR_10 > 0) {
  dma_addr_t VAR_11;

  VAR_7->cur_tx = FUNC_0(VAR_7->cur_tx, VAR_0);
  FUNC_1(VAR_7->tx_skbuff[VAR_7->cur_tx]);
  VAR_8 = VAR_7->dma_tx + VAR_7->cur_tx;

  VAR_11 = VAR_3 + (VAR_4 - VAR_10);
  if (VAR_2->dma_cap.addr64 <= 32)
   VAR_8->des0 = FUNC_2(VAR_11);
  else
   FUNC_4(VAR_2, VAR_8, VAR_11);

  VAR_9 = VAR_10 >= VAR_1 ?
       VAR_1 : VAR_10;

  FUNC_3(VAR_2, VAR_8, 0, VAR_9,
    0, 1,
    (VAR_5) && (VAR_10 <= VAR_1),
    0, 0);

  VAR_10 -= VAR_1;
 }
}
