
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pmcraid_cmd {TYPE_2__* ioa_cb; } ;
struct TYPE_3__ {int residual_data_length; int ioasc; } ;
struct TYPE_4__ {TYPE_1__ ioasa; } ;


 scalar_t__ FUNC_0 (struct pmcraid_cmd*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pmcraid_cmd*) ;

__attribute__((used)) static void FUNC_3(struct pmcraid_cmd *VAR_0)
{
 u32 VAR_1 = FUNC_1(VAR_0->ioa_cb->ioasa.ioasc);
 u32 VAR_2 = FUNC_1(VAR_0->ioa_cb->ioasa.residual_data_length);

 if (FUNC_0(VAR_0, VAR_2, VAR_1) == 0)
  FUNC_2(VAR_0);
}
