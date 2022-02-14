
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cdns3_endpoint {int wa1_trb_index; TYPE_1__* wa1_trb; scalar_t__ wa1_cycle_bit; scalar_t__ wa1_set; } ;
struct TYPE_2__ {int control; } ;


 int FUNC_0 (struct cdns3_endpoint*,char*) ;

void FUNC_1(struct cdns3_endpoint *VAR_0)
{

 if (VAR_0->wa1_set) {
  FUNC_0(VAR_0, "restore cycle bit");

  VAR_0->wa1_set = 0;
  VAR_0->wa1_trb_index = 0xFFFF;
  if (VAR_0->wa1_cycle_bit) {
   VAR_0->wa1_trb->control =
    VAR_0->wa1_trb->control | 0x1;
  } else {
   VAR_0->wa1_trb->control =
    VAR_0->wa1_trb->control & ~0x1;
  }
 }
}
