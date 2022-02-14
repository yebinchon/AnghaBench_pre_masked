
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pqi_ctrl_info {TYPE_1__* registers; } ;
struct TYPE_2__ {int sis_firmware_status; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

bool FUNC_1(struct pqi_ctrl_info *VAR_1)
{
 return FUNC_0(&VAR_1->registers->sis_firmware_status) &
    VAR_0;
}
