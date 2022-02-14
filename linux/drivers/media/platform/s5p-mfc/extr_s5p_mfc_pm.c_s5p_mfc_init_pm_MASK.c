
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int num_clocks; int * device; int ** clocks; int * clock_gate; int * clk_names; } ;
struct s5p_mfc_dev {TYPE_2__* variant; TYPE_1__* plat_dev; TYPE_3__ pm; } ;
struct TYPE_5__ {int num_clocks; scalar_t__ use_clock_gating; int * clk_names; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (char*,int ) ;
 struct s5p_mfc_dev* VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_5 (int *) ;

int FUNC_6(struct s5p_mfc_dev *VAR_4)
{
 int VAR_5;

 VAR_3 = &VAR_4->pm;
 VAR_2 = VAR_4;

 VAR_3->num_clocks = VAR_4->variant->num_clocks;
 VAR_3->clk_names = VAR_4->variant->clk_names;
 VAR_3->device = &VAR_4->plat_dev->dev;
 VAR_3->clock_gate = ((void*)0);


 for (VAR_5 = 0; VAR_5 < VAR_3->num_clocks; VAR_5++) {
  VAR_3->clocks[VAR_5] = FUNC_3(VAR_3->device, VAR_3->clk_names[VAR_5]);
  if (FUNC_0(VAR_3->clocks[VAR_5])) {

   if (VAR_5 && FUNC_1(VAR_3->clocks[VAR_5]) == -VAR_0) {
    VAR_3->clocks[VAR_5] = ((void*)0);
    continue;
   }
   FUNC_4("Failed to get clock: %s\n",
    VAR_3->clk_names[VAR_5]);
   return FUNC_1(VAR_3->clocks[VAR_5]);
  }
 }

 if (VAR_4->variant->use_clock_gating)
  VAR_3->clock_gate = VAR_3->clocks[0];

 FUNC_5(VAR_3->device);
 FUNC_2(&VAR_1, 0);
 return 0;
}
