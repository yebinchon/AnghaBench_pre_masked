
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* hw; } ;
typedef TYPE_3__ scsi_qla_host_t ;
struct TYPE_6__ {int fw_started; } ;
struct TYPE_7__ {TYPE_1__ flags; } ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static inline int
FUNC_1(scsi_qla_host_t *VAR_0)
{
 return (FUNC_0(VAR_0) || !VAR_0->hw->flags.fw_started);
}
