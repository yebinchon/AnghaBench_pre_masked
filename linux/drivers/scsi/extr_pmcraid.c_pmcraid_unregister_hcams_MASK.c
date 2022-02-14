
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ignore; } ;
struct TYPE_3__ {int ignore; } ;
struct pmcraid_instance {int ioa_state; scalar_t__ ioa_unit_check; scalar_t__ force_ioa_reset; int ioa_bringdown; TYPE_2__ ldn; TYPE_1__ ccn; } ;
struct pmcraid_cmd {struct pmcraid_instance* drv_inst; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct pmcraid_cmd*) ;
 int FUNC_2 (struct pmcraid_cmd*) ;

__attribute__((used)) static void FUNC_3(struct pmcraid_cmd *VAR_1)
{
 struct pmcraid_instance *VAR_2 = VAR_1->drv_inst;






 FUNC_0(&VAR_2->ccn.ignore, 1);
 FUNC_0(&VAR_2->ldn.ignore, 1);





 if ((VAR_2->force_ioa_reset && !VAR_2->ioa_bringdown) ||
      VAR_2->ioa_unit_check) {
  VAR_2->force_ioa_reset = 0;
  VAR_2->ioa_unit_check = 0;
  VAR_2->ioa_state = VAR_0;
  FUNC_2(VAR_1);
  return;
 }





 FUNC_1(VAR_1);
}
