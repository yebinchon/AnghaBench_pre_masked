
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pmcraid_cmd {TYPE_3__* ioa_cb; } ;
struct TYPE_5__ {int ioasc; } ;
struct TYPE_4__ {int * cdb; } ;
struct TYPE_6__ {TYPE_2__ ioasa; TYPE_1__ ioarcb; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pmcraid_cmd*,int ,int ) ;
 int FUNC_2 (char*,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct pmcraid_cmd*) ;

__attribute__((used)) static void FUNC_4(struct pmcraid_cmd *VAR_2)
{
 FUNC_2("response for Cancel LDN CDB[0] = %x ioasc = %x\n",
       VAR_2->ioa_cb->ioarcb.cdb[0],
       FUNC_0(VAR_2->ioa_cb->ioasa.ioasc));

 FUNC_3(VAR_2);

 FUNC_1(VAR_2,
       VAR_0,
       VAR_1);
}
