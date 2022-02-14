
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cdns3_trb {int dummy; } ;
struct cdns3_endpoint {int wa1_set; int enqueue; int wa1_trb_index; struct cdns3_trb* wa1_trb; scalar_t__ pcs; int wa1_cycle_bit; struct cdns3_device* cdns3_dev; } ;
struct cdns3_device {TYPE_1__* regs; } ;
struct TYPE_2__ {int ep_cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct cdns3_endpoint*,char*) ;

__attribute__((used)) static int FUNC_2(struct cdns3_endpoint *VAR_2,
      struct cdns3_trb *VAR_3)
{
 struct cdns3_device *VAR_4 = VAR_2->cdns3_dev;

 if (!VAR_2->wa1_set) {
  u32 VAR_5;

  VAR_5 = !!(FUNC_0(&VAR_4->regs->ep_cmd) & VAR_0);

  if (VAR_5) {
   VAR_2->wa1_cycle_bit = VAR_2->pcs ? VAR_1 : 0;
   VAR_2->wa1_set = 1;
   VAR_2->wa1_trb = VAR_3;
   VAR_2->wa1_trb_index = VAR_2->enqueue;
   FUNC_1(VAR_2, "set guard");
   return 0;
  }
 }
 return 1;
}
