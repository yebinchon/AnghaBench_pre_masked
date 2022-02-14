
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct ena_eth_io_rx_desc {int ctrl; int buff_addr_hi; scalar_t__ buff_addr_lo; int req_id; int length; } ;
struct ena_com_io_sq {scalar_t__ direction; int phase; scalar_t__ dma_addr_bits; } ;
struct ena_com_buf {int paddr; int len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct ena_com_io_sq*,int) ;
 int FUNC_3 (struct ena_com_io_sq*) ;
 struct ena_eth_io_rx_desc* FUNC_4 (struct ena_com_io_sq*) ;
 int FUNC_5 (struct ena_eth_io_rx_desc*,int,int) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct ena_com_io_sq *VAR_7,
          struct ena_com_buf *VAR_8,
          u16 VAR_9)
{
 struct ena_eth_io_rx_desc *VAR_10;

 FUNC_1(VAR_7->direction != VAR_1, "wrong Q type");

 if (FUNC_6(!FUNC_2(VAR_7, 1)))
  return -VAR_6;

 VAR_10 = FUNC_4(VAR_7);
 if (FUNC_6(!VAR_10))
  return -VAR_0;

 FUNC_5(VAR_10, 0x0, sizeof(struct ena_eth_io_rx_desc));

 VAR_10->length = VAR_8->len;

 VAR_10->ctrl = VAR_3;
 VAR_10->ctrl |= VAR_4;
 VAR_10->ctrl |= VAR_7->phase & VAR_5;
 VAR_10->ctrl |= VAR_2;

 VAR_10->req_id = VAR_9;

 VAR_10->buff_addr_lo = (u32)VAR_8->paddr;
 VAR_10->buff_addr_hi =
  ((VAR_8->paddr & FUNC_0(VAR_7->dma_addr_bits - 1, 32)) >> 32);

 return FUNC_3(VAR_7);
}
