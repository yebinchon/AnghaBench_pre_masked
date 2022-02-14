
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct TYPE_4__ {int tx_desc_count; scalar_t__ tx_buff_pos; scalar_t__ tx_buff_size; } ;
struct atmel_private {int tx_desc_head; scalar_t__ tx_buff_head; TYPE_3__* dev; TYPE_1__ host_info; int tx_desc_free; int tx_free_mem; } ;
struct TYPE_5__ {int tx_errors; int tx_packets; } ;
struct TYPE_6__ {TYPE_2__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (struct atmel_private*,int ) ;
 scalar_t__ FUNC_1 (struct atmel_private*,int ) ;
 int FUNC_2 (struct atmel_private*,int ,int) ;
 int FUNC_3 (struct atmel_private*,int ,int ) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_5(struct atmel_private *VAR_7)
{
 int VAR_8;

 for (VAR_8 = 0;
      FUNC_1(VAR_7, FUNC_2(VAR_7, VAR_0, VAR_7->tx_desc_head)) == VAR_4 &&
       VAR_8 < VAR_7->host_info.tx_desc_count;
      VAR_8++) {
  u8 VAR_9 = FUNC_1(VAR_7, FUNC_2(VAR_7, VAR_3, VAR_7->tx_desc_head));
  u16 VAR_10 = FUNC_0(VAR_7, FUNC_2(VAR_7, VAR_2, VAR_7->tx_desc_head));
  u8 VAR_11 = FUNC_1(VAR_7, FUNC_2(VAR_7, VAR_1, VAR_7->tx_desc_head));

  FUNC_3(VAR_7, FUNC_2(VAR_7, VAR_0, VAR_7->tx_desc_head), 0);

  VAR_7->tx_free_mem += VAR_10;
  VAR_7->tx_desc_free++;

  if (VAR_7->tx_buff_head + VAR_10 > (VAR_7->host_info.tx_buff_pos + VAR_7->host_info.tx_buff_size))
   VAR_7->tx_buff_head = 0;
  else
   VAR_7->tx_buff_head += VAR_10;

  if (VAR_7->tx_desc_head < (VAR_7->host_info.tx_desc_count - 1))
   VAR_7->tx_desc_head++ ;
  else
   VAR_7->tx_desc_head = 0;

  if (VAR_11 == VAR_5) {
   if (VAR_9 == VAR_6)
    VAR_7->dev->stats.tx_packets++;
   else
    VAR_7->dev->stats.tx_errors++;
   FUNC_4(VAR_7->dev);
  }
 }
}
