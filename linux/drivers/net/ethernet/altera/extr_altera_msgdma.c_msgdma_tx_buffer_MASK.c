
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tse_buffer {int len; int dma_addr; } ;
struct altera_tse_private {int tx_dma_desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int VAR_9 ;

int FUNC_4(struct altera_tse_private *VAR_10, struct tse_buffer *VAR_11)
{
 FUNC_0(FUNC_1(VAR_11->dma_addr), VAR_10->tx_dma_desc,
  FUNC_2(VAR_6));
 FUNC_0(FUNC_3(VAR_11->dma_addr), VAR_10->tx_dma_desc,
  FUNC_2(VAR_5));
 FUNC_0(0, VAR_10->tx_dma_desc, FUNC_2(VAR_9));
 FUNC_0(0, VAR_10->tx_dma_desc, FUNC_2(VAR_8));
 FUNC_0(VAR_11->len, VAR_10->tx_dma_desc, FUNC_2(VAR_4));
 FUNC_0(0, VAR_10->tx_dma_desc, FUNC_2(VAR_2));
 FUNC_0(VAR_1, VAR_10->tx_dma_desc,
  FUNC_2(VAR_7));
 FUNC_0(VAR_0, VAR_10->tx_dma_desc,
  FUNC_2(VAR_3));
 return 0;
}
