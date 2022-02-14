
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mxser_port {scalar_t__ type; int rx_trigger; int rx_high_water; int rx_low_water; int xmit_fifo_size; TYPE_1__* board; } ;
struct TYPE_4__ {scalar_t__ type; int rx_trigger; int rx_low_water; int rx_high_water; int xmit_fifo_size; } ;
struct TYPE_3__ {scalar_t__ chip_flag; } ;


 TYPE_2__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct mxser_port *VAR_4)
{
 int VAR_5;

 if ((VAR_4->type == VAR_1) || (VAR_4->type == VAR_2)) {
  VAR_4->rx_trigger = 1;
  VAR_4->rx_high_water = 1;
  VAR_4->rx_low_water = 1;
  VAR_4->xmit_fifo_size = 1;
 } else
  for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
   if (VAR_4->board->chip_flag == VAR_0[VAR_5].type) {
    VAR_4->rx_trigger = VAR_0[VAR_5].rx_trigger;
    VAR_4->rx_low_water = VAR_0[VAR_5].rx_low_water;
    VAR_4->rx_high_water = VAR_0[VAR_5].rx_high_water;
    VAR_4->xmit_fifo_size = VAR_0[VAR_5].xmit_fifo_size;
    break;
   }
}
