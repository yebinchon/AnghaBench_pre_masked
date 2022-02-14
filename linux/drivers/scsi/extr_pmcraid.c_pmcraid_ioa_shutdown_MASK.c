
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pmcraid_cmd {int drv_inst; TYPE_3__* ioa_cb; } ;
struct TYPE_5__ {int response_handle; int * cdb; int resource_handle; int request_type; } ;
struct TYPE_4__ {int ioasc; } ;
struct TYPE_6__ {TYPE_2__ ioarcb; TYPE_1__ ioasa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,...) ;
 int VAR_6 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct pmcraid_cmd*) ;
 int FUNC_5 (struct pmcraid_cmd*,int ,int ,int ) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_6(struct pmcraid_cmd *VAR_8)
{
 FUNC_2("response for Cancel CCN CDB[0] = %x ioasc = %x\n",
       VAR_8->ioa_cb->ioarcb.cdb[0],
       FUNC_1(VAR_8->ioa_cb->ioasa.ioasc));




 FUNC_4(VAR_8);
 VAR_8->ioa_cb->ioarcb.request_type = VAR_5;
 VAR_8->ioa_cb->ioarcb.resource_handle =
  FUNC_0(VAR_0);
 VAR_8->ioa_cb->ioarcb.cdb[0] = VAR_1;
 VAR_8->ioa_cb->ioarcb.cdb[1] = VAR_2;


 FUNC_2("firing normal shutdown command (%d) to IOA\n",
       FUNC_1(VAR_8->ioa_cb->ioarcb.response_handle));

 FUNC_3(VAR_8->drv_inst, VAR_4);

 FUNC_5(VAR_8, VAR_6,
    VAR_3,
    VAR_7);
}
