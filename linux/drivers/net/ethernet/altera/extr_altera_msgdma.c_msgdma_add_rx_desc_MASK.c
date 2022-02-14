
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tse_buffer {int dma_addr; } ;
struct altera_tse_private {int rx_dma_buf_sz; int rx_dma_desc; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ) ;
 int VAR_10 ;
 int VAR_11 ;

void FUNC_4(struct altera_tse_private *VAR_12,
   struct tse_buffer *VAR_13)
{
 u32 VAR_14 = VAR_12->rx_dma_buf_sz;
 dma_addr_t VAR_15 = VAR_13->dma_addr;
 u32 VAR_16 = (VAR_1
   | VAR_2
   | VAR_4
   | VAR_0
   | VAR_5
   | VAR_3);

 FUNC_0(0, VAR_12->rx_dma_desc, FUNC_2(VAR_8));
 FUNC_0(0, VAR_12->rx_dma_desc, FUNC_2(VAR_7));
 FUNC_0(FUNC_1(VAR_15), VAR_12->rx_dma_desc,
  FUNC_2(VAR_11));
 FUNC_0(FUNC_3(VAR_15), VAR_12->rx_dma_desc,
  FUNC_2(VAR_10));
 FUNC_0(VAR_14, VAR_12->rx_dma_desc, FUNC_2(VAR_14));
 FUNC_0(0, VAR_12->rx_dma_desc, FUNC_2(VAR_6));
 FUNC_0(0x00010001, VAR_12->rx_dma_desc, FUNC_2(VAR_9));
 FUNC_0(VAR_16, VAR_12->rx_dma_desc, FUNC_2(VAR_16));
}
