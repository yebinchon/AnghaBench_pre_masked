
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pqi_ctrl_info {TYPE_1__* registers; } ;
struct TYPE_2__ {int sis_host_to_ctrl_doorbell; int sis_firmware_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct pqi_ctrl_info *VAR_2)
{
 if (FUNC_0(&VAR_2->registers->sis_firmware_status) &
  VAR_0)
  return;

 FUNC_1(VAR_1,
  &VAR_2->registers->sis_host_to_ctrl_doorbell);
}
