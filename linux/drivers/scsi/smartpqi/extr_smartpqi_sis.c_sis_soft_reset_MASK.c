
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pqi_ctrl_info {TYPE_1__* registers; } ;
struct TYPE_2__ {int sis_host_to_ctrl_doorbell; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

void FUNC_1(struct pqi_ctrl_info *VAR_1)
{
 FUNC_0(VAR_0,
  &VAR_1->registers->sis_host_to_ctrl_doorbell);
}
