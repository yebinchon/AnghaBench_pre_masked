
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cas {int rx_fifo_size; int rx_pause_off; int rx_pause_on; TYPE_1__* dev; } ;
struct TYPE_2__ {int mtu; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct cas *VAR_1)
{



 if (VAR_1->rx_fifo_size <= (2 * 1024)) {
  VAR_1->rx_pause_off = VAR_1->rx_pause_on = VAR_1->rx_fifo_size;
 } else {
  int VAR_2 = (VAR_1->dev->mtu + VAR_0 + 4 + 4 + 64) & ~63;
  if (VAR_2 * 3 > VAR_1->rx_fifo_size) {
   VAR_1->rx_pause_off = 7104;
   VAR_1->rx_pause_on = 960;
  } else {
   int VAR_3 = (VAR_1->rx_fifo_size - (VAR_2 * 2));
   int VAR_4 = VAR_3 - VAR_2;
   VAR_1->rx_pause_off = VAR_3;
   VAR_1->rx_pause_on = VAR_4;
  }
 }
}
