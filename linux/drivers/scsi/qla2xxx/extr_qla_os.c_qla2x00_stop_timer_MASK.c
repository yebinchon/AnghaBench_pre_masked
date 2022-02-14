
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ timer_active; int timer; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static __inline__ void
FUNC_1(scsi_qla_host_t *VAR_0)
{
 FUNC_0(&VAR_0->timer);
 VAR_0->timer_active = 0;
}
