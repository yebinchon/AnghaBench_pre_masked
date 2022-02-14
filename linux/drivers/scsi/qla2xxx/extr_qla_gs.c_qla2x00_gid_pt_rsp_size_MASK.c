
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;
struct TYPE_4__ {int max_fibre_devices; } ;



__attribute__((used)) static inline int
FUNC_0(scsi_qla_host_t *VAR_0)
{
 return VAR_0->hw->max_fibre_devices * 4 + 16;
}
