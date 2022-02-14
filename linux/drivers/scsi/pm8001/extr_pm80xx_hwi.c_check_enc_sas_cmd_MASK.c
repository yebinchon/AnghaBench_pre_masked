
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {TYPE_1__* cmd; } ;
struct sas_task {TYPE_2__ ssp_task; } ;
struct TYPE_3__ {scalar_t__* cmnd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(struct sas_task *VAR_3)
{
 u8 VAR_4 = VAR_3->ssp_task.cmd->cmnd[0];

 if (VAR_4 == VAR_0 || VAR_4 == VAR_1 || VAR_4 == VAR_2)
  return 1;
 else
  return 0;
}
