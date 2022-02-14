
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {size_t len; int const* tx_buf; } ;
struct mrf24j40 {int* tx_hdr_buf; int* tx_len_buf; int tx_msg; int spi; TYPE_1__ tx_buf_trx; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct mrf24j40*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct mrf24j40 *VAR_1, u16 VAR_2,
   const u8 *VAR_3, size_t VAR_4)
{
 u16 VAR_5;
 int VAR_6;


 if (VAR_4 > VAR_0-2) {
  FUNC_1(FUNC_2(VAR_1), "write_tx_buf() was passed too large a buffer. Performing short write.\n");
  VAR_4 = VAR_0-2;
 }

 VAR_5 = FUNC_0(VAR_2);
 VAR_1->tx_hdr_buf[0] = VAR_5 >> 8 & 0xff;
 VAR_1->tx_hdr_buf[1] = VAR_5 & 0xff;
 VAR_1->tx_len_buf[0] = 0x0;
 VAR_1->tx_len_buf[1] = VAR_4;
 VAR_1->tx_buf_trx.tx_buf = VAR_3;
 VAR_1->tx_buf_trx.len = VAR_4;

 VAR_6 = FUNC_3(VAR_1->spi, &VAR_1->tx_msg);
 if (VAR_6)
  FUNC_1(FUNC_2(VAR_1), "SPI write Failed for TX buf\n");

 return VAR_6;
}
