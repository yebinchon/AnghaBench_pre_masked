
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pmcraid_ioarcb {int * cdb; int request_type; int resource_handle; } ;
struct pmcraid_cmd {int release; TYPE_1__* drv_inst; TYPE_2__* ioa_cb; } ;
struct TYPE_4__ {struct pmcraid_ioarcb ioarcb; } ;
struct TYPE_3__ {scalar_t__ reinit_cfg_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 void FUNC_1 (struct pmcraid_cmd*) ;
 void FUNC_2 (struct pmcraid_cmd*) ;
 int FUNC_3 (struct pmcraid_cmd*) ;
 int FUNC_4 (struct pmcraid_cmd*,void (*) (struct pmcraid_cmd*),int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_5(struct pmcraid_cmd *VAR_6)
{
 struct pmcraid_ioarcb *VAR_7 = &VAR_6->ioa_cb->ioarcb;
 void (*VAR_8) (struct pmcraid_cmd *) = FUNC_1;

 FUNC_3(VAR_6);

 VAR_7->resource_handle = FUNC_0(VAR_1);
 VAR_7->request_type = VAR_4;
 VAR_7->cdb[0] = VAR_2;
 VAR_7->cdb[1] = VAR_0;





 if (VAR_6->drv_inst->reinit_cfg_table) {
  VAR_6->drv_inst->reinit_cfg_table = 0;
  VAR_6->release = 1;
  VAR_8 = FUNC_2;
 }





 FUNC_4(VAR_6,
    VAR_8,
    VAR_3,
    VAR_5);
 return;
}
