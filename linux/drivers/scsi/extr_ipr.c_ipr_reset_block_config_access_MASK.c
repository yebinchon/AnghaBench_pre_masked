
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int time_left; } ;
struct ipr_cmnd {TYPE_2__ u; int job_step; TYPE_1__* ioa_cfg; } ;
struct TYPE_3__ {scalar_t__ cfg_locked; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct ipr_cmnd *VAR_3)
{
 VAR_3->ioa_cfg->cfg_locked = 0;
 VAR_3->job_step = VAR_2;
 VAR_3->u.time_left = VAR_1;
 return VAR_0;
}
