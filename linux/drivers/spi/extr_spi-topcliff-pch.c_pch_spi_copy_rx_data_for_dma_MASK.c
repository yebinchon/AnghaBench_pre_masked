
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_3__ {int * rx_buf_virt; } ;
struct pch_spi_data {int bpw_len; TYPE_2__* cur_trans; TYPE_1__ dma; } ;
struct TYPE_4__ {int * rx_buf; } ;



__attribute__((used)) static void FUNC_0(struct pch_spi_data *VAR_0, int VAR_1)
{
 int VAR_2;
 u8 *VAR_3;
 u16 *VAR_4;
 const u8 *VAR_5;
 const u16 *VAR_6;


 if (!VAR_0->cur_trans->rx_buf)
  return;

 if (VAR_1 == 8) {
  VAR_3 = VAR_0->cur_trans->rx_buf;
  VAR_5 = VAR_0->dma.rx_buf_virt;
  for (VAR_2 = 0; VAR_2 < VAR_0->bpw_len; VAR_2++)
   *VAR_3++ = *VAR_5++ & 0xFF;
  VAR_0->cur_trans->rx_buf = VAR_3;
 } else {
  VAR_4 = VAR_0->cur_trans->rx_buf;
  VAR_6 = VAR_0->dma.rx_buf_virt;
  for (VAR_2 = 0; VAR_2 < VAR_0->bpw_len; VAR_2++)
   *VAR_4++ = *VAR_6++;
  VAR_0->cur_trans->rx_buf = VAR_4;
 }
}
