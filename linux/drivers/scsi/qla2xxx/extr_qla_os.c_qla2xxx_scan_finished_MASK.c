
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct Scsi_Host {int dummy; } ;
struct TYPE_5__ {int loop_state; TYPE_1__* hw; int host; int dpc_flags; } ;
typedef TYPE_2__ scsi_qla_host_t ;
struct TYPE_4__ {unsigned long loop_reset_delay; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (struct Scsi_Host*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static int
FUNC_3(struct Scsi_Host *VAR_3, unsigned long VAR_4)
{
 scsi_qla_host_t *VAR_5 = FUNC_1(VAR_3);

 if (FUNC_2(VAR_2, &VAR_5->dpc_flags))
  return 1;
 if (!VAR_5->host)
  return 1;
 if (VAR_4 > VAR_5->hw->loop_reset_delay * VAR_0)
  return 1;

 return FUNC_0(&VAR_5->loop_state) == VAR_1;
}
