
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct au1550_spi {scalar_t__ dma_rx_tmpbuf_size; scalar_t__ dma_rx_tmpbuf; int dma_rx_tmpbuf_addr; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__,int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct au1550_spi *VAR_1)
{
 FUNC_0(VAR_1->dev, VAR_1->dma_rx_tmpbuf_addr,
   VAR_1->dma_rx_tmpbuf_size, VAR_0);
 FUNC_1(VAR_1->dma_rx_tmpbuf);
 VAR_1->dma_rx_tmpbuf = 0;
 VAR_1->dma_rx_tmpbuf_size = 0;
}
