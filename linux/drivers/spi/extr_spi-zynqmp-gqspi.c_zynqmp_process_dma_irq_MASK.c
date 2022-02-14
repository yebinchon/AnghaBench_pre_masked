
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zynqmp_qspi {int bytes_to_receive; int genfifoentry; scalar_t__ dma_rx_bytes; int rxbuf; int dma_addr; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ,scalar_t__,int ) ;
 int FUNC_1 (struct zynqmp_qspi*,int ) ;
 int FUNC_2 (struct zynqmp_qspi*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct zynqmp_qspi *VAR_11)
{
 u32 VAR_12, VAR_13;

 FUNC_0(VAR_11->dev, VAR_11->dma_addr,
    VAR_11->dma_rx_bytes, VAR_0);
 VAR_11->rxbuf += VAR_11->dma_rx_bytes;
 VAR_11->bytes_to_receive -= VAR_11->dma_rx_bytes;
 VAR_11->dma_rx_bytes = 0;


 FUNC_2(VAR_11, VAR_9,
     VAR_10);

 if (VAR_11->bytes_to_receive > 0) {

  VAR_12 = FUNC_1(VAR_11, VAR_3);
  VAR_12 &= ~VAR_1;
  FUNC_2(VAR_11, VAR_3, VAR_12);


  VAR_13 = VAR_11->genfifoentry;
  VAR_13 |= VAR_11->bytes_to_receive;
  FUNC_2(VAR_11, VAR_4, VAR_13);


  FUNC_2(VAR_11, VAR_4, 0x0);


  FUNC_2(VAR_11, VAR_3,
   (FUNC_1(VAR_11, VAR_3) |
   VAR_2));


  FUNC_2(VAR_11, VAR_6,
    VAR_5 |
    VAR_8 |
    VAR_7);
 }
}
