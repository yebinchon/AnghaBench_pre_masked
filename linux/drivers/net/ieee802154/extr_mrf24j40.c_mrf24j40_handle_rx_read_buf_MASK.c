
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int len; } ;
struct mrf24j40 {int* rx_addr_buf; int rx_buf_msg; int spi; int * rx_buf; TYPE_1__ rx_fifo_buf_trx; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mrf24j40*) ;
 int FUNC_4 (struct mrf24j40*) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(void *VAR_2)
{
 struct mrf24j40 *VAR_3 = VAR_2;
 u16 VAR_4;
 int VAR_5;


 if (!FUNC_2(VAR_3->rx_buf[2]))
  VAR_3->rx_buf[2] = VAR_0;

 VAR_4 = FUNC_0(VAR_1 + 1);
 VAR_3->rx_addr_buf[0] = VAR_4 >> 8 & 0xff;
 VAR_3->rx_addr_buf[1] = VAR_4 & 0xff;
 VAR_3->rx_fifo_buf_trx.len = VAR_3->rx_buf[2];
 VAR_5 = FUNC_5(VAR_3->spi, &VAR_3->rx_buf_msg);
 if (VAR_5) {
  FUNC_1(FUNC_4(VAR_3), "failed to read rx buffer\n");
  FUNC_3(VAR_3);
 }
}
