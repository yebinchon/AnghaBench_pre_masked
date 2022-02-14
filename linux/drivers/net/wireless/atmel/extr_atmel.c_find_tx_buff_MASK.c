
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ tx_buff_size; scalar_t__ tx_buff_pos; } ;
struct atmel_private {scalar_t__ tx_buff_tail; int tx_desc_free; scalar_t__ tx_free_mem; TYPE_1__ host_info; } ;



__attribute__((used)) static u16 FUNC_0(struct atmel_private *VAR_0, u16 VAR_1)
{
 u16 VAR_2 = VAR_0->host_info.tx_buff_size - VAR_0->tx_buff_tail;

 if (VAR_0->tx_desc_free == 3 || VAR_0->tx_free_mem < VAR_1)
  return 0;

 if (VAR_2 >= VAR_1)
  return VAR_0->host_info.tx_buff_pos + VAR_0->tx_buff_tail;

 if (VAR_0->tx_free_mem - VAR_2 >= VAR_1) {
  VAR_0->tx_buff_tail = 0;
  return VAR_0->host_info.tx_buff_pos;
 }

 return 0;
}
