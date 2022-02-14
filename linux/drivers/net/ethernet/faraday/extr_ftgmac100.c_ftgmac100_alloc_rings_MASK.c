
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftgmac100_txdes {int dummy; } ;
struct ftgmac100_rxdes {int dummy; } ;
struct ftgmac100 {void* rx_scratch; int rx_scratch_dma; int dev; void* txdes; int txdes_dma; void* rxdes; int rxdes_dma; void* tx_skbs; void* rx_skbs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ,int,int *,int ) ;
 void* FUNC_1 (int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct ftgmac100 *VAR_5)
{

 VAR_5->rx_skbs = FUNC_1(VAR_2, sizeof(void *),
    VAR_1);
 if (!VAR_5->rx_skbs)
  return -VAR_0;
 VAR_5->tx_skbs = FUNC_1(VAR_3, sizeof(void *),
    VAR_1);
 if (!VAR_5->tx_skbs)
  return -VAR_0;


 VAR_5->rxdes = FUNC_0(VAR_5->dev,
      VAR_2 * sizeof(struct ftgmac100_rxdes),
      &VAR_5->rxdes_dma, VAR_1);
 if (!VAR_5->rxdes)
  return -VAR_0;
 VAR_5->txdes = FUNC_0(VAR_5->dev,
      VAR_3 * sizeof(struct ftgmac100_txdes),
      &VAR_5->txdes_dma, VAR_1);
 if (!VAR_5->txdes)
  return -VAR_0;


 VAR_5->rx_scratch = FUNC_0(VAR_5->dev,
           VAR_4,
           &VAR_5->rx_scratch_dma,
           VAR_1);
 if (!VAR_5->rx_scratch)
  return -VAR_0;

 return 0;
}
