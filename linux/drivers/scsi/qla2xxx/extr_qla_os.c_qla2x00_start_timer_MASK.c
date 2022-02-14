
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ expires; } ;
struct TYPE_5__ {int timer_active; TYPE_2__ timer; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 unsigned long VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;

__inline__ void
FUNC_2(scsi_qla_host_t *VAR_3, unsigned long VAR_4)
{
 FUNC_1(&VAR_3->timer, VAR_2, 0);
 VAR_3->timer.expires = VAR_1 + VAR_4 * VAR_0;
 FUNC_0(&VAR_3->timer);
 VAR_3->timer_active = 1;
}
