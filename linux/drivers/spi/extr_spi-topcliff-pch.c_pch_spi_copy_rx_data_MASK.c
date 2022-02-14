
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct pch_spi_data {int bpw_len; int* pkt_rx_buff; TYPE_1__* cur_trans; } ;
struct TYPE_2__ {int * rx_buf; } ;



__attribute__((used)) static void FUNC_0(struct pch_spi_data *VAR_0, int VAR_1)
{
 int VAR_2;
 u8 *VAR_3;
 u16 *VAR_4;


 if (!VAR_0->cur_trans->rx_buf)
  return;

 if (VAR_1 == 8) {
  VAR_3 = VAR_0->cur_trans->rx_buf;
  for (VAR_2 = 0; VAR_2 < VAR_0->bpw_len; VAR_2++)
   *VAR_3++ = VAR_0->pkt_rx_buff[VAR_2] & 0xFF;
 } else {
  VAR_4 = VAR_0->cur_trans->rx_buf;
  for (VAR_2 = 0; VAR_2 < VAR_0->bpw_len; VAR_2++)
   *VAR_4++ = VAR_0->pkt_rx_buff[VAR_2];
 }
}
