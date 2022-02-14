
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct zynqmp_qspi {int bytes_to_receive; int dma_rx_bytes; int dma_addr; int mode; int dev; scalar_t__ rxbuf; } ;
typedef int dma_addr_t ;


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
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,void*,int,int ) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (struct zynqmp_qspi*,int ) ;
 int FUNC_4 (struct zynqmp_qspi*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct zynqmp_qspi *VAR_10)
{
 u32 VAR_11, VAR_12, VAR_13;
 dma_addr_t VAR_14;
 u64 VAR_15 = (u64)(uintptr_t)VAR_10->rxbuf;

 if ((VAR_10->bytes_to_receive < 8) ||
  ((VAR_15 & VAR_4) != 0x0)) {

  VAR_13 = FUNC_3(VAR_10, VAR_3);
  VAR_13 &= ~VAR_2;
  FUNC_4(VAR_10, VAR_3, VAR_13);
  VAR_10->mode = VAR_6;
  VAR_10->dma_rx_bytes = 0;
  return;
 }

 VAR_12 = VAR_10->bytes_to_receive % 4;
 VAR_11 = (VAR_10->bytes_to_receive - VAR_12);

 VAR_14 = FUNC_1(VAR_10->dev, (void *)VAR_10->rxbuf,
      VAR_11, VAR_0);
 if (FUNC_2(VAR_10->dev, VAR_14))
  FUNC_0(VAR_10->dev, "ERR:rxdma:memory not mapped\n");

 VAR_10->dma_rx_bytes = VAR_11;
 VAR_10->dma_addr = VAR_14;
 FUNC_4(VAR_10, VAR_8,
    (u32)(VAR_14 & 0xffffffff));
 VAR_14 = ((VAR_14 >> 16) >> 16);
 FUNC_4(VAR_10, VAR_7,
    ((u32)VAR_14) & 0xfff);


 VAR_13 = FUNC_3(VAR_10, VAR_3);
 VAR_13 &= ~VAR_2;
 VAR_13 |= VAR_1;
 FUNC_4(VAR_10, VAR_3, VAR_13);


 VAR_10->mode = VAR_5;


 FUNC_4(VAR_10, VAR_9, VAR_11);
}
